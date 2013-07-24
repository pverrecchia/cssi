//Exercise 3: Photoresistor and Multi-Color LED
//Google CSSI Arduino Workshop
//Cambridge, Massachusetts
//July 26, 2013

                                               
int lightValueResistor = 0;                            //Pin declarations
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
  if(lightValue >= 700){                                //RED
    red = 200;
    blue = 0;
    green = 0;
  }else if(lightValue < 700 && lightValue >= 600){      //YELLOW
    red = 200;
    blue = 0;
    green = 200;
  }else if(lightValue < 600 && lightValue >= 500){      //GREEN
    red = 0;
    blue = 0;
    green = 200;
  }else if(lightValue < 500 && lightValue >= 400){       //TURQUOISE
    red = 0;
    blue = 200;
    green = 200;
  }else if(lightValue < 400 && lightValue >= 300){        //BLUE
    red = 0;
    blue = 200;
    green = 0;
  }else if(lightValue < 300){                            //PURPLE
    red = 200;
    blue = 200;
    green = 0;
  }
  
  //write RGB values to LED
  analogWrite(redPin, red);                           
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}

