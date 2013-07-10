/*
blinks: 1, 2, 1&2
 */
boolean on = false;
int blink_count = 0;
int count = 0;
int ceiling = 50;


void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT); //blue
  pinMode(12, OUTPUT); //yellow
  pinMode(11, OUTPUT); //red?
}

void loop() {
  //int ceiling = round(analogRead(A1)/10.24);
  int ceiling = 25;
  delay(2.5);
  
  int sensorValue = analogRead(A0);
   Serial.println(sensorValue);
  Serial.print(on);
  if (sensorValue > ceiling && !on)
  {
    on = true;
    
    if (count > 20)
    {
   
      if (blink_count <= 2)
      {
        Serial.print("here");
        blink_count ++;
      }
      else
      {
         blink_count = 0;
      }

      
      count = 0;
      
    }
    
    //mMSerial.print(blink_count);

    if(blink_count == 0)
    {
      Serial.print(count);
      digitalWrite(13, HIGH);
      Serial.print("b0");
      count ++;
    }
    else if (blink_count == 1)
    {
      digitalWrite(12, HIGH);
      Serial.print("b1");
      count ++;
    }
    else if (blink_count == 2)
    {
      digitalWrite(11, HIGH);
      Serial.print("b2");
      count ++;
    }
  }
  else if (sensorValue < ceiling && on)
  {
    on = false;
    
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
  
  delay(2.5);
}
