// NOTE: Pin declarations (global variables)
int lightValueResistor = 0;                            
int redPin = 8;             
int greenPin = 9;           
int bluePin = 10;    
int red, green, blue, v = 0;
         

// NOTE: This is the setup function used to initialize the Arduino
void setup()
{
    // NOTE: Begin serial communication
    Serial.begin(9600);
    
    // NOTE: Set pins to OUTPUT mode
    pinMode(redPin, );      
    pinMode(greenPin, );
    pinMode(bluePin, );
    pinMode(lightValueResistor, );  
}

// NOTE: This is the loop function that runs when the Ardunio runs
void loop()
{
    // NOTE: This print lightValueresistor value to console
    Serial.println(analogRead(lightValueResistor));  

    // NOTE: This sets LED color based on measured brightness   
    setColor(analogRead(lightValueResistor));
           
    // DO: Delay 10 milliseconds                                     
    delay( );                                          
}

// NOTE: This is the set color method called in the loop. It sets the color of the multi-colored LED
void setColor(int lightValue)
{

  // NOTE: Switch statement to make the LED alternate between colors (using RGB values) 
  // according to the light value of the photoresistor

  // DO: If the light value is greater than 700, set the LED to RED
  if(lightValue >= 700){         
    red = 200;
    blue = 0;
    green = 0;

  }

  // DO: Else if the light value is between 600 and 700, set the LED to YELLOW
  else if(lightValue < 700 && lightValue >= 600){

  }

  // DO: Else if the light value is between 500 and 600, set the LED to GREEN
  else if(lightValue < && lightValue >=){ 

  }

  // DO: Else if the light value is between 400 and 500, set the LED to TURQUOISE (set blue and green to high)
  else if(){

  }

  // DO: Else if the light value is between 300 and 400, set the LED to BLUE

  // DO: Else if the light value is less than 300, set the LED to PURPLE
  
  // NOTE: Write RGB values to LED
  analogWrite(redPin, red);
  analogWrite(greenPin, green);

  // DO: Write the bluePin to blue
  analogWrite( , );  
}


