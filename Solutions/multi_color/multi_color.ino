//Exercise 3: Photoresistor and Multi-Color LED
//Google CSSI Arduino Workshop
//Cambridge, Massachusetts
//July 26, 2013

                                               
int lightValueresistor = 0;                            //Pin declarations
int redPin = 11;             
int greenPin = 10;           
int bluePin = 9;    
int red, green, blue, v = 0;

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
    v = analogRead(lightValueresistor);
    Serial.println(v);     //print lightValueresistor value to console
    setColor(v);           //set LED color based on measured brightness
                                                
    delay(10);                                          //delay 10 milliseconds
}

void setColor(int lightValue)
{
  if(lightValue >= 874){                                //RED
    red = 255;
    blue = 0;
    green = 0;
  }else if(lightValue < 874 && lightValue >= 724){      //YELLOW
    red = 255;
    blue = 0;
    green = 255;
  }else if(lightValue < 724 && lightValue >= 574){      //GREEN
    red = 0;
    blue = 0;
    green = 255;
  }else if(lightValue < 574 && lightValue >= 424){       //TURQUOISE
    red = 0;
    blue = 255;
    green = 255;
  }else if(lightValue < 424 && lightValue >= 274){        //BLUE
    red = 0;
    blue = 255;
    green = 0;
  }else if(lightValue < 274){                            //PURPLE
    red = 255;
    blue = 255;
    green = 0;
  }
  
  analogWrite(redPin, red);                             //write RGB values to LED
  analogWrite(greenPin, green);
  analogWrite(bluePin, blue);  
}


