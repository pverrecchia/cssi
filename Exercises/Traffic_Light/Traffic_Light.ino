// Note: Constants do not change. Used here to set pin numbers.
const int redPin =  13;
const int yellowPin =  14; 
// DO: Set the constant greenPin to 15

int state = 0; //0 = off 1 = red 2 = yellow 3 = green

long previousMillis = 0;        // will store last time LED was updated

// Note: the following variable is used to store the interval at which the LED should blink. It is a
// long because the time, measured in miliseconds, will quickly become a bigger number than can be 
// stored in an int.
long interval = 1000;


void setup() {
  pinMode(redPin, OUTPUT);      
  pinMode(yellowPin, OUTPUT);   
  // DO: Set the greenPin to output mode

  redState = HIGH;
  digitalWrite(redPin, redState);
  state = 1;
}

void loop()
{
  // Here is where you'd put code that needs to be running all the time.
  // Check to see if it's time to blink the LED; that is, if the 
  // difference between the current time and last time you blinked 
  // the LED is bigger than the interval at which you want to 
  // blink the LED.
  unsigned long currentMillis = millis();
 
  // Note: currentMillis - previousMillis = the amout of time between light changes
  if(currentMillis - previousMillis > interval) {
    // Note: the following saves the last time you blinked the LED 
    previousMillis = currentMillis;   
  
    //Move to next state
    switch(state){
      case 1:
         digitalWrite(redPin, LOW);
         digitalWrite(yellowPin, HIGH);
      break;
      case 2:
         digitalWrite(yellowPin, LOW);
         digitalWrite(); // DO: set greenPin to HIGH
      break;
      case 3:
         digitalWrite(greenPin, LOW); // DO: set greenPin to low
         // DO: set redPin to high
      break;
      default:
         // DO: set all the pins (red, yellow, and green) to low
      break; 
    }

    //Note: determine what state to move to next
    state = (state + 1) % 3;
  }
}

