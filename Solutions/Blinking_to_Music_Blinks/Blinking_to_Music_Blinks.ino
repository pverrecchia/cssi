//Globals 
boolean on = false;
int currentState = 0;
int count = 0;
int ceiling;
int sensorValue;


void setup() {
  //Initialize the pins
  pinMode(12, OUTPUT); //green
  pinMode(11, OUTPUT); //blue
  pinMode(10, OUTPUT); //red

  ceiling = 25;
}

void loop() {
  //Get speaker voltage
  sensorValue = analogRead(A0);

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
        digitalWrite(12, HIGH);  //turn light on
        break;

      case 1:
        digitalWrite(11, HIGH);  //turn light on
        break;

      case 2:
        digitalWrite(10, HIGH);  //turn light on
        break;

      default: //always have this!
        break;
    }

    count ++;
  }
  //This happens when the music gets softer
  else if ((sensorValue < ceiling) && on)
  {
    //set flags and turn lights off
    on = false;
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
  }

  //delay
  delay(2.5);
}
