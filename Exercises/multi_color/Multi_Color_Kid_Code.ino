// Exercise 3: Photoresistor and Multi-Color LED
// Google CSSI Arduino Workshop
// Cambridge, Massachusetts
// July 26, 2013

                                               
int lightValueresistor = 12;                            // Pin declarations
int redPin = 11;             
int greenPin = 10;           
int bluePin = 9;             

void setup()
{
    Serial.begin(9600);                                 // Begin serial communcation
    
    pinMode(redPin, OUTPUT);      
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    pinMode(lightValueresistor, INPUT);  
}

void loop()
{
    Serial.println(analogRead(lightValueresistor));     // Print lightValueresistor value to console
    setColor(analogRead(lightValueresistor));           // Set LED color based on measured brightness
                                                
    delay(10);                                          // Delay 10 milliseconds
}

void setColor(int lightValue)
{

// Switch statement to make the LED alternate between colors (using RGB values) 
// according to the light value of the photoresistor

// If the light value is greater than 213, set the LED to RED
  if(lightValue >= 213){         
    red = 255;
    blue = 0;
    green = 0;

  }

// Else if the light value is between 170 and 213, set the LED to YELLOW
  else if(lightValue < 213 && lightValue >= 170){

  }

// Else if the light value is between 128 and 170, set the LED to GREEN
  else if(lightValue < && lightValue >=){ 

  }

// Else if the light value is between 86 and 128, set the LED to TURQUOISE (set blue and green to high)
  else if(){

  }

// Else if the light value is between 43 and 86, set the LED to BLUE

// Else if the light value is less than 43, set the LED to PURPLE
  
// Write RGB values to LED
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}


