// Exercise 3: Photoresistor and Multi-Color LED
// Google CSSI Arduino Workshop
// Cambridge, Massachusetts
// July 26, 2013

                                               
//Pin declarations                                               
int lightValueResistor = 0;                          
int redPin = 11;             
int greenPin = 10;           
int bluePin = 9;    
int red, green, blue, v = 0;

void setup()
{
    Serial.begin(9600);                                
    
    pinMode(redPin, OUTPUT);      
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    pinMode(lightValueResistor, INPUT);  
}

void loop()
{
    v = analogRead(lightValueResistor);  //measure photo resistor
    Serial.println(v);                   //print measured value to console
    setColor(v);                         //set LED color based on measured brightness
                                                
    delay(10);                            
}

void setColor(int lightValue)
{

// Switch statement to make the LED alternate between colors (using RGB values) 
// according to the light value of the photoresistor

// If the light value is greater than 700, set the LED to RED
  if(lightValue >= 700){         
    red = 200;
    blue = 0;
    green = 0;

  }

// Else if the light value is between 600 and 700, set the LED to YELLOW
  else if(lightValue < 700 && lightValue >= 600){

  }

// Else if the light value is between 500 and 600, set the LED to GREEN
  else if(lightValue < && lightValue >=){ 

  }

// Else if the light value is between 400 and 500, set the LED to TURQUOISE (set blue and green to high)
  else if(){

  }

// Else if the light value is between 300 and 400, set the LED to BLUE

// Else if the light value is less than 300, set the LED to PURPLE
  
// Write RGB values to LED
  analogWrite(redPin, red);
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}


