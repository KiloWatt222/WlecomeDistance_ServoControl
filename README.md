# WlecomeRobot_ServoControl (Using UltraSonic Sensor and Blutoth module)

## Task
Design a circuit, to control the arms of the welcome robot and interact with people using the ultrasonic sensors and open the screen when the person is in front of the robot according to a certain distance.

![ROBOT](https://user-images.githubusercontent.com/85633958/124771651-f9b31c80-df43-11eb-90aa-889dc730311c.png)

## Component 
- 6 servo motor (3 ech arm)
- 2 resistor (220 ohm)
- 1 bredborde mini
- 1 arduino uno
- 1 LCD 16*2
- 1 UltraSonic Sensor
- 1 LED (bluetooth module , becuse i did not find it in Thinkercad)
- wires
- battery

## Circuit Digrame 
![Circuit Pic Wlecome Robot](https://user-images.githubusercontent.com/85633958/124772670-e8b6db00-df44-11eb-9b31-4dd3d86aa172.png)


## How it works
- 1. When the person is more than a meter away from the robot, the screen does not work (or there may be a message on the screen as I did) and the servo is in normal mode (first position)
- 2. After that, when the person approaches the robot (or the sensor in particular), with a distance of less than a meter, another message will appear on the screen and the arms will move in a programmed movement (second position).
- 3. When the person approaches the robot with a distance of less than half a meter, another message will appear on the screen and the motors will move in a programmed movement at a certain angle (the third position), in addition to the Arduino will send a signal to the Bluetooth after three seconds.

## CODE
The code is attached, and notes have been added to it.
