// NOTE: Global variables
boolean on = false;
int currentState = 0;
int count = 0;
int ceiling;
int sensorValue;

void setup() {
  // NOTE: Initialize the pins and set to OUTPUT mode
  pinMode(12, OUTPUT); // Green

  // DO: Set pin 11 to OUTPUT MODE
  pinMode(11, ); // Blue

  // DO: Set pin 10 to OUTPUT MODE
  pinMode( , ); // Red
  ceiling = 25;
}

// NOTE: This is the loop function that runs when the Ardunio runs
void loop() {

  // NOTE: The analog read function get the voltage being output from the speaker
  sensorValue = analogRead(A0);

  // NOTE: If statement to check: if the lights are not on and the music is getting louder
  // DO: Write the if statement to check if: sensorValue > ceiling and !on (!on already written)
  if (( ) && !on)
  {
    // NOTE: Set flag that indicates if lights are on to true
    on = true;

    // NOTE: We want to keep track of the number of samples we have taken
    // NOTE: Once 20 samples are taken, change the lights
    // DO: Set if statement to: if count is greater than 20
    if (count >  )
    {
      
      // NOTE: Increment the state if the state is less than 2
      // DO: Set if statement to: if currentState is less than or equal to 2
      if (currentState )
      {
        // DO: Increment the currentState variable by one each iteration
      }
      
      // NOTE: The code enters this loop when we are at the last state (3)
      else
      {
        // NOTE: Set currentState to 0 in last state
        currentState = 0;
      }

      // NOTE: Resets the number of samples at the end of the loop

      // DO: Set count equal to zero
    }


    // NOTE: Switch statements to change the lights
    switch(currentState){

      // NOTE: Turn light at pin 12 on to HIGH
      case 0:
        digitalWrite(12, HIGH);
        break;

      // DO: Turn light at pin 11 on to HIGH
      case 1:
        digitalWrite(11, );
        break;

      // DO: Turn light at pin 10 on to HIGH
      case 2:

      // NOTE: Default to exit loop
      default:
        break;
    }

    // NOTE: Increment the count after every loop
    count ++;
  }

  // NOTE: This if statment is entered when the music gets softer
  
  // DO: Create else if statement that is entered in the sensorValue is less than the ceiling and on == true
  else if ( )
  {
    // NOTE: Set flag that indicates if lights are on to false
    on = false;

    // NOTE: Set the LED at pin 12 to LOW
    digitalWrite(12, LOW);

    // DO: Set the LED at pin 11 to LOW
    digitalWrite( , );

    // DO: Set the LED at pin 10 to LOW
  }

  // NOTE: Added a delay of 2.5 milliseconds
  delay(2.5);
}
