
#define segmentA 4 //TOP
#define segmentB 3 //top left
#define segmentC 5 //top right
#define segmentD 2 //middle
#define segmentE 7 //BOTTOM
#define segmentF 6 //BOTTOM LEFT
#define segmentG 8 //BOTTOM RIGHT

 

int var=0;      //initializes the variable for display outputs

void setup()

{
  for (int var=0;var<16;var++)
   {
     pinMode(var, OUTPUT);      //factors in the pins for variable outputs
   }
}

 

void loop()
{
  switch (var)

  {
      case 0:
        digitalWrite(segmentA, LOW);       
        digitalWrite(segmentB, LOW); 
        digitalWrite(segmentC, LOW); 
        digitalWrite(segmentD, HIGH);
        digitalWrite(segmentE, LOW); 
        digitalWrite(segmentF, LOW); 
        digitalWrite(segmentG, LOW); 
      break;         

     case 1:
        digitalWrite(segmentA, HIGH);
        digitalWrite(segmentB, HIGH);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, HIGH);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, LOW);
     break;           

     case 2:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, HIGH);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, HIGH);
     break;
                
     case 3:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, HIGH);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, LOW);
     break;

     case 4:
        digitalWrite(segmentA, HIGH);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, LOW);
     break;

     case 5:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, HIGH);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, LOW);
     break;

     case 6:
        digitalWrite(segmentA, HIGH);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, HIGH);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, LOW);
     break;

     case 7:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, HIGH);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, HIGH);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, LOW);
     break;

     case 8:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, LOW);
     break;

     case 9:
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, LOW);
     break;
                
     case 10:
        digitalWrite(segmentA, HIGH);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, HIGH);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, LOW);
     break;

     case 11:                    //This case will print 'e'
        digitalWrite(segmentA, LOW);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, HIGH);
     break;
                
     case 12:                   //This case will print an 'L'
        digitalWrite(segmentA, HIGH);
        digitalWrite(segmentB, LOW);
        digitalWrite(segmentC, HIGH);
        digitalWrite(segmentD, HIGH);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, HIGH);
     break;
                 
     case 13:                   //This case will print a backwards 'L'
        digitalWrite(segmentA, HIGH);
        digitalWrite(segmentB, HIGH);
        digitalWrite(segmentC, LOW);
        digitalWrite(segmentD, HIGH);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, HIGH);
        digitalWrite(segmentG, LOW);
     break;
                
     case 14:                    
        digitalWrite(segmentA, HIGH);
        digitalWrite(segmentB, HIGH);
        digitalWrite(segmentC, HIGH);
        digitalWrite(segmentD, LOW);
        digitalWrite(segmentE, LOW);
        digitalWrite(segmentF, LOW);
        digitalWrite(segmentG, LOW);
     break;
     break;                     //ends the switch case
  }

  if (var<16){
    var++;
    delay(1000); //delays for one second
  }
  
  if (var==15){
    var=0;
    delay(1000); 
  }               
}           
