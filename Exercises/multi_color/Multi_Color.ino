// NOTE: Pin declarations (global variables)
int lightValueresistor = 12;
int redPin = 11;             
int greenPin = 10;           
int bluePin = 9;             

// NOTE: This is the setup function used to initialize the Arduino
void setup()
{
    // NOTE: Begin serial communication
    Serial.begin(9600);
    
    // NOTE: Set pins to OUTPUT mode
    pinMode(redPin, );      
    pinMode(greenPin, );
    pinMode(bluePin, );
    pinMode(lightValueresistor, );  
}

// NOTE: This is the loop function that runs when the Ardunio runs
void loop()
{
    // NOTE: This print lightValueresistor value to console
    Serial.println(analogRead(lightValueresistor));  

    // NOTE: This sets LED color based on measured brightness   
    setColor(analogRead(lightValueresistor));
           
    // DO: Delay 10 milliseconds                                     
    delay( );                                          
}

// NOTE: This is the set color method called in the loop. It sets the color of the multi-colored LED
void setColor(int lightValue)
{

  // NOTE: Switch statement to make the LED alternate between colors (using RGB values) 
  // according to the light value of the photoresistor

  // DO: If the light value is greater than 213, set the LED to RED
  if(lightValue >= 213){         
    red = 255;
    blue = 0;
    green = 0;

  }

  // DO: Else if the light value is between 170 and 213, set the LED to YELLOW
  else if(lightValue < 213 && lightValue >= 170){

  }

  // DO: Else if the light value is between 128 and 170, set the LED to GREEN
  else if(lightValue < && lightValue >=){ 

  }

  // DO: Else if the light value is between 86 and 128, set the LED to TURQUOISE (set blue and green to high)
  else if(){

  }

  // DO: Else if the light value is between 43 and 86, set the LED to BLUE

  // DO: Else if the light value is less than 43, set the LED to PURPLE
  
  // NOTE: Write RGB values to LED
  analogWrite(redPin, red);
  analogWrite(greenPin, green);

  // DO: Write the bluePin to blue
  analogWrite( , );  
}


