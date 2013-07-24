/* 
  Modified from example.
  Jon Oakley
  2013
  Uses:
  Constants, Switch-statements, and modulus
  
 */

// constants won't change. Used here to 
// set pin numbers:
const int redPin =  13;      // the number of the LED pin
const int yellowPin =  14; 
const int greenPin =  15;

int state = 0; //0 = off 1 = red 2 = yellow 3 = green

long previousMillis = 0;        // will store last time LED was updated

// the follow variables is a long because the time, measured in miliseconds,
// will quickly become a bigger number than can be stored in an int.
long interval = 1000;           // interval at which to blink (milliseconds)

void setup() {
  // set the digital pin as output:
  pinMode(redPin, OUTPUT);      
  pinMode(yellowPin, OUTPUT);   
  pinMode(greenPin, OUTPUT);

  redState = HIGH;
  digitalWrite(redPin, redState);
  state = 1;
}

void loop()
{
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the 
  // difference between the current time and last time you blinked 
  // the LED is bigger than the interval at which you want to 
  // blink the LED.
  unsigned long currentMillis = millis();
 
  //amout of time between light changes
  if(currentMillis - previousMillis > interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   
  
    //Move to next state
    switch(state){
      case 1:
         digitalWrite(redPin, LOW);
         digitalWrite(yellowPin, HIGH);
         break;
      case 2:
         digitalWrite(yellowPin, LOW);
         digitalWrite(greenPin, HIGH);
         break;
      case 3:
         digitalWrite(greenPin, LOW);
         digitalWrite(redPin, HIGH);
         break;
      default:
         digitalWrite(redPin, LOW);
         digitalWrite(yellowPin, LOW);
         digitalWrite(greenPin, LOW);
      break; 
    }

    //determine what state to move to next
    state = (state + 1) % 3;
  }
}
