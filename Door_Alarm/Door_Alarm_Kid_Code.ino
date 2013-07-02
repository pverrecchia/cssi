int sensorPin = 0;      
int sensorValue = 0; 
int sensor;
int calibrate = 990;

void setup() {
  pinMode(13, OUTPUT);  
  Serial.begin(9600);
}

void loop() {
							//the doorknob sensor wire
delay(10);  

							//sensor wire value
 Serial.print("      ");
 delay(100);

 if(){   // this allows you to turn the potentiometer to a sensitive borderline value
                       // when someone touches the knob it dips just below the pot value

						//the led (alarm) lights up.  This could be replaced by a buzzer
     delay(100); 
     digitalWrite(13,LOW);
 }
}
