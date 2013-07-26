// NOTE: Constants do not change. Used here to set pin numbers.
const int redPin =  11;
const int yellowPin =  12; 
// DO: Set the constant greenPin to 13

// NOTE: For different colors -- 0 = off, 1 = red, 2 = yellow, 3 = green
int state = 0;

// NOTE: This variable will store last time LED was updated
long previousMillis = 0;

// NOTE: The following variable is used to store the interval at which the LED should blink. It is a
// long because the time, measured in miliseconds, will quickly become a bigger number than can be 
// stored in an int.
long interval = 1000;

// NOTE: This is the setup function used to initialize the Arduino
void setup() {
  // NOTE: Set the pins to OUTPUT mode
  pinMode(redPin, OUTPUT);      
  pinMode(yellowPin, OUTPUT);   
  // DO: Set the greenPin to output mode

  // NOTE: Setting the traffic light to red to start
  digitalWrite(redPin, HIGH);
  state = 1;
}

// NOTE: This is the loop function that runs when the Ardunio runs
void loop()
{
  // NOTE: Here is where you'd put code that needs to be running all the time.
  // Check to see if it's time to blink the LED; that is, if the 
  // difference between the current time and last time you blinked 
  // the LED is bigger than the interval at which you want to 
  // blink the LED.
  unsigned long currentMillis = millis();
 
  // NOTE: currentMillis - previousMillis = the amout of time between light changes
  if(currentMillis - previousMillis > interval) {
    // NOTE: the following variable saves the last time the LED blinked 
    previousMillis = currentMillis;   
  
    //NOTE: Swtich statement is used to move between states
    switch(state){
      case 1:
         digitalWrite(redPin, LOW);
         digitalWrite(yellowPin, HIGH);
      break;
      
      case 2:
         digitalWrite(yellowPin, LOW);
         // DO: set greenPin to HIGH
         digitalWrite();
      break;
      
      case 3:
         digitalWrite(greenPin, LOW);
         // DO: set redPin to high
      break;
      
      default:
        // DO: set all the pins (red, yellow, and green) to low
      break; 
    }

    //NOTE: determine what state to move to next
    state = (state + 1) % 3;
  }
}

