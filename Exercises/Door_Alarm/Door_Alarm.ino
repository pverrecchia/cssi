int sensorPin = 0;
int sensorValue = 0;  // NOTE: Sensor wire value
int restValue = 0;	  // NOTE: Value of the sensor at rest

void setup() {
  pinMode( , );  // DO: Set Pin 13 to OUTPUT mode
  Serial.begin(9600); // NOTE: Beginning the serial to print
}

void loop() {
	// NOTE: This is where the value from the doorknob sensor wire is read in
	sensorValue = analogRead(sensorPin);
	delay(10);  
	Serial.print(sensorValue);
 	Serial.print("      ");
 	delay(100);

 	// DO: Set this value to the value that the sensor outputs at rest
 	restValue = ; 

 	// DO: Touch the doorknob and observe if the value that the sensor outputs decreases or increases
 	// DO: Change the < or > sign so that, when the doorknob is touched, the code enters the if loop
 	if(sensorValue > restValue){ 

 		// NOTE: This loop lights up the LED when the doorknob is touched
		digitalWrite(13,HIGH);

     	// DO: Delay the Ardunio by 100 microseconds
     	delay( ); 

     	// DO: Set the LED at port 13 to LOW
     	digitalWrite( , ); 
 }
}
