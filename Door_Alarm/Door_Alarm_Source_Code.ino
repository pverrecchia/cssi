int sensorPin = 0;      
int sensorValue = 0; 
int sensor;

void setup() {
  pinMode(13, OUTPUT);  
  Serial.begin(9600);
}

void loop() {
  sensorValue = analogRead(sensorPin); //the doorknob sensor wire
delay(10);  

 Serial.print(sensorValue);  //sensor wire value
 Serial.print("      ");
 delay(100);

 if(sensorValue>990){   // this allows you to turn the potentiometer to a sensitive borderline value
                       // when someone touches the knob it dips just below the pot value

     digitalWrite(13,HIGH); //the led (alarm) lights up.  This could be replaced by a buzzer
     delay(100); 
     digitalWrite(13,LOW);
 }
}
