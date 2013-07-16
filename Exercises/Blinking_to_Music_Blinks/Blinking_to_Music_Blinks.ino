//Globals 
boolean on = false;
int currentState = 0;
int count = 0;
int ceiling;
int sensorValue;


void setup() {
  //Initialize the output pins
  
  //Set the ceiling value
  ceiling = 25;
}

void loop() {
  //Get speaker voltage
  //how can we store the voltage in the sensorValue variable?
  //HINT! Use the online API

  
  //What should be do if the lights aren't on, but the music is getting louder?
  if ((sensorValue > ceiling) && !on)
  {
    //set flag
    on = true;
    
    //We want to keep track of the number of samples we've taken
    //How many samples should be between lights changing?
    if (count > 20)
    {
      //When should we increment the state?
      if (currentState <= 2)
      {
        currentState ++;
      }
      //What should we do when we're at the last state
      else
      {
         currentState = 0;
      }
      
      //We should reset the number of samples
      count = 0;
    }
    

    //Switch Statements!
    switch(currentState){
      case 0:
        //Turn one light on
        
      case 1:
        //Turn another light on

      case 2:
        //Turn a the final light on
        
      //What should a switch statement always have?
    }
    
    count ++;  //increment the number of samples that have been taken
  }
  //This happens when the music gets softer
  else if ((sensorValue < ceiling) && on)
  {
    //What happens to the on flag?
    //What happens to the lights?

  }
  
  //delay
  delay(2.5);
}


