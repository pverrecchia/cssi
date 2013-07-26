Google CSSI Arduino Workshop
============================
Tutorials and code for the four workshop project options.

Stop Light
-----------
The purpose of this project is to simulate a traffic light by programming times LED lights

1.  Set up your hardware.
2.  We must set our color LED lights to a specific pin in the Arduino.  The red light will be set to pin 10, the blue light (which we will pretend is yellow) is set to pin 11, etc... We will also set time in between each consecutive light blink.
3.  Next we will set up the main body of our loop, the part of the code which the Arduino will continuously execute.  In our program we have 4 different states:
a.  Just the yellow pin is on (Case 1)
b.  Just the green pin is on (Case 2)
c.  Just the red pin is on (Case 3)
d.  None of the pins are on (default case, if you are not in any of the other cases)
4.  The command for turning a light on is: `digitalWrite(yellowPin, HIGH)`,and the command for turning it off is: `digitalWrite(yellowPin, LOW)`. Remember that you will have to turn off each light after it is turned on!
5.  Make the program loop through the 4 cases over and over my using modular (clock) arithmetic.

  
Door Knob Alarm
----------------
    
    
Multi-Color Lights
------------------
The purpose of this project is to program a multi-color LED, which changes colors as your hand approaches.

This multi-color light color changes when passing different voltages. Each of the three LEDs share a common cathode (negative) and there are three separate positives. 

![Diagram](diagram.png)

1. Set up hardware.
2. Read through the declared variables, and locate digital pins 9, 10 and 11, and analog pin 0 on the Arduino.
3. The `setup()` method will begin the serial communication between the Arduino, and the computer. In the void setup() method,  assign the OUTPUT(s) and INPUT(s) using pinMode, for the red, green, blue and photoresistor pins.
4. The `loop()` method is the part of the code that will repeat continuously. In the void `loop()` method, set the time delay in milliseconds. NOTICE that the timing always operates in milliseconds, and not seconds. 
5. Now we will set the colors of the multi-color LED. The colors change based on the reduction in voltage. As the digital number representing the measured voltage changes, the colors change from red, to yellow, to green, to turquoise, to blue, and to purple. 
6.  Lasty, the `analogWrite()` function writes the color values to the LED. Insert the inputs for the blue color. 


Music
-----

