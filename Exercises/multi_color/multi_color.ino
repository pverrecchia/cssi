//Exercise 3: Photoresistor and Multi-Color LED
//Google CSSI Arduino Workshop
//Cambridge, Massachusetts
//July 26, 2013

                                               
int lightValueresistor = 12;                            //Pin declarations
int redPin = 11;             
int greenPin = 10;           
int bluePin = 9;             

void setup()
{
    Serial.begin(9600);                                 //Begin serial communcation
    
    pinMode(redPin, OUTPUT);      
    pinMode(greenPin, OUTPUT);
    pinMode(bluePin, OUTPUT);
    pinMode(lightValueresistor, INPUT);  
}

void loop()
{
    Serial.println(analogRead(lightValueresistor));     //print lightValueresistor value to console
    setColor(analogRead(lightValueresistor));           //set LED color based on measured brightness
                                                
    delay(10);                                          //delay 10 milliseconds
}

void setColor(int lightValue)
{
  if(lightValue >= 213){                                //RED
    red = 255;
    blue = 0;
    green = 0;
  }else if(lightValue < 213 && lightValue >= 170){      //YELLOW
    red = 255;
    blue = 0;
    green = 255;
  }else if(lightValue < 170 && lightValue >= 128){      //GREEN
    red = 0;
    blue = 0;
    green = 255;
  }else if(lightValue < 128 && lightValue >= 86){       //TURQUOISE
    red = 0;
    blue = 255;
    green = 255;
  }else if(lightValue < 86 && lightValue >= 43){        //BLUE
    red = 0;
    blue = 255;
    green = 0;
  }else if(lightValue < 86 && lightValue >= 43){        //PURPLE
    red = 255;
    blue = 255;
    green = 0;
  }else if(lightValue < 43){                            //WHITE
    red = 255;
    blue = 255;
    green = 255;
  }
  
  analogWrite(redPin, red);                             //write RGB values to LED
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}


