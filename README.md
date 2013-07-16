<h1>Google CSSI Arduino Workshop</h1>
<h4>Cambridge, Massachusetts <br>
July 26, 2013</h4>


  <h3>1. Stop Light</li></h3>
  
  
  Red LED (+) leg on pin 13, (-) leg to ground. <br>
  Yellow LED (+) leg on pin 14, (-) leg to ground. <br>
  Green LED (+) leg on pin 15, (-) leg to ground.
  
  
  <h3> 2. Door Knob Alarm</h3>
  
    
  Door Knob Alarm: pretty basic, uses analog input and will utilize the breadboard
  Need 1 capacitor (~uF), a resistor, and some conductive wire for this project. A little speaker would be nice 
  for the audio alarm. It will use an analog input that we will need to calibrate to go off when someone touches 
  the door knob from the opposite side. It’s possible to set it up so the alarm won’t go off when someone touches 
  the door knob from the same side the sensor is on. 
    
    
  <h3>3. Multi-Color Lights</h3>

      
  <b>Part 1: Writing to the RGB LED</b>
  <p>Build off of the stoplight project, where students learned how to output to an LED
  Explain how to cycle through the colors (with a timer between 0 and 255 so that when you move to the photoresistor, it is the same analogy)
      
  <p><b>Part 2: Reading from the photoresistor</b>
  <p>Get the input from the photoresistor and output it to the console
  Take the output of the photoresistor and use it to create conditional statements for when to change the RGB LED to 
  different colors
  
  <p>0 - 85 = Red<br>
  86 - 170 = Green<br>
  170 - 255 = Blue
      
      
  <h3><b>4. Lights and Sound</b></h3>
  <ol>
  <li>Use the setup from <b>Multi-Color LED</b></li>
  <li>Connect the 3.5mm audio jack to analog input '0'</li>
  <li>Hook up the Male-Male audio cable from your computer to the jack</li>
  <li>Test this by reading the voltage of your favorite song</li>
  <li>Program the microcontroller to blink the stop light to the beat of the music</li>
  <li>Hook up the speakers to the positive and negative pins on the audio jack</li>
  <li>Ensure that music plays through the speakers</li>
  </ol>
    
