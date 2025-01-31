# Arduino Tutorial

## 1. Get started with Arduino 

### **1. Keyestudio V4.0 Development Board**

You need to know that keyestudio V4.0 development board is the core of this smart car.

![UNO](media/41b05c58f1521cbbeaae2af30a2276c2.png)

Keyestudio V4.0 development board is based on ATmega328P MCU, and with a CP2102 Chip as a UART-to-USB converter.

![308315eef3c603cdf0e8babfc4d9c297](img/308315eef3c603cdf0e8babfc4d9c297.jpg)

It has 14 digital input/output pins (of which 6 can be used as PWM outputs), 6 analog inputs, a 16 MHz quartz crystal, a USB connection, a power jack, 2 ICSP headers and a reset button.

![ks0497(1)](media/9652daf1229f38442c4c31934022be39.png)

We can power it with a USB cable, the external DC power jack (DC 7-12V) or female headers Vin/ GND(DC 7-12V)

|      Micro controller       |                      ATmega328P-PU                       |
| :-------------------------: | :------------------------------------------------------: |
|      Operating Voltage      |                            5V                            |
| Input Voltage (recommended) |                         DC7-12V                          |
|      Digital I/O Pins       |       14 (D0-D13)  (of which 6 provide PWM output)       |
|    PWM Digital I/O Pins     |               6 (D3, D5, D6, D9, D10, D11)               |
|      Analog Input Pins      |                        6 (A0-A5)                         |
|   DC Current per I/O Pin    |                          20 mA                           |
|   DC Current for 3.3V Pin   |                          50 mA                           |
|        Flash Memory         | 32 KB (ATmega328P-PU) of which 0.5 KB used by bootloader |
|            SRAM             |                   2 KB (ATmega328P-PU)                   |
|           EEPROM            |                   1 KB (ATmega328P-PU)                   |
|         Clock Speed         |                          16 MHz                          |
|         LED_BUILTIN         |                           D13                            |


### **2. Install Arduino IDE and Driver**

![](media/ide.png)

<span style="color: rgb(255, 76, 65);"><span style="color: rgb(255, 76, 65); font-size: 24px;">Note: Click the link to start learning how to download software, install drivers, upload code, and install library files.</span></span>

<br>
<br>

[https://getting-started-with-arduino.readthedocs.io](https://getting-started-with-arduino.readthedocs.io/en/latest/Arduino%20IDE%20Tutorial.html)

## 2. Assemble Ultrasonic Tank Robot

<span style="color: rgb(255, 76, 65);">**Caution**</span>: Set the initial angle of the servo Peel thin films off boards before installing this robot 

![](./media/4ea30cc75eb77e63441dccef9f0ca3cb.png)

 **Step1**

Tools needed:

![Img](./media/img-20240117152734.png)

![img](./media/wps115.jpg)

![img](./media/wps116.jpg)

<span style="color: rgb(255, 76, 65); font-size: 16px;">Pay attention to the installation direction of the wheels. The thick side is on the outside.</span>

![Img](./media/img-20240117153020.png)

![image-20230525092859344](./media/image-20230525092859344.png)

 **Step2**

![image-20230525092919242](./media/image-20230525092919242.png)

The wheels and tracks must be installed. Then mount them on the car body simultaneously. Otherwise the tracks cannot be installed.

![img](img/14e92d152a8381b025c7f6fbf38e94f1.jpeg)

![3_00](./media/3_00.png)

Note where the wheels are mounted on the tracks.

![img](img/36643ae7e35bf24c26348fe47d7ffc4f.jpeg)



![image-20230525092930362](./media/image-20230525092930362.png)

 **Step3**



![ ](./media/T1.png)



![ ](./media/T2.png)



![ ](./media/T3.png)

Please wire up first.

![image-20250106083930071](img/image-20250106083930071.png)

![s](./media/s.jpg)

![ ](./media/6dfc645075993b1a10e45e888b7fc670.png)

![ ](./media/e5322cac246d5324e721489fc805d71f.png)

![ ](./media/bddc904d904489540d4bb2a2fa29d236.png)

 **Step 4**

![ ](./media/1cfa4e5862c2e69e4891b2f7f345938b.png)

![ ](./media/66a58753fc1fa0a64d9c5dec681cb97c.png)

![ ](./media/9a0eb86718e6dd64699af4dab44d5682.png)

 **Step 5**

![ ](./media/8b60ab25e9f6fba784716a315001db91.png)

![ ](./media/a73038cc068a0e0d5495115212fffa66.png)

![ ](./media/115177d49c40c68d979fc21653d70834.png)

 **Step 6**

![ ](./media/7d5047e2ff8803cee7125196533fc4a6.png)

![2_00](./media/2_00.png)

![ ](./media/5b8572e5104d7e72195e76feb929aba6.png)

 **Step 7**

![ 7.png 7](./media/76e5f6b6248c29a8ac0fba75eb2e706a.png)

<span style="color: rgb(255, 76, 65);">Note the direction of jumper caps</span>

![ 7_1.png 7_1](./media/e39a2efd338f70fd1869264fe291450b.png)

![ 7_2.png 7_2](./media/4ae6b2601c721b1ebbd039c5567ef78b.png)

 **Step 8**

![\\ 9.jpg 9](./media/6a0447be5d1c8c410c35d7be569d8770.jpeg)

![ 9_1](./media/08c05216fcf38671b207b1769bf4923f.jpeg)

![ 9_2](./media/a285db6d2b9ad77594d3e9a05fbc3c3e.jpeg)

 **Step 9**

![ 8](./media/d3d3d166e9678d298c33b3176de07d6a.jpeg)

![ 8_1](./media/286547498c44567def602fe7fcdff8bc.jpeg)

![ 8_2](./media/1b572444d27283340f630226bfdef9db.jpeg)

 **Step 10**

（Need to adjust the angle of the servo）

![ 8_3](./media/0f4b98efe20dee69b96eeade2599c839.jpeg)

![Untitled Sketch 7](media/5120d0b422a1d0b1f1ba075aa5911c25.png)

**Set the angle of the servo to 90°**

**(<span style="color: rgb(255, 76, 65);">Note:</span> Please remove the Bluetooth module before uploading the code! Otherwise, serial port communication conflicts and code uploading fails.)**

Add the servo library first, then copy the code below into the Arduino IDE and upload it to the motherboard, or just open the code provided by us and upload it to the motherboard.

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 0
  set servo
  http://www.keyestudio.com
*/
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(10);  // attaches the servo on pin 10 to the servo object
  myservo.write(0);
  delay(500);
  myservo.write(90);
  delay(500);
  myservo.write(180);
  delay(500);
  myservo.write(90);
  delay(500);
}

void loop() {

}

```

**After initializing servo angle, install the Bluetooth module.**

Keep the ultrasonic sensor parallel to the board

![ 8_4.png 8_4](./media/24d9629c520bda267abd2bb3274f8234.png)

![ 8_5.png 8_5](./media/c408c7aa269fee1e0988ad69e4d99215.png)

 **Step 11**

![ 12.png 12](./media/b8fd0392e5ddb44a066fc64df1ed64e3.png)

![ 12_1.png 12_1](./media/ed84f27b216cc41f8d5365c01b0eac99.png)

![ 12_2.png 12_2](./media/c5d8fcefa0d47aa0baf1233920694a11.png)

 **Step 12**

![ 12_3.png 12_3](./media/871cc650bbf0fa90bd66c94fbb7c7e14.png)

![ 12_4.png 12_4](./media/2b4e9fc8e12cc62291bcea7703dbcbc2.png)

![ 12_5.png 12_5](./media/11bba4f642c4e0d7356a646ac3c17fc0.png)

**Wire up**

For 8\*16LED panel, Make wires connect to A4 and A5

![ ](./media/f3262a7f63769b2a69665dbf99476394.jpeg)

![ ](./media/6a61630c713284ffcd12a046224793df.png)

![ ](./media/image-20230907160223855.png)

Connect the motor A to A port and make the motor B to B port.

![image-20250106193043245](img/image-20250106193043245.png)

![ ](./media/47dabc315fe9e19c5d3d5f42b7e36959.png)

Connect the power wire

![ ](./media/01d98654282c339efe6a422f96380989.jpeg)

![ ](./media/07144428.jpg)



Line Tracking Sensor(see the picture)

![image-20250104165401885](img/image-20250104165401885.png)



![ ](./media/6d44df09cf294c175fe45a067da373ec.jpeg)

![ ](./media/7b20e184afc842346615a8ca91167a57.png)

![ ](./media/8abdfcbc1328f818978bce68b47ee83c.png)

Wire up the photoresistors

![image-20250104150216956](img/image-20250104150216956.png)



![e0d6dbb2e9a054991bbd53284790d2dd](img/e0d6dbb2e9a054991bbd53284790d2dd.png)

| Photoresistor | Keyestudio 8833 Board |
| :-----------: | :-------------------: |
|       G       |           G           |
|       V       |           V           |
|       S       |          A1           |

![3c4715f8bd327477824d5f9ac872503d](img/3c4715f8bd327477824d5f9ac872503d.png)

| Photoresistor | Keyestudio 8833  Board |
| :-----------: | :--------------------: |
|       G       |           G            |
|       V       |           V            |
|       S       |           A2           |

Wire up ultrasonic sensor

![image-20250104165256601](img/image-20250104165256601.png)



![ ](./media/ea9bdc12ab2c158fbf9205e5125cbafa.png)

| Ultrasonic Sensor | Keyestudio 8833 Board |
| :---------------: | :-------------------: |
|        Vcc        |           V           |
|       Trig        |          D12          |
|       Echo        |          D13          |
|        Gnd        |           G           |

Wire up the servo(D10)

![ ](./media/a435408b48071d6f1977c19d105e3836.png)

| Servo  | Keyestudio 8833 Board |
| :----: | :-------------------: |
| Brown  |           G           |
|  Red   |         V(5V)         |
| Orange |          D10          |

------

<span style="color: rgb(255, 76, 65);">**We adopt a model 18650 lithium battery with a pointed positive pole, whose power and capacity are not required.**</span>

![Img](./media/img-20240117152548.jpg)

------


## 3. Projects

In this section, we will start from a single sensor to complex experiments to introduce you how the tank robot works

<span style="color: rgb(255, 76, 65);">Note:</span> (G), marked on each sensor and module, is the negative pole and connected to“G”, ”-”or “GND”on the sensor shield or control board ; (V) is the positive pole and linked with V , VCC, + or 5V on the sensor shield or control board.

###  Project 1: LED Blinks

#### **(1)Description:**

![IMG_256](media/64b0b431d58473408ac46b39d2dc2ad0.jpeg)

![](media/ae87aea86f6c7e427f7adfc0e7c0efe3.png)

For starters and enthusiasts, LED Blink is a fundamental program. LED, the abbreviation of light emitting diodes, consists of Ga, As, P, N chemical compounds and so on. The LED can flash in diverse colors by altering the delay time in the test code. When in control, power on GND and VCC, the LED will be on if S end is in high level; nevertheless, it will go off.

#### **(2)Parameters:**

![0ea85307e1317c25f2a8d92f25319aa8](img/0ea85307e1317c25f2a8d92f25319aa8-17363228177021.png)

- Control interface: digital port

- Working voltage: DC 3.3-5V

- Pin spacing: 2.54mm

- LED display color: yellow


#### **(3)Motor driver expansion board:**

The Keyestudio 8833 motor driver expansion board is compatible with the Arduino UNO development board. Just stack it onto the development board when using it.

![](media/d8696e83ade31f2b7c56cc5911eacbd7.GIF)

#### **(4)Connection Diagram:**

![Untitled Sketch 1-2](media/8ad54723c1d6149952c730217a1861cd.png)

![](media/d68e6475a7c9ed55bb057b75d1b11689.png)

<span style="color: rgb(255, 76, 65);">NOTE:</span> LED is connected to D9 port, and remember to install jumper caps onto the shield

#### **(5)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note: </span>Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*

Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 1.1

Blink

http://www.keyestudio.com

*/

int LED = 9; //Define the pin of LED to connect with digital port 9

void setup(){
	pinMode(LED, OUTPUT); //Initialize the LED pin to output mode
}

void loop() //infinite loop
{
	digitalWrite(LED, HIGH); //Output high level and turn on the LED
	delay(1000); //Wait for 1s
	digitalWrite(LED, LOW); //Output low level and turn off the LED
	delay(1000); //Wait for 1s
}
```

#### **(6)Test Results:**

Upload the program, LED blinks at the interval of 1s.

#### **(7)Code Explanation:**

**pinMode(LED，OUTPUT) -** This function can denote that the pin is INPUT or OUTPUT

**digitalWrite(LED，HIGH) -** When pin is OUTPUT, we can set it to HIGH(output 5V) or LOW(output 0V)

#### **(8)Extension Practice:**

We have succeeded in blinking LED. Next, let’s observe what will happen to the LED if we modify pins and delay time.

**Test Code**

(Note: Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*

Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 1.2

Blink

http://www.keyestudio.com

*/

int LED = 9; //Define the pin of the LED as 9

void setup(){
	pinMode(LED, OUTPUT); //Set the pin of the LED to OUTPUT
}

void loop() //Infinite loop
{
    digitalWrite(LED, HIGH); //output high levels, light up LED
	delay(100); //Wait for 0.1s
	digitalWrite(LED, LOW); //LED output low levels, turn off LED
	delay(100); //Wait for 0.1s

}
```

The test result shows that the LED flashes faster. Therefore, we can draw a conclusion that pins and time delaying affect flash frequency.

###  Project 2: Adjust LED Brightness

#### **(1)Description:**

In previous lesson, we control LED on and off and make it blink.

In this project, we will control LED’s brightness through PWM simulating breathing effect. Similarly, you can change the step length and delay time in the code so as to demonstrate different breathing effects.

PWM is a means of controlling the analog output via digital means. Digital control is used to generate square waves with different duty cycles (a signal that constantly switches between high and low levels) to control the analog output.

In general, the input voltages of ports are 0V and 5V. What if the 3V is required? Or a switch among 1V, 3V and 3.5V? We cannot change resistors constantly. For this reason, we resort to PWM. 

![0_LPC1768_PWM](media/bbcfcb9ae56abb7e80ee587246fc4be9.GIF)

For Arduino digital port voltage outputs, there are only LOW and HIGH levels, which correspond to the voltage outputs of 0V and 5V respectively. You can define LOW as“0”and HIGH as“1’, and let the Arduino output five hundred‘0’or‘1’within 1 second. If output five hundred‘1’, that is 5V; if all of which is‘0’,that is 0V; if output 250 01 pattern, that is 2.5V. 

This process can be likened to showing a movie. The movie we watch are not completely continuous. Actually, it generates 25 pictures per second, which cannot be told by human eyes. Therefore, we mistake it as a continuous process. PWM works in the same way. To output different voltages, we need to control the ratio of 0 and 1. The more‘0’or‘1’ output per unit time, the more accurate the control.

#### **(2)Parameters:**

![0ea85307e1317c25f2a8d92f25319aa8](img/0ea85307e1317c25f2a8d92f25319aa8-17363228177021.png)

Control interface: Digital port 3

Working voltage: DC 3.3-5V

Pin spacing: 2.54mm

LED display color: yellow

#### **(3)Connection Diagram:**

PWM pins of Arduino are connected to 3，5，6，9，10 and 11. Keep the pin 9 unchanged

![Untitled Sketch 1-2](media/8ad54723c1d6149952c730217a1861cd.png)

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*

Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 2.1

pwm

http://www.keyestudio.com

*/

int LED = 9; //Define the pin of the LED as 9

void setup () {
	pinMode(LED, OUTPUT); //Set the pin of the LED to OUTPUT
}

void loop () {
	for (int value = 0; value < 255; value = value + 1) {
		analogWrite(LED, value); // LED ON
		delay(5); //delay in 5ms
	}
	for (int value = 255; value > 0; value = value - 1) {
		analogWrite(LED, value); //LED gets dim
		delay(5); //delay in 5ms
	}
}
```

#### **(5)Test Results:**

Upload test code successfully, LED gradually changes from bright to dark, like human’s breath, rather than turning on and off immediately.

#### **(6)Code Explanation:**

To repeat some certain statements, we could use FOR statement. FOR statement format is shown below:

![图1(1)](media/65da124bdd0ea488291c71c6b879fe95.jpeg)

FOR cyclic sequence:

Round 1：1 → 2 → 3 → 4

Round 2：2 → 3 → 4

…

Until number 2 is not established, “for”loop is over.

After knowing this order, go back to code:

**for (int value = 0; value \< 255; value=value+1){**

**...}**

**for (int value = 255; value \>0; value=value-1){**

**...}**

The two“for”statements make value increase from 0 to 255, then reduce from 255 to 0, then increase to 255,....infinitely loop

There is a new function in the following ----- analogWrite()

We know that digital port only has two state of 0 and 1. So how to send an analog value to a digital value? Here,this function is needed. Let’s observe the Arduino board and find 6 pins marked“\~”which can output PWM signals.

Function format as follows:

**analogWrite(pin,value)**

analogWrite() is used to write an analog value from 0\~255 for PWM port, so the value is in the range of 0\~255. Attention that you only write the digital pins with PWM function, such as pin 3, 5, 6, 9, 10, 11.

PWM is a technology to obtain analog quantity through digital method. Digital control forms a square wave, and the square wave signal only has two states of turning on and off (that is, high or low levels). By controlling the ratio of the duration of turning on and off, a voltage varying from 0 to 5V can be simulated. The time turning on(academically referred to as high level) is called pulse width, so PWM is also called pulse width modulation.

Through the following five square waves, let’s acknowledge more about PWM.

![](media/553f3d1b6ca04e1aa0479841dd075fa2.png)

In the above figure, the green line represents a period, and value of analogWrite() corresponds to a percentage which is called Duty Cycle as well. 

Duty cycle implies that high-level duration is divided by low-level duration in a cycle. From top to bottom, the duty cycle of first square wave is 0% and its corresponding value is 0. The LED brightness is lowest, that is, light off. The more time the high level lasts, the brighter the LED. Therefore, the last duty cycle is 100%, which correspond to 255, and LED is the brightest. And 25% means darker.

PWM mostly is used for adjusting the LED’s brightness or the rotation speed of motors.

It plays a vital role in controlling smart robot cars. I believe that you cannot wait to learn next project.

#### **(7)Extension Practice:**

Let’s modify the value of delay and remain the pin unchanged, then observe how LED changes.

**Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*

Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 2.2

pwm-slow

http://www.keyestudio.com

*/

int LED = 9; //Define the pin of the LED as 9

void setup() {
	pinMode(LED, OUTPUT); //Set the pin of the LED to OUTPUT
}

void loop () {
	for (int value = 0; value < 255; value = value + 1) {
		analogWrite(LED, value); // LED ON
		delay(30); // delay in 30ms
	}
	for (int value = 255; value > 0; value = value - 1) {
		analogWrite(LED, value); //LED gets dim
		delay (30); // delay in 30ms
	}
}
```

Upload the code to development board, LED flashes more slowly.



###  Project 3: Photoresistor

![](media/36e7e08764ed3c61a1c22f86be8c23d9.jpeg)

#### **(1)Description:**

The photosensitive resistor is a special resistor made of a semiconductor material such as a sulfide or selenium, and a moisture-proof resin is also coated with a photoconductive effect. The photosensitive resistance is most sensitive to the ambient light, different illumination strength, and the resistance of the photosensitive resistance is different. We use the photosensitive resistance to design the photosensitive resistor module. 

The module signal is connected to the microcontroller analog port. When the light intensity is stronger, the larger the analog port voltage, that is, the simulation value of the microcontroller is also large; in turn, when the light intensity is weaker, the smaller the analog port voltage, that is, the simulation value of the microcontroller is also small. 

In this way, we can read the corresponding analog value using the photosensitive resistor module, and the intensity of the light in the inductive environment.

![](media/7784e14e15402644cdbe674d500327c4.png)

![](media/0d9daba6454ef099fe1ceb0e6cb56ec4.png)

#### **(2)Parameters:**

Photosensitive resistance resistance value: 5K Ou-0.5m

Interface type: simulation port A0, A1

Working voltage: 3.3V-5V

Pin spacing: 2.54mm




#### **(3)Connection Diagram:**

What we are going to test next isthe photoresistor module on the leftside ofthe robot

![Img](./media/img-20240117091559.png)

The left photoresistoris connected to A1/P3 of the motor drive shield.

![Untitled Sketch 3.1](media/484852a36f52bdbe44bec1b9a8941e44.png)

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*

Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 3.1

photocell

http://www.keyestudio.com

*/

int sensorPin = A1; // A1 is the input pin of photoresistor

int sensorValue = 0; // save the value of photoresistors

void setup() {
	Serial.begin(9600); //Open the serial port monitor and set the baud rate to 9600
}

void loop() {
	sensorValue = analogRead(sensorPin); //Read the analog value from the photoresistor sensor
	Serial.println(sensorValue); //The serial port prints the value of the photoresistor
	delay(500); //Delay in 500ms
}
```

#### **(5)Test Results:**

![](media/54b92578e3210999e23f5fb8138f0fa0.png)

When covering it, the value gets smaller; if not, the value gets larger

#### **(6)Code Explanation:**

**analogRead(sensorPin)**: read the analog value of photoresistors

**Serial.begin(9600)**: initialize serial port and set baud rate to 9600

**Serial.println**: serial prints

#### **(7)Extension Practice:**

The above code just reads the value of the photoresistor. We can make the photosensitive and LED combine to change the LED.How about controlling the LED’s brightness by it?

![Untitled Sketch 3.2](media/88a89f7996fb7f7d037315e57e8bcd33.png)

The LED’s brightness is controlled by PWM. Therefore, we connect the LED to PMW pin(pin 9) of the shield.

**Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```c
/*

Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 3.2

photocell-analog output

http://www.keyestudio.com

*/

int analogInPin = A1; // A1 is the input pin of photoresistor

int analogOutPin = 9; // Digital port 9 is the output of PMW

int sensorValue = 0; // save the variable of the resistance value of photoresistors

int outputValue = 0; // Value output to PMW

void setup() {
	Serial.begin(9600); //Open the serial port monitor and set the baud rate to 9600
}

void loop() {
    sensorValue = analogRead(analogInPin); //Read the analog value from thephotoresistor sensor
    // Map the analog values 0\~1023 to the PWM output values 255\~0
    outputValue = map(sensorValue, 0, 1023, 255, 0);
    // Change analog output
    analogWrite(analogOutPin, outputValue);
    Serial.println(sensorValue); //The serial port prints the value of thephotoresistor
    delay(2);
}
```

Upload code to the development board, then cover the photoresistor and observe the LED’s brightness.

![Img](./media/img-20240117091105.png)

###  Project 4: Line Tracking Sensor

#### **(1)Description:**

![](media/d37c24e508361ab86b019135ab6950a9.png)

The tracking sensor is actually an infrared sensor. The component used here is the TCRT5000 infrared tube. 

Its working principle is to use different reflectivity of infrared light to colors, then convert the strength of the reflected signal into a current signal. 

During the process of detection, black is active at HIGH level while white is active at LOW level. The detection height is 0-3 cm. 

Keyestudio 3-channel line tracking module has integrated 3 sets of TCRT5000 infrared tube on a single board, which is more convenient for wiring and control. 

If the Line Tracking Sensor does not work as expected, you will need to use a screwdriver to adjust its potentiometerto make it more sensitive. When yourfinger is close to the sensor, its on-board LED light turns on, and when yourfinger moves away, its on-board LED light turns off. At thistime, itssensitivity isrelatively good.

![Img](./media/img-20240117090858.png)

#### **(2)Parameters:**

- Operating Voltage: 3.3-5V (DC)

- Interface: 5PIN

- Output Signal: Digital signal

- Detection Height: 0-3 cm


Special note: before testing,rotate the potentiometer on the sensor to adjust the detection sensitivity. When adjust the LED at the threshold between ON and OFF, the sensitivity is the best.

<span style="color: rgb(255, 76, 65);">Note:</span> the line tracking sensor is installed under the bottom of the robot.

#### **(3)Connection Diagram:**

![](media/6426516400b21d7fbe1d9a1a58a1808b.png)

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*

Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 4.1

Line Track sensor

http://www.keyestudio.com

*/

//The wiring of line tracking sensors

#define L_pin 11 //left

#define M_pin 7 //middle

#define R_pin 8 //right

void setup(){
    Serial.begin(9600); //Set the baud rate to 9600
    pinMode(L_pin, INPUT); //Set all pins of the line tracking sensors to input mode
    pinMode(M_pin, INPUT);
    pinMode(R_pin, INPUT);
}

void loop (){
    int L_val = digitalRead(L_pin); //Read the value of the left sensor
    int M_val = digitalRead(M_pin); //Read the value of the middle sensor
    int R_val = digitalRead(R_pin); //Read the value of the right sensor

    Serial.print(L_val);
    Serial.print(" ");
    Serial.print(M_val);
    Serial.print(" ");
    Serial.print(R_val);
    Serial.println(" ");
    delay(100); //delay in 100ms
}
```

#### **(5)Test Results:**

Upload the code on development board, open serial monitor to check line tracking sensors. And the displayed value is 1(high level) when no signals are received. The value shifts into 0 when the sensor is covered with paper.

![Img](./media/img-20240117090920.png)


![](media/b9319753c148f66aabc9bf648ed93da1.png)

#### **(6)Code Explanation:**

**Serial.begin(9600)**- Initialize serial port, set baud rate to 9600

**pinMode-** Define the pin as input or output mode

**digitalRead-** Read the state of pin, which are generally HIGH and LOW level

#### **(7)Extension Practice:**

After knowing its working principle, you can connect an LED to D9. so as to control LED by line tracking sensor.

![Untitled Sketch 4.2](media/1dd733ed6248d09e9b4d218e41559294.png)

**Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 4.2

Line Track sensor

http://www.keyestudio.com

*/

//LED pin

#define LED 9
//The wiring of line tracking sensors
#define L_pin 11 //left
#define M_pin 7 //middle
#define R_pin 8 //right

void setup(){
    Serial.begin(9600); //Set the baud rate to 9600
    pinMode(LED, OUTPUT); //Set LED to output mode
    pinMode(L_pin, INPUT); //Set all pins of the line tracking sensors to input mode
    pinMode(M_pin, INPUT);
    pinMode(R_pin, INPUT);
}

void loop (){
    int L_val = digitalRead(L_pin); //Read the value of the left sensor
    int M_val = digitalRead(M_pin); //Read the value of the middle sensor
    int R_val = digitalRead(R_pin); //Read the value of the right sensor
    Serial.print(L_val);
    Serial.print(" ");
    Serial.print(M_val);
    Serial.print(" ");
    Serial.print(R_val);
    Serial.println(" ");
    delay(100); //Delay in 

    if (L_val == 0 || M_val == 0 || R_val == 0) {
    	digitalWrite(LED, HIGH);
    }
    else {
    	digitalWrite(LED, LOW);
    }
}
```

When the three tracking sensors on the left, middle and right do not receive a signal, they are at high level, and the value displayed is 1. When we cover sensors with a paper, the state becomes 0, and then the LED is on. Otherwise LED turns off.

###  Project 5: Servo Control

#### **(1)Description:**

Servo motor is a position control rotary actuator. It mainly consists of a housing, a circuit board, a core-less motor, a gear and a position sensor. Its working principle is that the servo receives the signal sent by MCU or receiver and produces a reference signal with a period of 20ms and width of 1.5ms, then compares the acquired DC bias voltage to the voltage of the potentiometer and obtain the voltage difference output.

When the motor speed is constant, the potentiometer is driven to rotate through the cascade reduction gear, which leads that the voltage difference is 0, and the motor stops rotating. Generally, the angle range of servo rotation is 0° --180 °

The rotation angle of servo motor is controlled by regulating the duty cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM signal is 20ms (50Hz). Theoretically, the width is distributed between 1ms-2ms, but in fact, it's between 0.5ms-2.5ms. The width corresponds the rotation angle from 0° to 180°. But note that for different brand motors, the same signal may have different rotation angles.  

![](media/69be958142b773acdae33eeef12afed7.png)

In general, servo has three lines in brown, red and orange. The brown wire is grounded, the red one is a positive pole line and the orange one is a signal line.

![180度舵机](media/49467dfa70799401a5a5acc691014aee.png)

The angle of the servo:

![](media/ddc74f62dc936c925d28d70a1a9c2214.png)

#### **(2)Parameters:**

- Working voltage: DC 4.8V \~ 6V

- Operating angle range: about 180 ° (at 500 → 2500 μsec)

- Pulse width range: 500 → 2500 μsec

- No-load speed: 0.12 ± 0.01 sec / 60 (DC 4.8V) 0.1 ± 0.01 sec / 60 (DC 6V)

- No-load current: 200 ± 20mA (DC 4.8V) 220 ± 20mA (DC 6V)

- Stopping torque: 1.3 ± 0.01kg · cm (DC 4.8V) 1.5 ± 0.1kg · cm (DC 6V)

- Stop current: ≦ 850mA (DC 4.8V) ≦ 1000mA (DC 6V)

- Standby current: 3 ± 1mA (DC 4.8V) 4 ± 1mA (DC 6V)

#### **(3)Connection Diagram:**

![Untitled Sketch 7](media/5120d0b422a1d0b1f1ba075aa5911c25.png)

<span style="color: rgb(255, 76, 65);">Note:</span> The brown, red and orange wire of the servo are respectively attached to Gnd(G), 5v(V) and 10 of the shield. Remember to connect an external power because of the high current of the servo. If not, the development board will be burnt out.

#### **(4)Test Code 1:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 5.1
Servo
http://www.keyestudio.com
*/

#define servoPin 10 //The pin of servo

int pos; //The variable of servo’s angle
int pulsewidth; //The variable of servo’s pulse width

void setup() {
    pinMode(servoPin, OUTPUT); //Set the pin of servo as output
    procedure(0); //Set the angle of servo to 0°
}

void loop() {
    for (pos = 0; pos <= 180; pos += 1) { // From 1°to 180°
    	// in steps of 1 degree	
        procedure(pos); // Rotate to the angle of 'pos'
        delay(15); //Control the speed of rotation
    }
    for (pos = 180; pos >= 0; pos -= 1) { // From 180° to 1°
        prcedure(pos); // Rotate to the angle of 'pos'
        delay(15);
    }
}
//The function controls the servo
void procedure(int myangle) {
    pulsewidth = myangle * 11 + 500; //Calculate the value of pulse width
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(pulsewidth); //The time in high level represents the pulse width
    digitalWrite(servoPin, LOW);
    delay((20 - pulsewidth / 1000)); //As the cycle is 20ms, the time left is in low level
}
```

Upload code, we will see the servo move from 0° to 180°. In the further chapters, we will introduce how to drive a servo. Additionally, we can control a servo with a servo library of Arduino.

<span style="color: rgb(255, 76, 65);">Note:</span> This servo library file uses timer 1, and the PWM output of IO ports 9 and 10 also uses timer 1, so we cannot use this servo library when using the PWM output of D9 and D10 later.

You can refer to the use of the servo library: [https://www.arduino.cc/en/Reference/Servo](https://www.arduino.cc/en/Reference/Servo).

#### **(5)Test Code2:**

(<span style="color: rgb(255, 76, 65);">Note: </span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 5.2
Servo
<http://www.keyestudio.com>
*/

#include <Servo.h>

Servo myservo; // create servos
int pos = 0; // Save the variables of angle

void setup() {
	myservo.attach(10); //Connect the servo with digital port 10
}

void loop() {
    for (pos = 0; pos <= 180; pos += 1) { //From 0° to 180°
    	//step length is 1
        myservo.write(pos); // Rotate to the angle of 'pos'
        delay(15); // Wait for 15ms to control speed
    }

    for (pos = 180; pos >= 0; pos -= 1) { //From 180° to 0°
        myservo.write(pos); // Rotate to the angle of 'pos'
        delay(15); // Wait for 15ms to control speed
    }
}
```

#### **(6)Test Results:**

Upload code, plug in power and servo moves in the range of 0° and 180°.

![Img](./media/img-20240117090810.png)

#### **(7)Code Explanation:**

Arduino comes with **\#include \<Servo.h\>** (servo function and statement）

The following are some common statements of the servo function:

1\. **attach（interface）**——Set servo interface, port 9 and 10 are available

2\. **write（angle）**——The statement to set rotation angle of servo, the angle range is from 0° to 180°

3\. **read（）**——The statement to read angle of servo, read the command value of “write()”

4\. attached（）——Judge if the parameter of servo is sent to its interface

Note: The above written format is“servo variable name, specific statement（）”, for instance: myservo.attach(10)

###  Project 6: Ultrasonic Sensor

#### **(1) Description:**

![15160984609_f127220a5d_o](media/0180b169a1c3b228394b43df704fac32.png)

The HC-SR04 ultrasonic sensor uses sonar to determine distance to an object like what bats do. It offers excellent non-contact range detection with high accuracy and stable readings in an easy-to-use package. It comes complete with ultrasonic transmitter and receiver modules.

The HC-SR04 or the ultrasonic sensor is being used in a wide range of electronics projects for creating obstacle detection and distance measuring application as well as various other applications. Here we have brought the simple method to measure the distance with Arduino and ultrasonic sensor and how to use ultrasonic sensor with Arduino.

![9779999818cbbe4e1adf5b57081be431](img/9779999818cbbe4e1adf5b57081be431.png)

#### **(2)Parameters:**

- Power Supply :+5V DC

- Quiescent Current : \<2mA

- Working Current: 15mA

- Effectual Angle: \<15°

- Ranging Distance : 2cm – 400 cm

- Resolution : 0.3 cm

- Measuring Angle: 30 degree

- Trigger Input Pulse width: 10uS


#### **(3) The principle of ultrasonic sensor:**

As the above picture shown, it is like two eyes. One is transmitting end, the other is receiving end.

The ultrasonic module will emit the ultrasonic waves after triggering a signal. When the ultrasonic waves encounter the object and are reflected back, the module outputs an echo signal, so it can determine the distance of the object from the time difference between the trigger signal and echo signal. 

The t is the time that emitting signal meets obstacle and returns. And the propagation speed of sound in the air is about 343m/s, and distance = speed * time. However, the ultrasonic wave emits and comes back, which is 2 times of distance. Therefore, it needs to be divided by 2, the distance measured by **ultrasonic wave = (speed * time)/2**

1. Use method and timing chart of ultrasonic module:

2. Setting the delay time of Trig pin of SR04 to 10μs at least, which can trigger it to detect distance.

3. After triggering, the module will automatically send eight 40KHz ultrasonic pulses and detect whether there is a signal return. This step will be completed automatically by the module.

4. If the signal returns, the Echo pin will output a high level, and the duration of the high level is the time from the transmission of the ultrasonic wave to the return.

![image-20230426172540424](media/image-20230426172540424.png)

Circuit diagram of ultrasonic sensor:

![图片1hi;.hkl;hlhjl](media/a25028af84d6c7c94382c2a907101241.jpeg)

#### **(4)Connection Diagram:**

![Untitled Sketch 8.1](media/d8fad040d3ab5abe247d6a8d1e08a13d.png)

<span style="color: rgb(255, 76, 65);">Note:</span> The pin VCC, Trig, Echo and Gnd of the ultrasonic sensor are respectively connected to 5v(V), 12(S), 13(S) and Gnd(G) of the shield.

#### **(5)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 6.1
Ultrasonic sensor
http://www.keyestudio.com
*/

int trigPin = 12; // Pin Trig attaches to 12
int echoPin = 13; //Pin Echo attaches to 13
long duration, cm, inches;

void setup() {
    //Serial Port begin
    Serial.begin(9600);//Set the baud rate to 9600
    //Define input and output
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop() {
    //Pre-given a short low pulse to ensure a clean high pulse
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);//At least give 10us high level trigger
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    // The time in high level equals the time gap between the transmission and the return of the ultrasonic sound
    duration = pulseIn(echoPin, HIGH);
    // Translate into distance
    cm = (duration / 2) / 29.1; // convert to centimeters
    inches = (duration / 2) / 74; // Convert to inch
    //serial port prints out
    Serial.print(inches);
    Serial.print("in, ");
    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
    delay(50);
}
```

#### **(6)Test Results:**

Upload test code on the development board, open serial monitor and set baud rate to 9600. The detected distance will be displayed, and the unit is cm and inch. Hinder the ultrasonic sensor by hand, the displayed distance value gets smaller.

![](media/2ff018e5d9d631a32fce99eb9b4778be.png)

#### **(7)Code Explanation:**

**int trigPin = 12;**  this pin is defined to transmit ultrasonic waves, generally output.

**int echoPin = 13;** this is defined as the pin of reception, generally input

**cm = (duration/2) / 29.1; inches = (duration/2) / 74; by 0.0135**

We can calculate the distance by using the following formula:

distance = (traveltime/2) x speed of sound

The speed of sound is: 343m/s = 0.0343 cm/uS = 1/29.1 cm/uS

Or in inches: 13503.9in/s = 0.0135in/uS = 1/74in/uS

We need to divide the traveltime by 2 because we have to take into account that the wave was sent, hit the object, and then returned back to the sensor.

#### **(8)Extension Practice:**


We have just measured the distance displayed by the ultrasonic. How about controlling the LED with the measured distance? Let's try it and connect an LED light module to the D9 pin.

![Untitled Sketch 8.2](media/291ac1db0f38418772d11bb1786b7314.png)

**Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 6.2
Ultrasonic LED
http://www.keyestudio.com
*/

int trigPin = 12; // Trig is connected to 12
int echoPin = 13; // Echo is connected to 13
int LED = 9;
long duration, cm, inches;

void setup() {
    //start serial port
    Serial.begin (9600);//set baud rate to 9600
    //define input and output
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(LED, OUTPUT);
}

void loop() {
    //Pre-given a short low pulse to ensure a clean high pulse
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);//Give at least 10us high level trigger
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    // The duration of the high level is the time from the launch to the return of the ultrasonic wave
    duration = pulseIn(echoPin, HIGH);
    // convert to distance
    cm = (duration / 2) / 29.1; // convert to centimeters
    inches = (duration / 2) / 74; // convert to inches
    //serial port prints out
    Serial.print(inches);
    Serial.print("in, ");
    Serial.print(cm);
    Serial.print("cm");
    Serial.println();
    if (cm >= 2 && cm <= 10) {
    	digitalWrite(LED, HIGH);//turn on LED
    } else {
    	digitalWrite(LED, LOW); //turn off LED
    }
    delay(50);
}
```

Upload test code to development board and block ultrasonic sensor by hand, then check if LED is on.

![Img](./media/img-20240117090734.png)

###  Project 7: IR Reception

#### **(1)Description:**

![](media/8969111328604c5358f7c915ac94e474.png)

There is no doubt that infrared remote control is ubiquitous in daily life. It is used to control various household appliances, such as TVs, stereos, video recorders and satellite signal receivers. Infrared remote control is composed of infrared transmitting and infrared receiving systems, that is, an infrared remote control and infrared receiving module and a single-chip microcomputer capable of decoding.   

The 38K infrared carrier signal emitted by remote controller is encoded by the encoding chip in the remote controller. It is composed of a section of pilot code, user code, user inverse code, data code, and data inverse code. The time interval of the pulse is used to distinguish whether it is a 0 or 1 signal and the encoding is made up of these 0, 1 signals. 

The user code of the same remote control is unchanged while the data code can distinguish the key.

When the remote control button is pressed, the remote control sends out an infrared carrier signal. When the IR receiver receives the signal, the program will decode the carrier signal and determines which key is pressed. The MCU decodes the received 01 signal, thereby judging what key is pressed by the remote control.

![image-20230426172824683](media/image-20230426172824683.png)

The infrared receiver is welded on the motor drive board. It integrates receiving, amplification and demodulation, whose internal IC is already adjusted to fulfill infrared receiving and outputting, and TTL-signal-compatible works. It outputs digital signals and is suitable for infrared remote control and infrared data transmission. This module comes with only three pins, including signal, VCC, and GND, so it is very convenient to connect and communicate with microcontrollers such as arduino.

#### **(2)Parameters:**

Operating Voltage: 3.3-5V（DC）

Interface: 3PIN

Output Signal: Digital signal

Receiving Angle: 90 degrees

Frequency: 38khz

Receiving Distance: 10m

Infrared receiver integrated on motor drive board：

![Img](./media/img-20240117082433.png)




#### **(3)Test Code:**

You need to import the IR library first.

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*

Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 7.1

IRremote

http://www.keyestudio.com

*/

#include <IRremote.h> // IRremote library statement

int RECV_PIN = 3; //define the pins of IR receiver as 3
IRrecv irrecv(RECV_PIN);
decode_results results; //decode results exist in the“result” of “decode results”

void setup() {
    Serial.begin(9600);
    irrecv.enableIRIn(); //Enable receiver
}

void loop() {
    if (irrecv.decode(&results))//decode successfully, receive a set of infrared signals
    {
        Serial.println(results.value, HEX);//Wrap word in 16 HEX to output and receive code
        irrecv.resume(); //Receive the next value
    }
    delay(100);
}
```

#### **(4)Test Results:**

Upload test code, open serial monitor and set baud rate to 9600, point remote control to IR receiver. Then the corresponding value will be shown. If holding down keys for a while, the error codes will appear.

![](media/a484b81d031c8d6e8addb169136fd45c.png)

Below we have listed out each button value of keyestudio remote control. So you can keep it for reference.

![图形1](media/ebcf0cb2055f7784505f76ceeaef9f47.jpeg)

The IR receiver is connected to D3, so we don’t need to wire up

#### **(5)Code Explanation:**

**irrecv.enableIRIn():** after enabling IR decoding, the IR signals will be received, then function“decode()”will check continuously if decode successfully.

**irrecv.decode(&results):** after decoding successfully, this function will come back to “true”, and keep result in “results”. After decoding a IR signals, run the resume()function and receive the next signal.

#### **(6)Extension Practice:**

We decoded the key value of IR remote control. How about controlling LED by the measured value? We could design an experiment.

Attach an LED to D9, then press the keys of remote control to make LED light on and off.

![Untitled Sketch 9.2](media/e05da7ef9e7b6f63f414f2ca7e3f4ee3.png)

**Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 7.2
IRremote
http://www.keyestudio.com
*/

#include <IRremote.h> //IRremote statement

int RECV_PIN = 3; //define the pin of LED as pin 3
int LED = 9;
bool flag = 0;
IRrecv irrecv(RECV_PIN);
decode_results results; //decode results exist in the“result” of “decode results”

void setup() {
    Serial.begin(9600);
    pinMode(LED, OUTPUT);//set LED to output
    irrecv.enableIRIn(); //Enable receiver
}

void loop() {
    if (irrecv.decode(&results)) {
        if (results.value == 0xFF02FD & flag == 0) //The above key code, we use the OK button on the remote control, if you press the OK button
        {
            digitalWrite(LED, HIGH); //LED on
            flag = 1;
        }

        else if (results.value == 0xFF02FD & flag == 1) //press again
        {
            digitalWrite(LED, LOW); //LED off
            flag = 0;
        }
        irrecv.resume(); // Receive the next value
    }
}
```

Upload code to development board, press“OK”key on remote control to make LED on and off.

![Img](./media/img-20240117090645.png)

###  Project 8: Motor Driving and Speed Control

#### **(1)Description:**

There are many ways to drive motors. Our smart car uses the most common solution called L298P. L298P, produced by STMicroelectronics, is an excellent driving chip specially designed for driving high-power motors . 

It can directly drive DC motors, two-phase and four-phase motors with the driving current reaching 2A. And the motor’s output terminal adopts 8 high-speed Schottky diodes as protection. 

We have designed an expansion board based on the L298P circuit of which the laminated design can be directly plugged into the UNO R3 board for use reducing the technical difficulties for users in using and driving the motor.

Stack the expansion board on the board, power the BAT , turn the DIP switch to the ON end, and power the expansion board and the UNO R3 board at the same time via external power supply. 

In order to facilitate wiring, the expansion board is equipped with anti-reverse interface (PH2.0 -2P -3P -4P -5P) and thus it can be directly plug with motors, power supply, and sensors /modules. 

The Bluetooth interface of the drive expansion board is fully compatible with the Keyestudio HM-10 Bluetooth module. Therefore, we only need to insert the HM-10 Bluetooth module into the corresponding interface when connecting. 

At the same time, the drive extension board also uses 2.54 pin headers to extend out some available digital ports and analog ports, so that you can continue to add other sensors and carry out expansion experiments.

The expansion board can be connected to 4 DC motors. In the default jumper cap connection mode, the A and A1, B and B1 interface motors are connected in parallel, and their motion pattern is the same. 8 jumper caps can be used to control the rotation direction of the 4 motor interfaces. 

For example, when the two jumper caps in front of the motor A interface are changed from a horizontal connection to a vertical connection, the rotation direction of the motor A now is opposite to the original rotation direction.

![image-20230427081635216](media/image-20230427081635216.png)

![370\`MJM\~ZK6}TV2JHISI{XE](media/5381c98d3be6da099ce43e841b8f736b.png)

#### **(2)Parameters：**

- Logic part input voltage: DC 5V

- Driving part input voltage: DC 7-12V

- Logic part working current: ≤36mA

- Driving part working current: ≤ 2A

- Maximum dissipation power: 25W (T=75℃)

- Control signal input level:
  
  ​	High level: 2.3V ≤ Vin ≤ 5V
  
  ​	Low level: 0V ≤ Vin ≤ 1.5V

- Working temperature: -25℃～＋130℃

#### **(3)Drive the robot to move**

The direction pin of A motor is D2, the speed control pin is D5; the direction pin of B motor is in D4 and the speed control pin is D6,

According to the table below, we can know how to control the movement of the robot by controlling the rotation of two motors through the digital ports and PWM ports . Among them, the range of PWM value is 0-255. The larger the value is, the faster the motor rotates.

|   Function   |  D4  | D6（PWM） | Motor （left）B |  D2  | D5（PWM） | Motor（Right）A |
| :----------: | :--: | :-------: | :-------------: | :--: | :-------: | :-------------: |
| Move Forward | HIGH |  255-200  |   Rotate Left   | HIGH |  255-200  |   Rotate Left   |
|   Go Back    | LOW  |    200    |  Rotate Right   | LOW  |    200    |  Rotate Right   |
| Rotate Left  | LOW  |    200    |  Rotate Right   | HIGH |  255-200  |   Rotate Left   |
| Rotate Right | HIGH |  255-200  |   Rotate Left   | LOW  |    200    |  Rotate Right   |
|     Stop     | LOW  |     0     |      Stop       | LOW  |     0     |      Stop       |




#### **(4)Connection Diagram:**

![Untitled Sketch 11](media/3e53cf19ea5f85a931b955453b86304b.png)

<span style="color: rgb(255, 76, 65);">Note:</span>

The 4-pin connector is marked with A, A1, B1 and B. The right rear motor is connected to B of the 8833 board and left front one is connected to A port.

#### **(5)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 8.1
motor driver
http://www.keyestudio.com
*/

#define ML_Ctrl 4 //Define the direction control pin of the left motor
#define ML_PWM 6 //Define the PWM control pin of the left motor
#define MR_Ctrl 2 //Define the direction control pin of the right motor
#define MR_PWM 5 //Define the PWM control pin of the right motor

void setup()
{
    pinMode(ML_Ctrl, OUTPUT);//Define the direction control pin of the left motor as OUTPUT
    pinMode(ML_PWM, OUTPUT);//Define the PWM control pin of the left motor as OUTPUT
    pinMode(MR_Ctrl, OUTPUT);//Define the direction control pin of the right motor as OUTPUT
    pinMode(MR_PWM, OUTPUT);//Define the PWM control pin of the right motor as OUTPUT
}

void loop()
{
    //front
    digitalWrite(ML_Ctrl, HIGH); //Set direction control speed of the left motor to HIGH
    analogWrite(ML_PWM, 55); //PWM control speed of the left motor is 55
    digitalWrite(MR_Ctrl, HIGH); //Set direction control speed of the right motor to HIGH
    analogWrite(MR_PWM, 55); //PWM control speed of the right motor is 55
    delay(2000);//delay in 2s

    //back
    digitalWrite(ML_Ctrl, LOW); //Set direction control speed of the left motor to LOW
    analogWrite(ML_PWM, 200); //PWM control speed of the left motor is 200
    digitalWrite(MR_Ctrl, LOW); //Set direction control speed of the right motor to LOW
    analogWrite(MR_PWM, 200); //PWM control speed of the right motor is 200
    delay(2000);//delay in 2s

    //turn left
    digitalWrite(ML_Ctrl, LOW); //Set direction control speed of the left motor to LOW
    analogWrite(ML_PWM, 200); //PWM control speed of the left motor is 200
    digitalWrite(MR_Ctrl, HIGH); //Set direction control speed of the right motor to HIGH
    analogWrite(MR_PWM, 55); //PWM control speed of the right motor is 55
    delay(2000);//delay in 2s

    //turn right
    digitalWrite(ML_Ctrl, HIGH); //Set direction control speed of the left motor to HIGH
    analogWrite(ML_PWM, 55); //PWM control speed of the left motor is 55
    digitalWrite(MR_Ctrl, LOW); //Set direction control speed of the right motor to LOW
    analogWrite(MR_PWM, 200); //PWM control speed of the right motor is 200
    delay(2000);//delay in 2s

    //stop
    digitalWrite(ML_Ctrl, LOW);
    analogWrite(ML_PWM, 0); //PWM control speed of the left motor is 0
    digitalWrite(MR_Ctrl, LOW);
    analogWrite(MR_PWM, 0); //PWM control speed of the right motor is 0
    delay(2000);//delay in 2s
}
```

#### **(6)Test Results:**

After wiring according to the diagram, uploading the test code and powering it up.

![Img](./media/img-20240117082646.png)

the smart car moves forward for 2s, steps back for 2s, turns left for 2s, turns right for 2s and stops for 2s and repeats this sequence.



#### **(7)Code Explanation:**

**digitalWrite(ML_Ctrl,LOW);**

The change between high and low levels can makes motors to rotate clockwise or anticlockwise. General digital pins can be used to control these movements.

**analogWrite(ML_PWM,200);**

The speed adjustment of the motor is realized by PWM, and the pin that controls the speed of the motor must be the PWM pin of Arduino.

#### **(8)Expansion Project:**

We adjust the speed of motors by controlling PWM and the wiring remains the same.

**Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 8.2
motor driver pwm
http://www.keyestudio.com
*/

#define ML_Ctrl 4 //Define the direction control pin of the left motor
#define ML_PWM 6 //Define the PWM control pin of the left motor
#define MR_Ctrl 2 //Define the direction control pin of the right motor
#define MR_PWM 5 //Define the PWM control pin of the right motor

void setup() {
    pinMode(ML_Ctrl, OUTPUT);//Define the direction control pin of the left motor as OUTPUT
    pinMode(ML_PWM, OUTPUT);//Define the PWM control pin of the left motor as OUTPUT
    pinMode(MR_Ctrl, OUTPUT);//Define the direction control pin of the right motor as OUTPUT
    pinMode(MR_PWM, OUTPUT);//Define the PWM control pin of the right motor as OUTPUT
}

void loop() {
    //front
    digitalWrite(ML_Ctrl, HIGH); //Set direction control speed of the left motor to HIGH
    analogWrite(ML_PWM, 155); //PWM control speed of the left motor is 155
    digitalWrite(MR_Ctrl, HIGH); //Set direction control speed of the right motor to HIGH
    analogWrite(MR_PWM, 155); //PWM control speed of the right motor is 155
    delay(2000);//delay in 2s

    //back
    digitalWrite(ML_Ctrl, LOW); //Set direction control speed of the left motor to LOW
    analogWrite(ML_PWM, 100); //PWM control speed of the left motor is 100
    digitalWrite(MR_Ctrl, LOW); //Set direction control speed of the right motor to LOW
    analogWrite(MR_PWM, 100); //PWM control speed of the right motor is 100
    delay(2000);//delay in 2s

    //left
    digitalWrite(ML_Ctrl, LOW); //Set direction control speed of the left motor to LOW
    analogWrite(ML_PWM, 100); //PWM control speed of the left motor is 100
    digitalWrite(MR_Ctrl, HIGH); //Set direction control speed of the right motor to HIGH
    analogWrite(MR_PWM, 155); //PWM control speed of the right motor is 155
    delay(2000);//delay in 2s

    //right
    digitalWrite(ML_Ctrl, HIGH); //Set direction control speed of the left motor to HIGH
    analogWrite(ML_PWM, 155); //PWM control speed of the left motor is 155
    digitalWrite(MR_Ctrl, LOW); //Set direction control speed of the right motor to LOW
    analogWrite(MR_PWM, 100); //PWM control speed of the right motor is 100
    delay(2000);//delay in 2s

    //stop
    digitalWrite(ML_Ctrl, LOW); //Set direction control speed of the left motor to LOW
    analogWrite(ML_PWM, 0); //PWM control speed of the left motor is 0
    digitalWrite(MR_Ctrl, LOW); //Set direction control speed of the right motor to LOW
    analogWrite(MR_PWM, 0); //PWM control speed of the right motor is 0
    delay(2000);//delay in 2s
}
```

Upload the code, the speed of the motor is slower.

Low current will cause the motor to rotate slowly.

###  Project 9: 8*16 Facial Expression LED Dot Matrix

![img](img/wps7.png)

#### **(1)Description:**

Won’t it be fun if a expression board is added to the robot? And the Keyestudio 8*16 LED dot matrix can do the trick. With the help of it, you could design facial expressions, images, patterns and other displays by yourselves.

The 8*16 LED board comes with 128 LEDs. The data of the microprocessor (Arduino) communicates with the AiP1640 through a two-wire bus interface. Therefore, it can control the on and off of 128 LEDs on the module, so as to make the dot matrix on the module to display the pattern you need. A HX-2.54 4Pin cable is provided for your convenience of wiring.

#### **(2)Parameters:**

- Working voltage: DC 3.3-5V
- Power loss: 400mW
- Oscillation frequency: 450KHz
- Drive current: 200mA
- Working temperature: -40\~80℃
- Communication mode: two-wire bus

#### **(3)Knowledge:**

**Principle of the 8\*16 LED dot matrix**

How to control each LED of the 8\*16 dot matrix? It is known that each byte has 8 bits and each bit is 0 or 1. when it is 0, LED is off while when it is 1 LED is on. One byte can control one column of the LED,and naturally 16 bytes can control 16 columns of LEDs, that’s the 8\*16 dot matrix.

![image-20230427082712905](media/image-20230427082712905.png)

**Pins description and communication protocol**

The data of the microprocessor (Arduino) communicates with the AiP1640 through a two-wire bus cable.

The communication protocol diagram is as follows (SCLK) is SCL, (DIN) is SDA

![](media/ea2bab37f23c09453c680590b84653d6.png)

①The starting condition for data input: SCL is high level and SDA changes from high to low.

②For data command setting, there are methods as shown in the figure below

In our sample program, select the way to **add 1 to the address automatically**, the binary value is 0100 0000 and the corresponding hexadecimal value is 0x40

![image-20230427083500152](media/image-20230427083500152.png)

③For address command setting, the address can be selected as shown below.

The first 00H is selected in our sample program, and the binary number 1100 0000 corresponds to the hexadecimal 0xc0

![image-20230427083716284](media/image-20230427083716284.png)


④The requirement for data input is that when SCL is at high level when inputting data, the signal on SDA must remain unchanged. Only when the clock signal on SCL is at low level, can the signal on SDA be changed. The input of data is the low bit first, and the high bit later.

⑤The condition for the end of data transmission is that when SCL is at low level, SDA at low level and SCL at high level, the level of SDA becomes high.

⑥Display control, set different pulse width, pulse width can be selected as shown in the figure below.In the example, the pulse width is 4/16, and the hexadecimal corresponding to 1000 1010 is 0x8A

![image-20230427084941994](media/image-20230427084941994.png)



**Instructions for the use of modulus tool**

The dot matrix tool uses the online version, and the link is: [http://dotmatrixtool.com/#]( http://dotmatrixtool.com/#)

①Enter the link and the page appears as shown below

![](media/354693b5679a2615c62e99b7025d6355.png)

②The dot matrix is 8\*16, so adjust the height to 8 and width to 16, as shown in the figure below

![](media/5f0278d66ade370e871b447d360d6e7b.png)

③Generate hexadecimal data from the pattern

As shown in the figure below, press the left mouse button to select, right click to cancel; draw the pattern you want, click Generate, and the hexadecimal data we need will be generated.

![](media/586e88bf13c61b0918046437ed7f6796.png)

#### **(4)Connection Diagram:**

![Untitled Sketch 12](media/cec50fec4a335b6922e4c6694a133bc1.png)

The GND, VCC, SDA, and SCL of the 8x16 LED light board are respectively connected to the keyestudio sensor expansion board-(GND), + (VCC), A4, A5 for two-wire serial communication.

(<span style="color: rgb(255, 76, 65);">Note:</span> though it is connected with the IIC pin of Arduino, this module is not for IIC communication. And the IO port here is to simulate I2C communication and
can be connected with any two pins )

#### **(5)Test Code:**

The code to show the smile face

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 9.1
  Matrix face
  http://www.keyestudio.com
*/
//get the data of smile image from a modulus tool
unsigned char smile[] = {0x00, 0x00, 0x1c, 0x02, 0x02, 0x02, 0x5c, 0x40, 0x40, 0x5c, 0x02, 0x02, 0x02, 0x1c, 0x00, 0x00};

#define SCL_Pin  A5  //set a pin of clock to A5
#define SDA_Pin  A4  //set a data pin to A4

void setup() {
  //set the pin to OUTPUT
  pinMode(SCL_Pin, OUTPUT);
  pinMode(SDA_Pin, OUTPUT);
  //clear screen
  //matrix_display(clear);
}
void loop() {
  matrix_display(smile);  //display the smile image
}
//this function is used for the display of dot matrix 
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();  //use the function to start transmitting data
  IIC_send(0xc0);  //select an address

  for (int i = 0; i < 16; i++) //image data have 16 characters
  {
    IIC_send(matrix_value[i]); //data to transmit pictures
  }

  IIC_end();   //end the data transmission of pictures

  IIC_start();
  IIC_send(0x8A);  //show control and select pulse width 4/16
  IIC_end();
}

//the condition that data starts transmitting
void IIC_start()
{
  digitalWrite(SDA_Pin, HIGH);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, LOW);
}

//the sign that transmission of data ends
void IIC_end()
{
  digitalWrite(SCL_Pin, LOW);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH);
  delayMicroseconds(3);
}

//transmit data
void IIC_send(unsigned char send_data)
{
  for (byte mask = 0x01; mask != 0; mask <<= 1) //each character has 8 digits, which is detected one by one
  {
    if (send_data & mask) { //set high or low levels in light of each bit(0 or 1)
      digitalWrite(SDA_Pin, HIGH);
    } else {
      digitalWrite(SDA_Pin, LOW);
    }
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, HIGH); //pull up the clock pin SCL_Pin to end the transmission of data
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, LOW); //pull down the clock pin SCL_Pin to change signals of SDA
  }
}
```

#### **(6)Test Results:**

After uploading the test code successfully, connecting according to the wiring diagram, dialing the DIP switch to the right end and powering it on, a smile-shaped pattern shows on the dot matrix.

![](media/0fd4831db288e04e75828346ea66a3f5.png)

#### **(7)Expansion Project:**

We use the modulus tool we just learned, [http://dotmatrixtool.com/#](http://dotmatrixtool.com/#), to make the dot matrix display the pattern start , going forward, and stop and then clear the pattern. The time interval is 2000 ms.

![](media/9866c73416df7466b5fe8be3712e6eb3.png)

![](media/1c7ab4b08636c2fe61deaf6c784da7d8.png)

![](media/b0a961f27eb5f0b66603abe23d6bb56a.png)


**Code obtained from the module tool：**

**Code for the pattern start:**

0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80,0x80,0x40,0x20,0x10,0x08,0x04,0x02,0x01

**Code for the pattern going forward:**

0x00,0x00,0x00,0x00,0x00,0x24,0x12,0x09,0x12,0x24,0x00,0x00,0x00,0x00,0x00,0x00

**Code for the pattern stepping back:**

0x00,0x00,0x00,0x00,0x00,0x24,0x48,0x90,0x48,0x24,0x00,0x00,0x00,0x00,0x00,0x00

**Code for the pattern turning left：**

0x00,0x00,0x00,0x00,0x00,0x00,0x44,0x28,0x10,0x44,0x28,0x10,0x44,0x28,0x10,0x00

**Code for the pattern turning right：**

0x00,0x10,0x28,0x44,0x10,0x28,0x44,0x10,0x28,0x44,0x00,0x00,0x00,0x00,0x00,0x00

**Code for the pattern stop：**

0x2E,0x2A,0x3A,0x00,0x02,0x3E,0x02,0x00,0x3E,0x22,0x3E,0x00,0x3E,0x0A,0x0E,0x00

**Code to clear screen：**

0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00

**Test Code**


(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
  keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 9.2
  Matrix face
  http://www.keyestudio.com
*/

//Array, used to save data of images, can be calculated by yourself or gotten from modulus tool
unsigned char start01[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
unsigned char front[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x12, 0x09, 0x12, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char back[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x48, 0x90, 0x48, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char left[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x00};
unsigned char right[] = {0x00, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char STOP01[] = {0x2E, 0x2A, 0x3A, 0x00, 0x02, 0x3E, 0x02, 0x00, 0x3E, 0x22, 0x3E, 0x00, 0x3E, 0x0A, 0x0E, 0x00};
unsigned char clear[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#define SCL_Pin  A5  //set a pin of clock to A5
#define SDA_Pin  A4  //set a data pin to A4

void setup() {
  //set the pin to OUTPUT
  pinMode(SCL_Pin, OUTPUT);
  pinMode(SDA_Pin, OUTPUT);
  //clear screen
  matrix_display(clear);
}
void loop() {
  matrix_display(start01);  //show "Start" image
  delay(2000);
  matrix_display(front);    //show "front" image
  delay(2000);
  matrix_display(STOP01);   //show "STOP01" image
  delay(2000);
  matrix_display(clear);    //show "clear" image
  delay(2000);
}
//this function is used for the display of dot matrix
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();  //use the function to start transmitting data
  IIC_send(0xc0);  //select an address

  for (int i = 0; i < 16; i++) //image data have 16 characters
  {
    IIC_send(matrix_value[i]); //data to transmit pictures
  }

  IIC_end();   //end the data transmission of pictures

  IIC_start();
  IIC_send(0x8A);  //show control and select pulse width 4/16
  IIC_end();
}

//the condition that data starts transmitting
void IIC_start()
{
  digitalWrite(SDA_Pin, HIGH);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, LOW);
}

//the sign that transmission of data ends
void IIC_end()
{
  digitalWrite(SCL_Pin, LOW);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH);
  delayMicroseconds(3);
}

//transmit data
void IIC_send(unsigned char send_data)
{
  for (byte mask = 0x01; mask != 0; mask <<= 1) //each character has 8 digits, which is detected one by one
  {
    if (send_data & mask) { //set high or low levels in light of each bit(0 or 1)
      digitalWrite(SDA_Pin, HIGH);
    } else {
      digitalWrite(SDA_Pin, LOW);
    }
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, HIGH); //pull up the clock pin SCL_Pin to end the transmission of data
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, LOW); //pull down the clock pin SCL_Pin to change signals of SDA
  }
}
```

After uploading test code, the facial expression board shows these patterns orderly and repeats this sequence.

![](media/e7ba47508826acc25d348182a0530c05.png)

![](media/831b7e0e07250cbc7bdc4fa509c5a0a3.png)

![](media/dce75583e8bf4bc4377364bf8ed3aa99.png)

###  Project 10: Light Following Tank


#### **(1)Description:**

In previous projects, we introduced in detail the use of various sensors, modules, and expansion boards on the smart car. Now let’s move to the projects of the smart car . The light-following smart cars, as the name suggests, is a smart car that can follow the light.

We can combine the knowledge from projects photoresistor and motor drive to make a light-seeking smart car. In the project, we use two photoresistor modules to detect the light intensity on the left and right sides of the smart car, read the corresponding analog values, and then control the rotation of the two motors based on these two data so as,to control the movements of the smart car.

The specific logic of the light-following smart car is shown as below.

![image-20230525113331422](img/image-20230525113331422.png)

#### **(2)Flow chart:**

![img](media/wps8.png)

#### **(3)Connection Diagram:**

![Untitled Sketch 13_bb](media/d8132c5a3f88a1016d27e5fa9e5fda92.png)

<span style="color: rgb(255, 76, 65);">Note:</span> The pin "G", "V" and S of the left photoresistor module are connected to G (GND), V (VCC), A1 respectively;

The pin "G", "V" and S of the right photoresistor module are connected to the G (GND), V (VCC), and A2 respectively.

The 4pin cable is marked with A, A1, B1 and B. The right rear motor is connected to B port of the 8833 motor driver expansion board and the left front motor is connected to A port of the 8833 motor driver expansion board

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 10
  light follow tank
  http://www.keyestudio.com
*/
#define light_L_Pin A1   //Define the pin of the photosensitive sensor on the left
#define light_R_Pin A2   //Define the pin of the photosensitive sensor on the right
#define ML_Ctrl 4  //Define the direction control pin of the left motor
#define ML_PWM 6   //Define the PWM control pin of the left motor
#define MR_Ctrl 2  //Define the direction control pin of the right motor
#define MR_PWM 5   //Define the PWM control pin of the right motor
int left_light;
int right_light;
void setup() {
  Serial.begin(9600);
  pinMode(light_L_Pin, INPUT);
  pinMode(light_R_Pin, INPUT);
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
}
void loop() {
  left_light = analogRead(light_L_Pin);
  right_light = analogRead(light_R_Pin);
  Serial.print("left_light_value = ");
  Serial.println(left_light);
  Serial.print("right_light_value = ");
  Serial.println(right_light);
  if (left_light > 650 && right_light > 650) //go front
  {
    Car_front();
  }
  else if (left_light > 650 && right_light <= 650)  //turn left
  {
    Car_left();
  }
  else if (left_light <= 650 && right_light > 650) //turn right
  {
    Car_right();
  }
  else  //otherwise, stop
  {
    Car_Stop();
  }
}
void Car_front()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 55);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 55);
}
void Car_left()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 55);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 200);
}
void Car_right()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 200);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 55);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
}
```

#### **(5)Test Result**

After uploading the test code successfully, connecting according to the wiring diagram, dialing the DIP switch to the right end and powering it on, the smart car follows the light to move.

![Img](./media/img-20240117090537.png)

###  Project 11: Ultrasonic Following Tank


#### **(1)Description:**

In the previous lesson, we learned about the light-following smart car. And in this lesson, we can combine the knowledge to make an ultrasonic sound-following car. 

In the project, we use ultrasonic sensors to detect the distance between the car and the obstacle in front, and then control the rotation of the two motors based on this data so as to control the movements of the smart car.

The specific logic of the ultrasonic sound- following smart car is shown in the table blow:

|                        Detection                        |              Setting              |
| :-----------------------------------------------------: | :-------------------------------: |
| The distance(cm) between the car and the obstacle front | Set the angle of the servo to 90° |
|                      **Condition**                      |           **Movement**            |
|               distance≥20 and distance≤50               |             Go front              |
|            10＜distance＜20<br/>distance＞50            |               Stop                |
|                       distance≤10                       |              go back              |

#### **(2)Flow chart:**

![img](media/wps9.png)

#### **(3)Connection Diagram:**

![Untitled Sketch 14-15_bb](media/72a10097d286bc5f9589df031b60484a.png)

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 11
  Ultrasonic follow tank
  http://www.keyestudio.com
*/
#define servoPin 10  //The pin of servo

#define ML_Ctrl 4  //Define the direction control pin of the left motor
#define ML_PWM 6   //Define the PWM control pin of the left motor
#define MR_Ctrl 2  //Define the direction control pin of the right motor
#define MR_PWM 5   //Define the PWM control pin of the right motor
#define Trig 12
#define Echo 13
float distance;

void setup() {
  pinMode(servoPin, OUTPUT);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  procedure(90); //Set the angle of the servo to 90°
  delay(500); //delay in 500ms
}
void loop() {
  distance = checkdistance();  //Assign the distance measured by ultrasonic sound to distance
  if (distance >= 20 && distance <= 50) //go front
  {
    Car_front();
  }
  else if (distance > 10 && distance < 20)  //stop
  {
    Car_Stop();
  }
  else if (distance <= 10)  //go back
  {
    Car_back();
  }
  else  //In other conditions, it stops
  {
    Car_Stop();
  }
}
void Car_front()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 55);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 55);
}
void Car_back()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 200);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 200);
}
void Car_left()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 55);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 200);
}
void Car_right()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 200);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 55);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
}

//The function to control servos
void procedure(byte myangle) {
  int pulsewidth;
  for (int i = 0; i < 5; i++) {
    pulsewidth = myangle * 11 + 500;  //Calculate the value of pulse width    digitalWrite(servoPin, HIGH);
    delayMicroseconds(pulsewidth);   //The time in high level represents the pulse width
    digitalWrite(servoPin, LOW);
    delay((20 - pulsewidth / 1000));  //As the cycle is 20ms, the time left is in low level
  }
}
//The function to control ultrasonic sound
float checkdistance() {
  static float distance;
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  distance = pulseIn(Echo, HIGH) / 58.20;  //The 58.20 here comes from 2*29.1=58.2
  delay(10);
  return distance;
}
```

#### **(5)Test Results:**

Upload the test code successfully, wire up, dial the DIP switch to the right end, power up and set the servo to 90°，the smart car follows the obstacle to move.

![Img](./media/img-20240117090457.png)

###  Project 12: Ultrasonic Obstacle Avoidance Tank

![img](img/wps5.png)


#### **(1)Description:**

In the previous project, we made an ultrasonic sound-following smart car. In fact, using the same components and the same wiring method, we only need to change the test code to turn it into an ultrasonic obstacle avoidance smart car. This smart car can move with the movement of the human hands. 

We use ultrasonic sensors to detect the distance between the smart car and the obstacle in front, and then control the rotation of the two motors based on this data so as to control the movements of the smart car.

|                          Detection                           |        |
| :----------------------------------------------------------: | :----: |
| Distance measured by the ultrasonic senor between the car and the obstacle in front <br />（set the angle of the servo to 90°） | a(cm)  |
| Distance measured by the ultrasonic senor between the car and the obstacle on the right <br />（set the angle of the servo to 20°） | a2(cm) |
| Distance measured by the ultrasonic senor between the car and the obstacle on the left <br />（set the angle of the servo to 160°） | a1(cm) |
|   **Setting:** set the starting angle of the servo to 90°    |        |

|   Condition 1   |        Condition 2         | Condition 3 | Movement                                                     |
| :-------------: | :------------------------: | ----------- | ------------------------------------------------------------ |
|      a＜20      |                            |             | Stop for 500ms；<br />set the angle of the servo to 180°, read a1, delay in 100ms；<br />set the angle of the servo to 0°, read a2, delay in 0.1s. |
|                 | a1＜50<br />or<br />a2＜50 |             | Compare a1 with a2                                           |
|                 |                            | a1＞a2      | Set the angle of the servo to 90°, rotate left for 700ms (set PWM to 255)<br />move forward（set PWM to 200）. |
|                 |                            | a1＜a2      | Set the angle of the servo to 90°, rotate right for 700ms(set PWM to 255) <br />move forward（set PWM to 200）. |
| **Condition 1** |      **Condition 2**       |             | **Movement**                                                 |
|      a＜20      | a1≥50<br />and<br />a2≥50  | Random      | set the angle of the servo to 90°, rotate left for 500ms(set PWM to 255)<br />move forward(set PWM to 200)<br /><br />set the angle of the servo to 90°, rotate right for 500ms(set PWM to 255) <br />move forward(set PWM to 200) |
|  **Condition**  |                            |             | **Movement**                                                 |
|      a≥20       |                            |             | move forward(set PWM to 100)                                 |



#### **(2)Flow chart:**

![img](media/wps10.png)

#### **(3)Connection Diagram:**

![Untitled Sketch 14-15_bb](media/72a10097d286bc5f9589df031b60484a.png)

(<span style="color: rgb(255, 76, 65);">Note:</span> the brown, red and orange wires of the servo are respectively connected to G (GND), V（5V）and D10 of the expansion board；and for the ultrasonic sensor, the VCC pin is connected to the 5v (V) ,the Trig pin to digital 12 (S), the Echo pin to digital 13 (S), and the Gnd pin to Gnd (G); the same as last project.）

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 12
  Ultrasonic avoid tank
  http://www.keyestudio.com
*/
#define servoPin 10  //The pin of servo
int a, a1, a2;
#define ML_Ctrl 4  //Define the direction control pin of the left motor
#define ML_PWM 6   //Define the PWM control pin of the left motor
#define MR_Ctrl 2  //Define the direction control pin of the right motor
#define MR_PWM 5   //Define the PWM control pin of the right motor
#define Trig 12
#define Echo 13
float distance;

void setup() {
  Serial.begin(9600);
  pinMode(servoPin, OUTPUT);
  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  procedure(90); //Set the angle of the servo to 90°
  delay(500); //delay in 500ms
}
void loop() {
  a = checkdistance();  //Assign the distance to the front detected by ultrasonic sensor to the variable a

  if (a < 20) {//When the distance to the front is less than 20cm
    Car_Stop();  //The robot stops
    delay(500); //delay in 500ms
    procedure(180);  //Ultrasonic pan-tilt turns left
    delay(500); //delay in 500ms
    a1 = checkdistance();  //Assign the distance to the left detected by ultrasonic sensor to the variable a1
    delay(100); //read value
    procedure(0); //Ultrasonic pan-tilt turns right
    delay(500); //delay in 500ms
    a2 = checkdistance(); //Assign the distance to the right detected by ultrasonic sensor to the variable a2
    delay(100); //read value
    
    procedure(90);  //Back to 90°
    delay(500);
    if (a1 > a2) { //When the distance to the left is bigger than to the right
      Car_left();  //The robot turns left
      delay(700);  //turn left 700ms
    } else {
      Car_right(); //It turns left for 700ms
      delay(700);
    }
  } 
  else { //When the distance to the front is >=20c，the robot moves forward
    Car_front(); //go front
  }

}

void Car_front()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 55);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 55);
}
void Car_back()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 200);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 200);
}
void Car_left()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 55);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 200);
}
void Car_right()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 200);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 55);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
}

//The function controls servos
void procedure(byte myangle) {
  int pulsewidth;
  for (int i = 0; i < 5; i++) {
    pulsewidth = myangle * 11 + 500;  //Calculate the value of pulse width
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(pulsewidth);   //The time in high level represents the pulse width
    digitalWrite(servoPin, LOW);
    delay((20 - pulsewidth / 1000));  //As the cycle is 20ms, the time left is in low level
  }
}

//The function controls ultrasonic sound
float checkdistance() {
  float distance;
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  distance = pulseIn(Echo, HIGH) / 58.20;  //The 58.20 here comes from 2*29.1=58.2
  delay(10);
  return distance;
}
```

#### **(5)Test Result:**

After upload the test code successfully, wire up, turn the DIP switch to the ON end, and power up, the smart car moves forward and automatically avoids obstacles.

![Img](./media/img-20240117090420.png)

###  Project 13: Move-in-Confined-Space Tank


#### **(1)Description:**

The ultrasonic sound-following and obstacle avoidance functions of the smart car have been introduced in previous projects. Here we intend to combine the knowledge in the previous courses to confine the smart car to  move in a certain space. 

In the experiment, we use the line-tracking sensor to detect whether there is a black line around the smart car, and then control the rotation of the two motors according to the detection results, so as to lock the smart car in a circle drawn in black line.

The specific logic of the line-tracking smart car is shown in the table blow:

![image-20230525114604923](img/image-20230525114604923.png)

|                         Condition                         |                         Movement                          |
| :-------------------------------------------------------: | :-------------------------------------------------------: |
| If one of three line tracking sensors detects black lines | Go back（set PWM to 150）Then turn left（set PWM to 150） |
|             None of them detects black lines              |               Go forward（set PWM to 100）                |

#### **(2)Flow chart:**

![image-20230427092708208](media/image-20230427092708208.png)

#### **(3)Connection Diagram:**

![Untitled Sketch 16-17_bb](media/e5c3763e764359ec8be92102b6d2a7f9.png)

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 13
  draw a circle for tank
  http://www.keyestudio.com
*/

//The wiring of line tracking sensor
#define L_pin  11  //left
#define M_pin  7  //middle
#define R_pin  8  //right

#define ML_Ctrl 4  //Define the direction control pin of the left motor
#define ML_PWM 6   //Define the PWM control pin of the left motor
#define MR_Ctrl 2  //Define the direction control pin of the right motor
#define MR_PWM 5   //Define the PWM control pin of the right motor
int L_val, M_val, R_val;

void setup()
{
  Serial.begin(9600); //Set the baud rate to 9600
  pinMode(L_pin, INPUT); //Set all pins of the line tracking sensor as input mode
  pinMode(M_pin, INPUT);
  pinMode(R_pin, INPUT);
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
}

void loop () {
  L_val = digitalRead(L_pin); //Read the value of the left sensor
  M_val = digitalRead(M_pin); //Read the value of the middle sensor
  R_val = digitalRead(R_pin); //Read the value of the right sensor
  if ( L_val == 0 && M_val == 0 && R_val == 0 ) { //when black lines are not detected, go front
    Car_front();
  }
  else { //black lines are detected, go back then turn left
    Car_back();
    delay(700);
    Car_left();
    delay(800);
  }
}

void Car_front()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 100);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 100);
}
void Car_back()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 150);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 150);
}
void Car_left()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 100);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 150);
}
void Car_right()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 150);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 100);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
}
```

#### **(5)Test Results:**

After uploading the test code successfully and powering it up, the smart car moves in a confined space, the circle drawn in black line.

![Img](./media/img-20240117090340.png)

###  Project 14: Line-tracking Tank


#### **(1)Description:**

The previous project has introduced how to confine the smart car to  move in a certain space. In this project, we could use the knowledge learned before to make it a line-tracking smart car. In the experiment, we use the line-tracking sensor to detect whether there is a black line around the smart car, and then control the rotation of the two motors according to the detection results, so as to make the smart car to move along the black line.

The specific logic of the line-tracking smart car is shown in the table blow:

|               Sensor               |                          Detection                           |
| :--------------------------------: | :----------------------------------------------------------: |
| Line-tracking sensor in the middle | Black line detected: in high level<br />White line detected: in low level |
|  Line-tracking sensor on the left  | Black line detected: in high level<br />White line detected: in low level |
| Line-tracking sensor on the right  | Black line detected: in high level<br />White line detected: in low level |

|                         Condition 1                          |                         Condition 2                          |             Movement             |
| :----------------------------------------------------------: | :----------------------------------------------------------: | :------------------------------: |
| Line-tracking sensor in the middle <br />detects the black line | Line-tracking sensor on the left detects the black line <br />and <br />the one on the right detects white line | Rotate left<br />set PWM to 200  |
| Line-tracking sensor in the middle <br />detects the black line | Line-tracking sensor on the left detects white line <br />and <br />the one on the right detects the black line | Rotate right<br />set PWM to 200 |
| Line-tracking sensor in the middle <br />detects the black line | Both the left and right line-tracking sensors detect white line<br />or<br />Both the left and right detect the black line |           Move forward           |
| Line-tracking sensor in the middle <br />detects white line  | Line-tracking sensor on the left detects the black line <br />and <br />the one on the right detects white line | Rotate left<br />set PWM to 200  |
| Line-tracking sensor in the middle <br />detects white line  | Line-tracking sensor on the left detects white line<br />and <br />the one on the right detects the black line | Rotate right<br />set PWM to 200 |
| Line-tracking sensor in the middle <br />detects white line  | Both the left and right line-tracking sensors detect white line<br />or<br />Both the left and right line-tracking sensors detect the black line |               Stop               |

#### **(2)Flow chart:**

![img](media/wps11.png)

#### **(3)Wiring Diagram:**

![Untitled Sketch 16-17_bb](media/e5c3763e764359ec8be92102b6d2a7f9.png)

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 14
  Line track tank
  http://www.keyestudio.com
*/

//The wiring of line tracking sensor
#define L_pin  11  //left
#define M_pin  7  //middle
#define R_pin  8  //right
#define ML_Ctrl 4  //Define the direction control pin of the left motor
#define ML_PWM 6   //Define the PWM control pin of the left motor
#define MR_Ctrl 2  //Define the direction control pin of the right motor
#define MR_PWM 5   //Define the PWM control pin of the right motor
int L_val, M_val, R_val;
void setup()
{
  Serial.begin(9600); //Set the baud rate to 9600
  pinMode(L_pin, INPUT); //Set all pins of the line tracking sensor as input mode
  pinMode(M_pin, INPUT);
  pinMode(R_pin, INPUT);
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
}

void loop () {
  L_val = digitalRead(L_pin); //Read the value of the left sensor
  M_val = digitalRead(M_pin); //Read the value of the middle sensor
  R_val = digitalRead(R_pin); //Read the value of the right sensor
  if (M_val == 1) { //the middle one detects black lines
    if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
      Car_left();
    }
    else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
      Car_right();
    }
    else { //otherwise, go front
      Car_front();
    }
  }
  else { //The middle one doesn't detect black lines
    if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
      Car_left();
    }
    else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
      Car_right();
    }
    else { //otherwise, stop
      Car_Stop();
    }
  }
}

//go front
void Car_front()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 100);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 100);
}
//go back
void Car_back()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 150);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 150);
}
//turn left
void Car_left()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 100);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 150);
}
//turn right
void Car_right()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 150);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 100);
}
//stop
void Car_Stop()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
}
```

#### **(5)Test Result:**

After uploading the test code successfully and powering it up, the smart car moves along the black line.

![Img](./media/img-20240117085916.png)

###  Project 15: IR Remote Control Tank

![img](img/wps6.png)


#### **(1)Description:**

Infrared remote control is one of the most common remote control found applications in electric motors, electric fans, and many other household appliances. In this project,we use the knowledge we learned before to make an infrared remote control smart car.

In the 9th lesson, we have tested the corresponding key value of each key of the infrared remote control. In the project, we can set the code (key value) to make the corresponding button to control the movements of the smart car, and display the movement patterns on the 8X16 LED dot matrix.

The specific logic of the line-tracking smart car is shown in the table:

|                        Ultrasonic key                        | Key value |                    Instructions from keys                    |
| :----------------------------------------------------------: | :-------: | :----------------------------------------------------------: |
| ![image-20230427094710725](media/image-20230427094710725.png) |  FF629D   | Move forward（set PWM to 200）<br />display the pattern of going forward |
| ![image-20230427094716639](media/image-20230427094716639.png) |  FFA857   | Go back（set PWM to 200）<br />display the pattern of going back |
| ![image-20230427094720417](media/image-20230427094720417.png) |  FF22DD   |           Turn left<br />display the pattern“STOP”           |
| ![image-20230427094725151](media/image-20230427094725151.png) |  FFC23D   |     Turn right<br />display the pattern of turning left      |
| ![image-20230427094729839](media/image-20230427094729839.png) |  FF02FD   |             Stop<br />display the pattern“STOP”              |

**Initial setting**: 8X16 LED dot matrix shows the pattern“![img](media/wps20.jpg)”.



#### **(2)Flow chart:**

![img](media/wps21.png)

#### **(3)Connection Diagram:**

![Untitled Sketch 19_bb](media/54527fe245b218dd22bdff5dafd4805d.png)

<span style="color: rgb(255, 76, 65);">Note:</span>

GND, VCC, SDA and SCL of the 8x16 LED panel are connected to G（GND), V（VCC). SDA and SCL of the expansion board.

Since the 8833 board integrates the IR receiver, you don’t need to wire it up. The pins of the IR receiver are G（GND), V（VCC) and D3.

#### (4)**Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
 Keyestudio Mini Tank Robot V3 (Popular Edition)
 lesson 15
 IRremote Control Tank
 http://www.keyestudio.com
*/
#include <IRremote.h>
IRrecv irrecv(3);  //
decode_results results;
long ir_rec;  //Used to store the received infrared values

//Array, used to save data of images, can be calculated by yourself or gotten from modulus tool
unsigned char start01[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
unsigned char front[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x12, 0x09, 0x12, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char back[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x48, 0x90, 0x48, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char left[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x00};
unsigned char right[] = {0x00, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char STOP01[] = {0x2E, 0x2A, 0x3A, 0x00, 0x02, 0x3E, 0x02, 0x00, 0x3E, 0x22, 0x3E, 0x00, 0x3E, 0x0A, 0x0E, 0x00};
unsigned char clear[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define SCL_Pin  A5  //Set the clock pin as A5
#define SDA_Pin  A4  //Set the data pin as A4

#define ML_Ctrl 4  //Define the direction control pin of the left motor
#define ML_PWM 6   //Define the PWM control pin of the left motor
#define MR_Ctrl 2  //Define the direction control pin of the right motor
#define MR_PWM 5    //Define the PWM control pin of the right motor

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();  //Initialize infrared receiver library

  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);

  pinMode(SCL_Pin, OUTPUT);
  pinMode(SDA_Pin, OUTPUT);
  matrix_display(clear); //clear screens
  matrix_display(start01);  //show the image to start
}

void loop() {
  if (irrecv.decode(&results)) { //Receive infrared remote control value
    ir_rec = results.value;
    String type = "UNKNOWN";
    String typelist[14] = {"UNKNOWN", "NEC", "SONY", "RC5", "RC6", "DISH", "SHARP", "PANASONIC", "JVC", "SANYO", "MITSUBISHI", "SAMSUNG", "LG", "WHYNTER"};
    if (results.decode_type >= 1 && results.decode_type <= 13) {
      type = typelist[results.decode_type];
    }
    Serial.print("IR TYPE:" + type + "  ");
    Serial.println(ir_rec, HEX);
    irrecv.resume();
  }

  switch (ir_rec) {
    case 0xFF629D: Car_front();     break;   //the command to go front
    case 0xFFA857: Car_back();      break;   //the command to go back
    case 0xFF22DD: Car_T_left();    break;   //the command to turn left
    case 0xFFC23D: Car_T_right();   break;   //the command to turn right
    case 0xFF02FD: Car_Stop();      break;   //the command to stop
    case 0xFF30CF: Car_left();      break;   //the command to rotate to left
    case 0xFF7A85: Car_right();     break;   //the command to rotate to right
    default: break;
  }
}

/***************The function to run the motor***************/
void Car_back() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 200);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 200);
  matrix_display(back);  //Go back
}

void Car_front() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 55);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 55);
  matrix_display(front);  //show the image to go front
}

void Car_left() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 55);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 200);
  matrix_display(left);  //show the image to turn lefr
}

void Car_right() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 200);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 55);
  matrix_display(right);  //show the image to turn right
}

void Car_Stop() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
  matrix_display(STOP01);  //show the image to stop
}

void Car_T_left() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 100);
  matrix_display(left);  //show the image to turn lefr
}

void Car_T_right() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 100);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 0);
  matrix_display(right);  //show the image to turn right
}

//This function is used for dot matrix screen display
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();  //Function to call data transfer start condition
  IIC_send(0xc0);  //Choose an address
  for (int i = 0; i < 16; i++) //Pattern data has 16 bytes
  {
    IIC_send(matrix_value[i]); //transfer pattern data
  }
  IIC_end();   //End pattern data transfer
  IIC_start();
  IIC_send(0x8A);  //display control, select pulse width as 4/16
  IIC_end();
}

//Conditions for the start of data transfer
void IIC_start()
{
  digitalWrite(SDA_Pin, HIGH);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, LOW);
}

//the sign of ending data transmission
void IIC_end()
{
  digitalWrite(SCL_Pin, LOW);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH);
  delayMicroseconds(3);
}

//transfer data
void IIC_send(unsigned char send_data)
{
  for (byte mask = 0x01; mask != 0; mask <<= 1) //each character has 8 digits, which is detected one by one
  {
    if (send_data & mask) { //set high or low levels in light of each bit(0 or 1)
      digitalWrite(SDA_Pin, HIGH);
    } else {
      digitalWrite(SDA_Pin, LOW);
    }
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, HIGH); //Pull the clock pin SCL_Pin high to stop data transmission
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, LOW); //pull down the clock pin SCL_Pin to change signals of SDA
  }
}
```

#### **(5)Test Result:**

After uploading the code, turn on the power switch of the motor drive shield. Place the robot on the floor, refer to the table above and press different buttons, the robot will move in the corresponding preset direction.

![Img](./media/img-20240117090114.png)

###  Project 16: Bluetooth Remote Control

![Img](./media/img-20240111140012.png)

#### **(1)Description:**

In the last several decades, Bluetooth has become the most popular wireless communication module for it is easy to use and has found wide applications in most devices powered by batteries.

In order to adjust with the time and reality and need the needs of customers, Bluetooth has been upgraded several times. In recent years, it embraces lots of transformations in terms of data transfer rate, power consumption of wearable devices and IoT devices, and security systems and others. Here, we plan to learn about DX-BT24 with Arduino board.

#### **(2)Parameter:**

- Bluetooth Protocol: Bluetooth Specification V5.1 BLE

- Serial port sending and receiving without byte limit

- Communication distance: 40m (open environment)

- Operating frequency: 2.4GHz ISM band

- Modulation method: GFSK (Gaussian Frequency Shift Keying)

- Security Features: Authentication and Encryption

- Support Services: Central and Peripheral UUIDs FFE0, FFE1, FFE2

- Power consumption: automatic sleep mode, standby current 400uA\~800uA, 8.5mA during transmission.
  
- Power supply: 5V

- Operating temperature: –10 to +65 degrees Celsius

#### **(3)Connection Diagram:**

1.STATE is the status test pin connected to the internal light-emitting diode and usually remains unconnected.

2.RXD is the serial port interface for receiving terminal.

3.TXD is the serial port interface for sending terminal.

4.GND is for ground.

5.VCC is the positive pole.

6.EN/BRK: the disconnection of it represents the disconnection of the Bluetooth and it usually remains unconnected.

(Note: here the Bluetooth is directly linked with the V2 shield and **please pay attention to the direction**)

![Untitled Sketch 10.1](media/63b96e5b26ee18337fb6e0dced5bbbe3.png)


#### **(4)Download and install APP:**

##### **For IOS system**

1\. Open App Store.

2\. Search <span style="color: rgb(61, 167, 66);">KeyesRobot</span> in the Apple Store and click download.

![Img](./media/img-20240111141301.png)

3\. After the app is installed, you will see the following icon on your phone desktop.

![Img](./media/img-20240111141412.png)

**How to connect iOS Phone to Bluetooth module:**

1\. Turn on the Bluetooth and location services on phone through settings.

![Img](./media/img-20240111141943.png)

2\. Allow KeyesRobot APP to access Bluetooth through settings.

![Img](./media/img-20240111142052.png)

3\. Click to open KeyesRobot App.

![Img](./media/img-20240111142140.png)

4\. KeyesRobot App is a universal APP, which is applied to multiple keyestudio robots. If the interface does not display "TANK ROBOT", you can click the left and right buttons to find "TANK ROBOT".

5\. Click the <span style="color: rgb(61, 167, 66);">Bluetooth </span>button ![Img](./media/img-20240111142336.png) in the upper right corner to scan the bluetooth

![Img](./media/img-20240111142415.png)

6\. You will see a Bluetooth named <span style="color: rgb(0, 209, 0);">**BT24**</span>, click the <span style="color: rgb(255, 169, 0);">Connect</span> button.

![Img](./media/img-20240111142536.png)

7\. If the onboard LED on the Bluetooth module stops flashing and stays on, it means your phone is successfully connected to the Bluetooth module.

![Img](./media/img-20240111142702.png)


##### **For Android System**

1\. Search <span style="color: rgb(61, 167, 66);">**KeyesRobot**</span> in Google Play, or open the following link to download and install the app. 

[https://play.google.com/store/apps/details?id=com.keyestudio.keyestudio](https://play.google.com/store/apps/details?id=com.keyestudio.keyestudio)

![Img](./media/img-20240111143312.png)

2\. Turn on the Bluetooth and the location services of the mobile phone

![Img](./media/img-20240111143354.png)

3\. Find the KeyesRobot Bluetooth app from settings, click on the permission options of the app, and
enable Location and nearby device permissions.(<span style="color: rgb(255, 76, 65);">Note:</span> Some mobile phones do not have nearby device permissions function.)

![Img](./media/img-20240111143451.png)

4\. Click to open KeyesRobot App.

![Img](./media/img-20240111143529.png)

5\. KeyesRobot App is a universal APP, which is applied to multiple keyestudio robots. If the interface does not display "TANK ROBOT", you can click the left and right buttons to find "TANK ROBOT".

6\. Click the <span style="color: rgb(61, 167, 66);">Bluetooth </span> button ![Img](./media/img-20240111142336.png) in the upper right corner to scan the bluetooth

![Img](./media/img-20240111142415.png)

7\. You will see a Bluetooth named <span style="color: rgb(0, 209, 0);">**BT24**</span>, click the <span style="color: rgb(255, 169, 0);">Connect</span> button.

![Img](./media/img-20240111143910.png)

8\. When your phone is successfully connected to the Bluetooth module, the onboard LED on the Bluetooth module will stop flashing and stay on.

![Img](./media/img-20240111144004.png)

![Img](./media/img-20240111142702.png)


#### **(5)Test the Bluetooth APP:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 16.1
Bluetooth
http://www.keyestudio.com
*/

char ble_val; //Character variable(used to store the value received by Bluetooth)

void setup() {
	Serial.begin(9600);
}

void loop() {
    if (Serial.available() > 0) //Determine whether there is data in the serial port buffer
    {
        ble_val = Serial.read(); //Read the data in the serial port buffer
        Serial.println(ble_val); //Print out
    }
}
```

Upload the code to the development board, then plug in the Bluetooth module, and then connected the mobile phone to the Bluetooth module.

After the mobile phone is successfully connected to the Bluetooth module, click to open the Bluetooth APP and click the <span style="color: rgb(0, 252, 255);">Select</span> button on the <span style="color: rgb(0, 252, 255);">homepage</span>.

![Img](./media/img-20240111144744.png)

The main interface of the Bluetooth app is shown in the figure below.

![Img](./media/img-20240111144859.png)

After the code above is successfully uploaded, open the serial monitor of the arduino IDE and set the baud rate to 9600. Click the icon on the APP interface and the serial monitor will display command sent by button.

![](media/805f8ee5c8998a5d6cb8bcef9da09186.png)

<br>
<br>
<span style="color: rgb(255, 76, 65);">**Note: The APP connection method is the same as below.**</span>
<br>
<br>



#### **(6)Code Explanation:**

**Serial.available()** represents the number of characters currently remaining in the serial port buffer. 

This function is generally used to determine whether there is data in this area. When Serial.available()\>0, it means that the serial port has received data and can be read.

**Serial.read()** refers to taking out and reading a Byte of data from the serial port buffer. For example, if a device sends data to the Arduino through the serial port, we can use Serial.read() to read the sent data.

#### **(7)Expansion Project:**

Here we use the command sent by the mobile phone to turn on or off an LED light. Looking at the wiring diagram, an LED is connected to the D9 pin.

![Untitled Sketch 10.2](media/549c10efcf47f29f8f6355d8cd0497cc.png)

**Test Code**

(<span style="color: rgb(255, 76, 65);">Note: </span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 16.2
Bluetooth
http://www.keyestudio.com
*/

int LED = 9;
char ble_val; //Integer variable used to store the value received by Bluetooth

void setup() {
    Serial.begin(9600);
    pinMode(LED, OUTPUT);
}

void loop() {

    if (Serial.available() > 0) //Determine whether there is data in the serial port buffer
    {
        ble_val = Serial.read(); //Read data from serial port buffer
        Serial.print("DATA RECEIVED:");
        Serial.println(ble_val);
        if (ble_val == 'a') {
            digitalWrite(LED, HIGH);
            Serial..println("led on");
        }
        if (ble_val == 'b') {
            digitalWrite(LED, LOW);
            Serial.println("led off");
        }
    }
}
```

![](media/3577f17c526b1dc55d4f587ef95f2d08.png)

After the code above is successfully uploaded, open the serial monitor of the arduino IDE and set the baud rate to 9600. Click ![](media/3fd6c998c0f665fb607a5827794b9bfe.png) to control the LED. When clicking it, a character a will be sent, then LED will be on. If this button is pressed again, the LED will be off.

![Img](./media/img-20240117094533.png)

![](media/b45c3c46391467218fe07003dbb2f3e3.png)

You need to remove the BT module if you finish projects.

###  Project 17: Bluetooth Control Tank


#### **(1)Description:**

We have learned the basic knowledge of Bluetooth in the previous project . In this lesson, we will use Bluetooth to control the smart car. Since it involves Bluetooth, a sending end and a receiving end are needed. In the project, we use the mobile phone as the sender (master), and the smart car connected with the HM-10 Bluetooth module (slave) as the receiver.

We have learned earlier that sending a bit can control LEDs. And the principle of controlling this robot car is the same.

We first understand the function of each button on the APP, and then use the button on the APP to control the tank.

#### **(2)Key Function on the APP**

The following table illustrates the functions of corresponding keys:

|                      KEYS                       | FUNCTIONS                                                    |
| :---------------------------------------------: | ------------------------------------------------------------ |
| ![](media/1118dccd714c7988a51cf2dde58627e3.png) | Pair and connect HM-10 Bluetooth module; click again to disconnect |
| ![](media/b23e65f788685576275cc16bf0b679cc.png) | select the robot to operate                                  |
| ![](media/8d910d19cec4d03b5d9cb787425d8d7c.png) | to control the movements of the robot by buttons             |
| ![](media/9c0c7230244e08fc5afa28b18e8b4241.png) | To control the movements of the robot by joystick            |
| ![](media/3ab61154b4ae730a3757f40171846825.png) | To control the movements of the robot by gravity             |
| ![](media/fe15b0e4a7e705027cb042d0fd2398ea.png) | Send “F”when pressed and “S”when released<br />The car moves forward when it is pressed and stops when released |
| ![](media/b1765938932b8633bd5a96af0293ef24.png) | Send “L”when pressed and “S”when released <br />The car turns left when it is pressed tight and stops when released |
| ![](media/67f26bd7d2076922470e8805711f2ef9.png) | Send “R”when pressed and “S”when released<br />The car turns right when it is pressed tight and stops when released |
| ![](media/77615a8ca984e538d58e02ac90bc5382.png) | Send “B”when pressed and “S”when released<br />The car turns back when it is pressed tight and stops when released |
| ![](media/f58421773a56c911b09c150d08b0fd67.png) | Send “u”+digit+“\#”when dragged<br />Drag to change the speed of the left motor |
| ![](media/a05432839507dd25b7dc7eb1bb9a02bb.png) | Send “v”+digit+“\#”when dragged<br />Drag to change the speed of the right motor |
| ![](media/5dd730ab4d2299210dc2399303b94e33.png) | Select to enter Function page                                |
| ![](media/a352ca9be952db2838540657b9a70f8c.png) | Send “G”when pressed and “S”when pressed again<br />Enter obstacle avoidance mode when pressed and exit when pressed again |
| ![](media/64da14a6ca501aa97f8eb8895e9f6b1c.png) | Send “h”when pressed and “S”when pressed again<br />Enter following mode when pressed and exit when pressed again |
| ![](media/e4f3b211f8c8b06d1eab9dd2281dff74.png) | Send “e”when pressed and “S”when pressed again<br />Enter line-tracking mode when pressed and exit when pressed again |
| ![](media/3d662f37603a8f0c1c34ab2b9ff28c63.png) | Send “f”when pressed and “S”when pressed again<br />Enter move-in-confined-space mode when pressed and exit when pressed again |
| ![](media/48ab7c8c488c61abc162dbda0fc75f27.png) | Send “i”when pressed and “S”when pressed again<br />Enter light following mode when pressed and exit when pressed again |
| ![](media/4250a152c647cc59f72bf51328943371.png) | Send “j”when pressed and “S”when pressed again<br />Enter fire extinguishing mode when pressed and exit when pressed again |
| ![](media/cc420ba3d148bd6b720dd44df9a82768.png) | Select to enter facial expression display mode               |
| ![](media/17261f134c25702ae129624860ab8fe1.png) | Send “k”when pressed and “z”when pressed again<br />Show smiling pattern when clicked and clear expression when clicked again |
| ![](media/a8bff045e822a06a24bfd7599c9f142a.png) | Send “l”when pressed and “z”when pressed again<br />Show disgusting pattern when clicked and clear expression when clicked again |
| ![](media/8729f3ac4adf446b388221ae2e4cf71f.png) | Send “m”when pressed and “z”when pressed again<br />Show happy face when clicked and clear expression when clicked again |
| ![](media/63d935cd1958863f862374ded9b87d6b.png) | Send “n”when pressed and “z”when pressed again<br />Show sad pattern when clicked and clear expression when clicked again |
| ![](media/5e84087020b919a85495831b231efa5a.png) | Send “o”when pressed and “z”when pressed again<br />Show disparaging pattern when clicked and clear expression when clicked again |
| ![](media/3b7d99862c2d9a5e7337645b4548091e.png) | Send “p”when pressed and “z”when pressed again<br />Show heart-shaped pattern when clicked and clear expression when clicked again |
| ![](media/41bf8b28dea6061cea89b640f5646403.png) | Choose to enter the custom function interface; there are six keys 1,2,3,4,5,6; with these keys, you can expand some functions by yourself |
| ![](media/06b8f32aae6c9914ef227d6966ea537f.png) | Click to send “w”<br />Click to display the analog value detected by the photoresistor on the left |
| ![](media/a89df3c223e6a7d4eac29d4fe2ee14af.png) | Click to send“y”<br />Click to display the analog value detected by the photoresistor on the right |
| ![](media/a76df707b84409e57a1167889c3510d9.png) | Click to send“x” <br />Click to show the distance detected by ultrasonic sensor (unit: cm) |
| ![](media/704e5c6a72d89ee8f78d79ff3cd9537c.png) | Click to send“c” Click again to send“d”<br />Press to turn on the fan and press again to turn off it |



#### **(3)Flow Chart:**

![image-20230427101759352](media/image-20230427101759352.png)

#### **(4)Wiring Diagram:**

![Untitled Sketch 20_bb](media/930a8024364e07505e845624a94c27bd.png)

The GND, VCC, SDA, and SCL of the 8x16 LED dot matrix are respectively connected to-(GND), + (VCC), SDA, SCL of the expansion board;

The STATE and BRK pins of the Bluetooth module do not need to be connected.

#### **(5)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note: </span> When uploading the code, the Bluetooth module must be unplugged, and the Bluetooth can be reconnected after the uploading process. Otherwise the code may not be burned.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 17.
  bluetooth Control tank
  http://www.keyestudio.com
*/

//Array, used to save data of images, can be calculated by yourself or gotten from modulus tool
unsigned char start01[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
unsigned char front[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x12, 0x09, 0x12, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char back[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x48, 0x90, 0x48, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char left[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x00};
unsigned char right[] = {0x00, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char STOP01[] = {0x2E, 0x2A, 0x3A, 0x00, 0x02, 0x3E, 0x02, 0x00, 0x3E, 0x22, 0x3E, 0x00, 0x3E, 0x0A, 0x0E, 0x00};
unsigned char clear[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
#define SCL_Pin  A5  //设Set the clock pin as A5
#define SDA_Pin  A4  //Set the data pin as A4

#define ML_Ctrl 4  //Define the direction control pin of the left motor
#define ML_PWM 6   //Define the PWM control pin of the left motor
#define MR_Ctrl 2  //Define the direction control pin of the right motor
#define MR_PWM 5   //Define the PWM control pin of the right motor
char ble_val;      //Used to store the value obtained by Bluetooth

void setup() {
  Serial.begin(9600);

  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);

  pinMode(SCL_Pin, OUTPUT);
  pinMode(SDA_Pin, OUTPUT);
  matrix_display(clear); //clear screens
  matrix_display(start01);  //show the image to start
}

void loop() {
  if (Serial.available())
  {
    ble_val = Serial.read();
    Serial.println(ble_val);
  }
  switch (ble_val)
  {
    case 'F':  //the command to go front
      Car_front();
      break;
    case 'B':  //the command to go back
      Car_back();
      break;
    case 'L':  //the command to turn left
      Car_left();
      break;
    case 'R':  //the command to turn right
      Car_right();
      break;
    case 'S':  //the command to stop
      Car_Stop();
      break;
  }
}

/***************The function to run the motor***************/
void Car_back() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 200);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 200);
  matrix_display(back);  //Go back
}

void Car_front() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 55);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 55);
  matrix_display(front);  //show the image to go front
}

void Car_left() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 55);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 200);
  matrix_display(left);  //show the image to turn lefr
}

void Car_right() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 200);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 55);
  matrix_display(right);  //show the image to turn right
}

void Car_Stop() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
  matrix_display(STOP01);  //show the image to stop
}

//This function is used for dot matrix screen display
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();  //Function to call data transfer start condition
  IIC_send(0xc0);  //Choose an address
  for (int i = 0; i < 16; i++) //Pattern data has 16 bytes
  {
    IIC_send(matrix_value[i]); //transfer pattern data
  }
  IIC_end();   //End pattern data transfer
  IIC_start();
  IIC_send(0x8A);  //display control, select pulse width as 4/16
  IIC_end();
}

//Conditions for the start of data transfer
void IIC_start()
{
  digitalWrite(SDA_Pin, HIGH);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, LOW);
}

//the sign of ending data transmission
void IIC_end()
{
  digitalWrite(SCL_Pin, LOW);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH);
  delayMicroseconds(3);
}

//transfer data
void IIC_send(unsigned char send_data)
{
  for (byte mask = 0x01; mask != 0; mask <<= 1) //each character has 8 digits, which is detected one by one
  {
    if (send_data & mask) { //set high or low levels in light of each bit(0 or 1)
      digitalWrite(SDA_Pin, HIGH);
    } else {
      digitalWrite(SDA_Pin, LOW);
    }
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, HIGH); //Pull the clock pin SCL_Pin high to stop data transmission
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, LOW); //pull down the clock pin SCL_Pin to change signals of SDA
  }
}
```

#### **(6)Test Result:**

After uploading the code, connect the robot to the Bluetooth module and pair the Bluetooth APP. Turn on the powerswitch of the motor drive shield. Place the robot on the floor, you can use these buttons of the Bluetooth app to control the robot. 

![KS0555-11](media/4655aeffe0d2081fa2b9fd254113c392.jpeg)

1. The up, down, left and right arrows control the robot to move forward, backward, left and right respectively.


![Img](./media/img-20240117095345.png)

2. Click the joystick button and pull the direction of the black point in the white circle to control the movement direction of the robot.

![Img](./media/img-20240117095401.png)

3.Click the Gravity button and tilt the phone in the forward, backward, left, and right directions, and the robot will move in the direction in which the phone istilted.

![Img](./media/img-20240117095419.png)

###  Project 18: BT Speed Control Robot

#### (1)**Description:**

In the previous project, we learned how to control the smart tank with Bluetooth. The PWM value of the motor we used in front of us is 200 (the speed is 200). 

In this lesson, we will use Bluetooth to adjust the speed of the smart car. It is not limited to Fixed speed of 200. We define two variables to store the speed values of the left and right motors respectively. Through the previous study, we know that the range of this value can only take 0 to 255.



#### **(2)Flow chart:**

![image-20230427102042028](media/image-20230427102042028.png)

#### **(3)Connection Diagram:**

![Untitled Sketch 20_bb](media/930a8024364e07505e845624a94c27bd.png)

The GND, VCC, SDA, and SCL of the 8x16 LED dot matrix are respectively connected to-(GND), + (VCC), SDA, SCL of the expansion board;

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> When uploading the code, the Bluetooth module must be unplugged, and the Bluetooth can be reconnected after the uploading process. Otherwise the code may not be burned.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 18
  bluetooth control speed tank
  http://www.keyestudio.com
*/

//Array, used to save data of images, can be calculated by yourself or gotten from modulus tool
unsigned char start01[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
unsigned char front[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x12, 0x09, 0x12, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char back[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x48, 0x90, 0x48, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char left[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x00};
unsigned char right[] = {0x00, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char STOP01[] = {0x2E, 0x2A, 0x3A, 0x00, 0x02, 0x3E, 0x02, 0x00, 0x3E, 0x22, 0x3E, 0x00, 0x3E, 0x0A, 0x0E, 0x00};
unsigned char clear[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char speed_a[] = {0x00, 0x00, 0x00, 0x20, 0x10, 0x08, 0x04, 0x02, 0xff, 0x02, 0x04, 0x08, 0x10, 0x20, 0x00, 0x00};
unsigned char speed_d[] = {0x00, 0x00, 0x00, 0x04, 0x08, 0x10, 0x20, 0x40, 0xff, 0x40, 0x20, 0x10, 0x08, 0x04, 0x00, 0x00};
#define SCL_Pin  A5  //set the pin of clock to A5
#define SDA_Pin  A4  //A4 set data pin to A4

#define ML_Ctrl 4  //define the direction control pin of the left motor
#define ML_PWM 6   //define the PWM control pins of the left motor
#define MR_Ctrl 2  //define the direction control pin of the right motor
#define MR_PWM 5   //define the PWM control pin of the right motor
char ble_val;      //define the PWM control pin of the right motor
byte speeds_L = 200; //The initial speed of the left motor is 200
byte speeds_R = 200; //The initial speed of the right motor is 200
String speeds_l, speeds_r; //Receive a string of PWM to convert to an integer PWM value

void setup() {
  Serial.begin(9600);

  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);

  pinMode(SCL_Pin, OUTPUT);
  pinMode(SDA_Pin, OUTPUT);
  matrix_display(clear); //clear screens
  matrix_display(start01);  //show the image to start
}

void loop() {
  if (Serial.available() > 0) {
    ble_val = Serial.read();
    Serial.println(ble_val);
    switch (ble_val) {
      case 'F':  //the command to go front
        Car_front();
        break;
      case 'B':  //the command to go back
        Car_back();
        break;
      case 'L':  //the command to turn left
        Car_left();
        break;
      case 'R':  //the command to turn right
        Car_right();
        break;
      case 'S':  //the command to stop
        Car_Stop();
        break;
      case 'u':  //Receive a string starting with u and ending with #, and convert it to an integer value
        speeds_l = Serial.readStringUntil('#');
        speeds_L = String(speeds_l).toInt();
        break;
      case 'v':  //Receive a string starting with v and ending with #, and convert it to an integer value
        speeds_r = Serial.readStringUntil('#');
        speeds_R = String(speeds_r).toInt();
        break;
    }
  }
}

/***************The function to run the motor***************/

void Car_back() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, speeds_R);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, speeds_L);
  matrix_display(back);  //Go back
}

void Car_front() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 255 - speeds_R);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 255 - speeds_L);
  matrix_display(front);  //show the image to go front
}

void Car_left() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 255 - speeds_R);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, speeds_L);
  matrix_display(left);  //show the image to turn left
}

void Car_right() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, speeds_R);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 255 - speeds_L);
  matrix_display(right);  //show the image to turn right
}

void Car_Stop() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
  matrix_display(STOP01);  //show the image to stop
}

//This function is used for dot matrix screen display
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();  //Function to call data transfer start condition
  IIC_send(0xc0);  //Choose an address
  for (int i = 0; i < 16; i++) //Pattern data has 16 bytes
  {
    IIC_send(matrix_value[i]); //transfer pattern data
  }
  IIC_end();   //End pattern data transfer
  IIC_start();
  IIC_send(0x8A);  //display control, select pulse width as 4/16
  IIC_end();
}

//Conditions for the start of data transfer
void IIC_start()
{
  digitalWrite(SDA_Pin, HIGH);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, LOW);
}

//the sign of ending data transmission
void IIC_end()
{
  digitalWrite(SCL_Pin, LOW);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH);
  delayMicroseconds(3);
}

//transfer data
void IIC_send(unsigned char send_data)
{
  for (byte mask = 0x01; mask != 0; mask <<= 1) //each character has 8 digits, which is detected one by one
  {
    if (send_data & mask) { //set high or low levels in light of each bit(0 or 1)
      digitalWrite(SDA_Pin, HIGH);
    } else {
      digitalWrite(SDA_Pin, LOW);
    }
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, HIGH); //Pull the clock pin SCL_Pin high to stop data transmission
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, LOW); //pull down the clock pin SCL_Pin to change signals of SDA
  }
}
```

#### **(5)Test Results:**

After uploading the test code successfully, dialing the DIP switch to the right end, powering it on, and pairing the APP with Bluetooth, the smart car can be controlled to move by the APP. And the speed of the car can be regulated by pulling the speed dials of the left and right motors.

![KS0555-14](media/b9c902b937801f829b9ce2fd254b1849.jpeg)

(You can refer to function table in project 17 )

###  Project 19: Ultrasonic Tank Robot Multiple Functions

#### **(1)Description:**

The smart car has performed a single function in every previous project. 

Can it display multiply functions at a time ? Positive. 

In this last big project, we intend to use a complete code to control the smart car to show off all functions mentioned in previous projects. We use the keys on the Bluetooth APP to automatically switch various functions, quite simple and convenient.

#### **(2)Flow Diagram:**

![image-20230427102547633](media/image-20230427102547633.png)

#### **(3)Connection Diagram:**

![Untitled Sketch 21_bb](media/e7ac834ba04aa2e8862995d2d33ce935.png)

1\. GND, VCC, SDA and SCL of the 8x16 board are connected to G（GND), +（VCC), A4 and A5 of the expansion board.

2\. VCC, Trig, Echo and Gnd of the ultrasonic sensor are connected to 5V(V), 12(S), 13(S) and Gnd(G)

3\. The brown wire, red wire and orange wire of the servo are connected to Gnd(G), 5v(V) and D10.

4\. RXD, TXD, GND and VCC of the BT module are connected to TX, RX, G（GND) and 5V（VCC）. STATE and BRK don’t need to be interfaced.

5\. The pin "G", "V" and S of the left photoresistor module are connected to G (GND), V (VCC), A1 respectively; The right photoresistor module is connected to the G (GND), V (VCC), and A2 respectively.

6\. The distal port of the line tracking sensor is 11, 7 and 8.

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 19
  Ultrasonic Tank Robot Multiple Functions
  http://www.keyestudio.com
*/
#include <IRremote.h>
IRrecv irrecv(3);  //
decode_results results;
long ir_rec;  //used to save the IR value 

/***********/
#define USE_FAN_FUNCTION   0

//Array, used to save data of images, can be calculated by yourself or gotten from modulus tool
unsigned char start01[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
unsigned char STOP01[] = {0x2E, 0x2A, 0x3A, 0x00, 0x02, 0x3E, 0x02, 0x00, 0x3E, 0x22, 0x3E, 0x00, 0x3E, 0x0A, 0x0E, 0x00};
unsigned char front[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x12, 0x09, 0x12, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char back[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x48, 0x90, 0x48, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char left[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x00};
unsigned char right[] = {0x00, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

unsigned char Smile[] = {0x00, 0x00, 0x1c, 0x02, 0x02, 0x02, 0x5c, 0x40, 0x40, 0x5c, 0x02, 0x02, 0x02, 0x1c, 0x00, 0x00};
unsigned char Disgust[] = {0x00, 0x00, 0x02, 0x02, 0x02, 0x12, 0x08, 0x04, 0x08, 0x12, 0x22, 0x02, 0x02, 0x00, 0x00, 0x00};
unsigned char Happy[] = {0x02, 0x02, 0x02, 0x02, 0x08, 0x18, 0x28, 0x48, 0x28, 0x18, 0x08, 0x02, 0x02, 0x02, 0x02, 0x00};
unsigned char Squint[] = {0x00, 0x00, 0x00, 0x41, 0x22, 0x14, 0x48, 0x40, 0x40, 0x48, 0x14, 0x22, 0x41, 0x00, 0x00, 0x00};
unsigned char Despise[] = {0x00, 0x00, 0x06, 0x04, 0x04, 0x04, 0x24, 0x20, 0x20, 0x26, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00};
unsigned char Heart[] = {0x00, 0x00, 0x0C, 0x1E, 0x3F, 0x7F, 0xFE, 0xFC, 0xFE, 0x7F, 0x3F, 0x1E, 0x0C, 0x00, 0x00, 0x00};

unsigned char clear[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#define SCL_Pin  A5  //set the pin of clock to A5
#define SDA_Pin  A4  //set the data pin to A4

#define ML_Ctrl 4  //define the direction control pin of the left motor as 4
#define ML_PWM 6   //define the PWM control pin of the left motor 
#define MR_Ctrl 2  //define the direction control pin of the right sensor
#define MR_PWM 5   //define the PWM control pin of the right motor 
char ble_val;      //used to save the Bluetooth value
byte speeds_L = 200; //the initial speed of the left motor is 200
byte speeds_R = 200; //the initial speed of the right motor is 200
String speeds_l, speeds_r; //receive PWM characters and convert them into PWM value

//wire up the line tracking sensor
#define L_pin  11  //left
#define M_pin  7  //middle
#define R_pin  8  //right
int L_val, M_val, R_val;

#if USE_FAN_FUNCTION  /****use fan*******/
int flame_L = A1; //define the analog port of the left flame sensor to A1
int flame_R = A2; //define the analog port of the right flame sensor to A2
int flame_valL, flame_valR;

//the pin of 130 motor
int INA = 12;
int INB = 13;

#else /****use the ultrasonic sensor*******/
#define servoPin    10  //servo Pin
#define light_L_Pin A1   //define the pin of the left photoresistor
#define light_R_Pin A2   //define the pin of the right photoresistor
int left_light;
int right_light;

#define Trig 12
#define Echo 13
float distance;//Store the distance values detected by ultrasonic for following

//Store the distance values detected by ultrasonic for obstacle avoidance
int a;
int a1;
int a2;

#endif

bool flag;  //flag invariable, used to enter and exit a mode

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();  //Initialize the library of the IR remote

  pinMode(SCL_Pin, OUTPUT);
  pinMode(SDA_Pin, OUTPUT);
  
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);

  pinMode(L_pin, INPUT); //define the pins of sensors to INPUT
  pinMode(M_pin, INPUT);
  pinMode(R_pin, INPUT);

  matrix_display(clear);    //clear screen
  matrix_display(start01);  //show start

#if USE_FAN_FUNCTION/****use the fan*******/
  pinMode(INA, OUTPUT);//set INA to OUTPUT
  pinMode(INB, OUTPUT);//set INB to OUTPUT

  //define inputs of the flame sensor
  pinMode(flame_L, INPUT);
  pinMode(flame_R, INPUT);
#else/****use the ultrasonic sensor*******/
  pinMode(servoPin, OUTPUT);
  pinMode(light_L_Pin, INPUT);
  pinMode(light_R_Pin, INPUT);

  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  procedure(90); //set the angle of the servo to 90°
#endif
}

void loop() {
  if (Serial.available()) //if there is data in the serial buffer
  {
    ble_val = Serial.read();
    Serial.println(ble_val);
    switch (ble_val) {
      case 'F': Car_front(); break; //the command to go front

      case 'B': Car_back(); break;  //the command to go back

      case 'L': Car_left(); break;  //the command to turn left

      case 'R': Car_right(); break; //the command to turn right

      case 'S': Car_Stop();  break; //stop

      case 'e': Tracking();  break; //enter the line tracking mode

      case 'f': Confinement(); break;  //enter the confinement mode

#if USE_FAN_FUNCTION/****use fan*******/
      case 'j': Fire(); break;  //enable extinguishing fire mode

      case 'c': fan_begin(); break;  //enable the fan

      case 'd': fan_stop();  break;  //turn off the fan

#else/****use the ultrasonic sensor*******/
      case 'g': Avoid(); break;  //enter obstacle avoidance mode

      case 'h': Follow(); break;  //enter light following mode

      case 'i': Light_following();  break;  //enter light following mode
#endif
      case 'u': 
        speeds_l = Serial.readStringUntil('#'); 
        speeds_L = String(speeds_l).toInt(); 
        break; //start by receiving u, end by receiving characters # and convert into the integer

      case 'v': 
        speeds_r = Serial.readStringUntil('#');
        speeds_R = String(speeds_r).toInt(); 
        break; //start by receiving u, end by receiving characters # and convert into the integer

      case 'k': matrix_display(Smile);    break;  //show "smile" face
      case 'l': matrix_display(Disgust);  break;  //show "disgust" face
      case 'm': matrix_display(Happy);    break;  //show "happy" face
      case 'n': matrix_display(Squint);   break;  //show "Sad" face
      case 'o': matrix_display(Despise);  break;  //show "despise" face
      case 'p': matrix_display(Heart);    break;  //show the hearbeat image
      case 'z': matrix_display(clear);    break;  //clear images

      default: break;
    }
  }

#if (USE_FAN_FUNCTION != 1)/****the function to not use the fan*******/
  //The following three signals are mainly used for cyclic printing
  if (ble_val == 'x') {
    distance = checkdistance(); Serial.println(distance);
    delay(50);
  } else if (ble_val == 'w') {
    left_light = analogRead(light_L_Pin);
    Serial.println(left_light);
    delay(50);
  } else if (ble_val == 'y') {
    right_light = analogRead(light_R_Pin);
    Serial.println(right_light);
    delay(50);
  }
#endif

  if (irrecv.decode(&results)) { //Receive infrared remote control value
    ir_rec = results.value;
    Serial.println(ir_rec, HEX);
    switch (ir_rec) {
      case 0xFF629D: Car_front();   break;   //go front
      case 0xFFA857: Car_back();    break;   //go back
      case 0xFF22DD: Car_left();    break;   //rotate to left
      case 0xFFC23D: Car_right();   break;   //rotate to right
      case 0xFF02FD: Car_Stop();    break;   //stop
      default: break;
    }
    irrecv.resume();
  }
}

#if (USE_FAN_FUNCTION != 1)/****use the ultrasonic sensor*******/

//Control the ultrasonic sensor
float checkdistance() {
  float distance;
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  distance = pulseIn(Echo, HIGH) / 58.20;  //
  delay(10);
  return distance;
}


//the function to control the servo
void procedure(int myangle) {
  int pulsewidth;
  pulsewidth = map(myangle, 0, 180, 500, 2000);  //Calculate the pulse width value, which should be the mapping value from 500 to 2500. Considering the influence of the infrared library, 500~2000 is used here.
  for (int i = 0; i < 5; i++) {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(pulsewidth);   //The duration of the high level is the pulse width
    digitalWrite(servoPin, LOW);
    delay((20 - pulsewidth / 1000));  //The period is 20ms, so the low level lasts the rest of the time
  }
}

/*****************obstacle avoidance******************/
void Avoid()
{
  flag = 0;
  while (flag == 0)
  {
    a = checkdistance();  //the front distance is set to a
    if (a < 20) {//When the distance in front is less than 20cm
      Car_Stop();  //stop
      delay(500); //delay in 500ms
      procedure(180);  //servo turns left
      delay(500); //delay in 500ms
      a1 = checkdistance();  //the left distance is set to a1
      delay(100); //read value

      procedure(0); //servo turns right
      delay(500); //delay in 500ms
      a2 = checkdistance(); ///the right distance is set to a2
      delay(100); //read value

      procedure(90);  //back to 90°
      delay(500);
      if (a1 > a2) { //When the distance on the left is greater than the distance on the right
        Car_left();  //the robot turns left
        delay(700);  //turn left 700ms
      } else {
        Car_right(); //turn right
        delay(700);
      }
    }
    else { //if the front distance ≥20cm，robot goes front
      Car_front(); //go front
    }
    //receive the Bluetooth value to exit the loop
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S')  //receive S
      {
        flag = 1;  //Set flag to 1 to exit the loop
        Car_Stop();
      }
    }
  }
}

/*******************following***************/
void Follow() {
  flag = 0;
  while (flag == 0) {
    distance = checkdistance();  //set the distance value to distance
    if (distance >= 20 && distance <= 60) //go front
    {
      Car_front();
    }
    else if (distance > 10 && distance < 20)  // stop
    {
      Car_Stop();
    }
    else if (distance <= 10)  //go back
    {
      Car_back();
    }
    else  //stop
    {
      Car_Stop();
    }
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S')
      {
        flag = 1;  //exit the loop
        Car_Stop();
      }
    }
  }
}

/****************light following******************/
void Light_following() {
  flag = 0;
  while (flag == 0) {
    left_light = analogRead(light_L_Pin);
    right_light = analogRead(light_R_Pin);
    if (left_light > 650 && right_light > 650) //go forward
    {
      Car_front();
    }
    else if (left_light > 650 && right_light <= 650)  //turn left
    {
      Car_left();
    }
    else if (left_light <= 650 && right_light > 650) //turn right
    {
      Car_right();
    }
    else  //or else, stop
    {
      Car_Stop();
    }
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S') {
        flag = 1;
        Car_Stop();
      }
    }
  }
}

#else/****use the fan*******/
/***************enable the fan*****************/
void fan_begin() {
  digitalWrite(INA, LOW);
  digitalWrite(INB, HIGH);
}

/***************stop fanning*****************/
void fan_stop() {
  digitalWrite(INA, LOW);
  digitalWrite(INB, LOW);
}

/***************extinguish fire****************/
void Fire() {
  flag = 0;
  while (flag == 0) {
    //Read the analog value of the flame sensor
    flame_valL = analogRead(flame_L);
    flame_valR = analogRead(flame_R);
    if (flame_valL <= 700 || flame_valR <= 700) {
      Car_Stop();
      fan_begin();
    } else {
      fan_stop();
      L_val = digitalRead(L_pin); //Read the value of the left sensor
      M_val = digitalRead(M_pin); //Read the value of the left sensor
      R_val = digitalRead(R_pin); //Read the value of the right sensor

      if (M_val == 1) { //the middle one detects black lines
        if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
          Car_left();
        }
        else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
          Car_right();
        }
        else { //go front
          Car_front();
        }
      }
      else { //the middle one detects black lines
        if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
          Car_left();
        }
        else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
          Car_right();
        }
        else { //otherwise stop
          Car_Stop();
        }
      }
    }
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S') {
        flag = 1;
        Car_Stop();
      }
    }
  }
}

#endif

/***************line tracking*****************/
void Tracking() {
  flag = 0;
  while (flag == 0) {
    L_val = digitalRead(L_pin); //Read the value of the left sensor
    M_val = digitalRead(M_pin); //Read the value of the intermediate sensor
    R_val = digitalRead(R_pin); //Read the value of the sensor on the right
    if (M_val == 1) { //the middle one detects black lines
      if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
        Car_left();
      }
      else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
        Car_right();
      }
      else { //go front
        Car_front();
      }
    }
    else { //the middle sensor doesn’t detect black lines
      if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
        Car_left();
      }
      else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
        Car_right();
      }
      else { //otherwise stop
        Car_Stop();
      }
    }
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S') {
        flag = 1;
        Car_Stop();
      }
    }
  }
}

/***************Confinement*****************/
void Confinement() {
  flag = 0;
  while (flag == 0) {
    L_val = digitalRead(L_pin); //Read the value of the left sensor
    M_val = digitalRead(M_pin); //Read the value of the intermediate sensor
    R_val = digitalRead(R_pin); //Read the value of the sensor on the right
    if ( L_val == 0 && M_val == 0 && R_val == 0 ) { //Go front when no black lines are detected      Car_front();
    }
    else { //
      Car_back();
      delay(700);
      Car_left();
      delay(800);
    }
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S') {
        flag = 1;
        Car_Stop();
      }
    }
  }
}


/***************dot matrix******************/
//this function is used for the display of dot matrix 
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();  //use the function to start transmitting data
  IIC_send(0xc0);  //select an address
  for (int i = 0; i < 16; i++) //image data have 16 characters
  {
    IIC_send(matrix_value[i]); //data to transmit pictures
  }
  IIC_end();   //end the data transmission of pictures
  IIC_start();
  IIC_send(0x8A);  //show control and select pulse width 4/16
  IIC_end();
}

//the condition that data starts transmitting
void IIC_start()
{
  digitalWrite(SDA_Pin, HIGH);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, LOW);
}

//transmit data
void IIC_send(unsigned char send_data)
{
  for (byte mask = 0x01; mask != 0; mask <<= 1) //each character has 8 digits, which is detected one by one
  {
    if (send_data & mask) { //set high or low levels in light of each bit(0 or 1)
      digitalWrite(SDA_Pin, HIGH);
    } else {
      digitalWrite(SDA_Pin, LOW);
    }
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, HIGH); //pull up the clock pin SCL_Pin to end the transmission of data
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, LOW); //pull down the clock pin SCL_Pin to change signals of SDA 
  }
}

//the sign that transmission of data ends
void IIC_end()
{
  digitalWrite(SCL_Pin, LOW);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH);
  delayMicroseconds(3);
}

/***************motor runs****************/
void Car_back() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, speeds_R);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, speeds_L);
  matrix_display(back);  //show the image of going back
}

void Car_front() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 255 - speeds_R);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 255 - speeds_L);
  matrix_display(front);  //show the image of going front
}

void Car_left() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 255 - speeds_R);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, speeds_L);
  matrix_display(left);  //show the image of turning left
}

void Car_right() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, speeds_R);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 255 - speeds_L);
  matrix_display(right);  //show the image of turning right
}

void Car_Stop() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
  matrix_display(STOP01);  //show the stop image
}
```

#### **(5)Test Result:**

Before uploading the program code, the Bluetooth module needs to be removed, otherwise the code upload will fail.

After uploading the code successfully, open the positioning, and then connect the Bluetooth module.

After uploading the code successfully, plug in the Bluetooth module, after power-on, after the mobile APP is connected to the Bluetooth successfully, we can use the mobile APP to control the tank robot.

You can also control the robot with the remote control.

## 4. Experiment Extension

### Assemble Fire Extinguishing Robot

Remove the ultrasonic sensor and two photoresistors

![ 12_6.png 12_6](./media/d575fad4068d67daffaf3958996a185b.png)

![ 13.png 13](./media/3a350ba2fda9f37c8f0870f16c981f7b.png)

Put on a fan module and two flame sensors

![ 2.png 2](./media/f1a3dbebcb34d4a390e4b2412d34e03e.png)

You can make the fan module install further if the fan module and flame sensors interfere

![ ](./media/8ec448f8b626fd9f8f0a6941b927c0af.png)

**Wire up**

Wire up the two flame sensors

![ ](./media/e224ea3ffed9b63eda92e9fbd2fc0ed2.png)

| Flame Sensor | Keyestudio 8833 Board |
| :----------: | :-------------------: |
|      G       |           G           |
|      V       |           V           |
|      A       |          A1           |

![ ](./media/5aaf61e5d36e7bc01753e544bebeca46.png)

| Flame Sensor | Keyestudio 8833 Board |
| :----------: | :-------------------: |
|      G       |           G           |
|      V       |           V           |
|      A       |          A2           |

Wire up the fan module 

![ ](./media/c646fb9322c3f4315b246a36ee1df17c.png)

| DC130 Motor | Keyestudio 8833 Board |
| :---------: | :-------------------: |
|      G      |           G           |
|      V      |           V           |
|     IN+     |          D12          |
|     IN-     |          D13          |

------



 **We adopt a model 18650 lithium battery with a pointed positive pole, whose power and capacity are not required.**

![Img](./media/img-20240117152607.jpg)


------


###  Project 20: Flame Sensor

![](media/7cf8c051f489b06119c262cd059c23c5.jpeg)

#### **(1)Description：**

The flame sensor uses IR receiving tube to detect flames, converts the brightness of the flame into signals with high and low levels, input them into the central processor. The corresponding program processing. In both flames close to and without flames, the voltage value of the analog port is varied. 

If there is no flame, the analog port is about 0.3V; when there is a flame, the analog port is 1.0V. The closer the flame is , the more the voltage value is. It can be used to detect the fire source or make a smart robot.

Note the probe of flame sensors only bears the temperature between -25 ℃and ～85℃

In the process of use, pay attention to keep the flame sensor in certain distance to avoid getting damaged.

#### **(2)Parameters：**

![](media/e2c77a94067ccd3e634fb3674c02b80f.png)

- Working voltage: 3.3V-5V (DC)

- Current: 100mA

- Maximum power: 0.5W

- Work temperature: -10 ° C to +50 degrees Celsius

- Sensor size: 31.6mmx23.7mm

- Interface: 4pin turn 3PIN interface

- Output signal: analog signals A0, A1



#### **(3)Connection Diagram:**

![Untitled Sketch 5.1](media/10f5f2256c61c54bf7f9a7a0c52375f9.png)

Flame sensors are connected to A1 and A2. 

When we remove ultrasonic sensors and photoresistors, then add flame sensors and fan modules.
The fire extinguishing robot is created.

<span style="color: rgb(255, 76, 65);">**Note:**</span>
1）This experiment requires the use of a fire source. Please make it away from flammable items to prevent fire. Children should experiment under adult supervision. If you cannot confirm that you are safe, please abandon the experiment. 
2）**The flame sensoris not fireproof, please do not burn it directly with flame.**


#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*

Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 20.1

flame sensor

http://www.keyestudio.com

*/

int flame = A1; //Define the flame pin as analog pin A1
int val = 0; //Define digital variables

void setup() {
	pinMode(flame, INPUT); //Define the buzzer as an input source
    Serial.begin(9600); //Set the baud rate to 9600
}

void loop() {
	val = analogRead(flame); //Read the analog value of the flame sensor
	Serial.println(val);//Output analog value and print it
	delay(100); //Delay in 100ms
}
```

#### **(5)Test Result：**

Wire up components, burn the code, open the serial monitor and set the baud rate to 9600.

You can view the simulation value of flame sensor.

The closer the flame, the smaller the simulation value.

Adjust the potentiometer on the module to maintain D1 at the critical point. When the sensor does not detect flame, the D1 will be off, but if the sensor detects flame, the D1 will be on.

![Img](./media/img-20240117085629.png)

![](media/05db06b3e205dfca63c2ba3aa7ff528e.png)

<span style="color: rgb(255, 76, 65);">**Note:**</span>
Please make it away from flammable items to prevent fire. Children should experiment under adult supervision. If you cannot confirm that you are safe, please abandon the experiment. The flame sensor is not fireproof, please do not burn it directly with flame.

#### **(6)Extension Practice:**

<span style="color: rgb(255, 76, 65);">**Note:**</span>
1）This experiment requires the use of a fire source. Please make it away from flammable items to prevent fire. Children should experiment under adult supervision. If you cannot confirm that you are safe, please abandon the experiment. 
2）The flame sensoris not fireproof, please do not burn it directly with flame.

Next, connect an LED to pin 9 and we can control it by a flame sensor, as shown below;

![Untitled Sketch 5.2](media/814c315d3bb44278b476a754d3681227.png)

**Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*

Keyestudio Mini Tank Robot V3 (Popular Edition)

lesson 20.2

flame sensor

http://www.keyestudio.com

*/

int flame = A1; //Define the flame pin as analog pin A1
int LED = 9; //Define the LED as digital port 9
int val = 0; //Define digital variables

void setup() {
    pinMode(flame, INPUT); //Define the flame as an input source
    pinMode(LED, OUTPUT); //Set LED to output mode
    Serial.begin(9600); //Set the baud rate to 9600
}

void loop() {
    val = analogRead(flame); //Read the analog value of the flame sensor
    Serial.println(val);//Output analog value and print it
    if (val < 300) { //When analog value is less than 300, LED is on
    	digitalWrite(LED, HIGH); //LED is on
    } else {
    	digitalWrite(LED, LOW); //LED is off
    }
    delay(50); //Delay in 50ms
}
```

#### **(8)Test Results：**

You can use the flame of a lighter near the left flame sensor. When the flame sensor detects a flame, the LED module will light up as an alarm.

![Img](./media/img-20240117085131.png)

<span style="color: rgb(255, 76, 65);">**Note:**</span>
Please make it away from flammable items to prevent fire. Children should experiment under adult supervision. If you cannot confirm that you are safe, please abandon the experiment. The flame sensor is not fireproof, please do not burn it directly with flame.

###  Project 21: Fan

#### **(1)Description：**

![](media/4afc1c9720d36beba8adfac0ee22ff10.png)

This fan module uses a HR1124S motor-controlling chip, a single-channel H-bridge driver chip containing a low-conductivity resistance PMOS and NMOS power tubes. The low-conducting resistance can ease the power consumption, contributing to the safe work of the chip for longer time. 

In addition, its low standby current and low static working current makes itself apply to toys. We can control the rotation direction and speed of the fan by outputting IN + and IN- signals and PWM signals.

#### **(2)Specification:**

Working voltage: 5V

Current: 200MA

Maximum power: 2W

Operating temperature: -10 degrees Celsius to +50 degrees Celsius

Size: 47.6MM \*23.8MM

#### **(3)Connection Diagram:**

The fan module needs driving by large current; therefore, we install a battery holder.

![Untitled Sketch 6.1](media/2bd9aa5cc21e274458328958561f1915.png)

The pin GND, VCC, IN+ and IN- of the fan module are connected to pin G, V, D12 and D13 of the shield.

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 21.1
130 motor
http://www.keyestudio.com
*/

int INA = 12;
int INB = 13;

void setup() {
    pinMode(INA, OUTPUT);//Set digital port INA as output
    pinMode(INB, OUTPUT);//Set digital port INB as output
}

void loop() {
    //Set the fan to rotate anticlockwise for 3s
    digitalWrite(INA, LOW);
    digitalWrite(INB, HIGH);
    delay(3000);
    //Set the fan to stop for 1s
    digitalWrite(INA, LOW);
    digitalWrite(INB, LOW);
    delay(1000);
    //Set the fan to rotate clockwise for 3s
    digitalWrite(INA, HIGH);
    digitalWrite(INB, LOW);
    delay(3000);
}
```

#### **(5)Test Results：**

Upload code, wire up components and plug in power. The small fan will turn anticlockwise for 3000ms, stop for 1000ms, and clockwise for 300ms.

![Img](./media/img-20240117085032.png)

#### **(6)Extension Practice:**

We have understood the working principle of the flame sensor. Next, hook up a flame sensor in the circuit , as shown below. Then control the fan to blew out fire with the flame sensor.

![Untitled Sketch 6.2](media/67463007499fe6b3f077b4bfbdce6cad.png)

(<span style="color: rgb(255, 76, 65);">Note: </span>Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
Keyestudio Mini Tank Robot V3 (Popular Edition)
lesson 21.2
130 motor
http://www.keyestudio.com
*/

int INA = 12;
int INB = 13;
int flame = A1; //Define the flame pin as analog pin A1
int val = 0; //Define digital variables

void setup() {
    pinMode(INA, OUTPUT);//Set digital port INA as output
    pinMode(INB, OUTPUT);//Set digital port INB as output
    pinMode(flame, INPUT); //Define the flame as an input source
}

void loop() {
    val = analogRead(flame); //Read the analog value of the flame sensor
    if (val <= 700) { //When analog value≤700, fan is on
        //Turn on the fan when flame is detected
        digitalWrite(INA, LOW);
        digitalWrite(INB, HIGH);
    } else {
        //Otherwise it stops operating
        digitalWrite(INA, LOW);
        digitalWrite(INB, LOW);
    }
}
```

After uploading the code, turn on the power switch of the motor drive shield, you can turn on the fan when flame is detected from the left flame sensor of the robot.

![img-20240117102303](img/img-20240117102303.png)

###  Project 22: Fire Extinguishing Tank  


#### **(1)Description:**

The line-tracking function of the smart tank has been explained in the previous project. And in this project we use the flame sensor to make a fire extinguishing robot. 

When the car encounters flames, the motor of the fan will rotate to blow out the fire. Of course, we need to replace the ultrasonic sensor and two photoresistors with a fan module and flame sensors first. 

The specific logic of the line-tracking smart car is shown in the table below:

| Left Flame Sensors | Right Flame Sensors | Status                                          |
| :----------------: | :-----------------: | :---------------------------------------------- |
|        ≤700        |        ≤700         | Car stops，fan starts rotating to blow up flame |
|        ≥700        |        ≥700         | Car stops，fan starts rotating to blow up flame |
|        ≥700        |        ≥700         | Car stops，fan starts rotating to blow up flame |
|       ＞700        |        ＞700        | Fan stops，car moves                            |

<span style="color: rgb(255, 76, 65);">**Note:**</span>
1）This experiment requires the use of a fire source. Please make it away from flammable items to prevent fire. Children should experiment under adult supervision. If you cannot confirm that you are safe, please abandon the experiment. 
2）The flame sensoris not fireproof, please do not burn it directly with flame.
We can control an external LED with the flame sensor. The LED still is connected to D9. When fire is connected, LED will be on.

#### **(2)Flow chart:**

![img](media/wps12.png)

#### **(3)Connection Diagram:**

![Untitled Sketch 18_bb](media/c02e461ac7bdbab7fd14a19c453e08e4.png)

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 22
  Fire extinguishing tank
  http://www.keyestudio.com
*/

int flame_L = A1; //Define the flame interface on the left as the analog pin A1
int flame_R = A2; //Define the flame interface on the right as the analog pin A2
//The wiring of line tracking sensor
#define L_pin  11  //left
#define M_pin  7  //middle
#define R_pin  8  //right
//The pin of the servo 130
int INA = 12;
int INB = 13;
#define ML_Ctrl 4  //Define the direction control pin of the left motor
#define ML_PWM 6   //Define the PWM control pin of the left motor
#define MR_Ctrl 2  //Define the direction control pin of the right motor
#define MR_PWM 5   //Define the PWM control pin of the right motor
int L_val, M_val, R_val, flame_valL, flame_valR;

void setup()
{
  Serial.begin(9600);
  //Set all pins of the line tracking sensor as input mode
  pinMode(L_pin, INPUT);
  pinMode(M_pin, INPUT);
  pinMode(R_pin, INPUT);
  //Define the flame as INPUT
  pinMode(flame_L, INPUT);
  pinMode(flame_R, INPUT);
  //Define the motor as OUTPUT
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);
  pinMode(INA, OUTPUT);//Set digital port INA as OUTPUT
  pinMode(INB, OUTPUT);//Set digital port INB as OUTPUT
}

void loop () {
  //Read the analog value of the flame sensors
  flame_valL = analogRead(flame_L);
  flame_valR = analogRead(flame_R);
  Serial.print(flame_valL);
  Serial.print("  ");
  Serial.print(flame_valR);
  Serial.println("  ");
//  delay(500);
  if (flame_valL <= 700 || flame_valR <= 700) {
    Car_Stop();
    fan_begin();
  } else {
    fan_stop();
    L_val = digitalRead(L_pin); //Read the value of the left sensor
    M_val = digitalRead(M_pin); //Read the value of the middle sensor
    R_val = digitalRead(R_pin); //Read the value of the right sensor
    
    if (M_val == 1) { //the middle one detects black lines
      if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
        Car_left();
      }
      else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
        Car_right();
      }
      else { //otherwise, go front
        Car_front();
      }
    }
    else { //The middle one doesn't detect black lines
      if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
        Car_left();
      }
      else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
        Car_right();
      }
      else { //otherwise, stop
        Car_Stop();
      }
    }
  }
}

void fan_stop() {
  //stop rotating
  digitalWrite(INA, LOW);
  digitalWrite(INB, LOW);
}

void fan_begin() {
  //fan rotates
  digitalWrite(INA, LOW);
  digitalWrite(INB, HIGH);
}

void Car_front()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 150);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 150);
}
void Car_back()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 100);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 100);
}
void Car_left()
{
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 150);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 100);
}
void Car_right()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 100);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 150);
}
void Car_Stop()
{
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 100);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 100);
  
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
}
```

#### **(5)Test Result:**

After uploading the test code successfully and powering it up, the smart car puts out the fire when it detects flame and continues moving along the black line.

![10](media/694677ab33053846ec588667dc40ecfa.jpeg)

<span style="color: rgb(255, 76, 65);">**Note:**</span>
Please make it away from flammable items to prevent fire. Children should experiment under adult supervision. If you cannot confirm that you are safe, please abandon the experiment. The flame sensor is not fireproof, please do not burn it directly with flame.


###  Project 23: Fire Extinguishing Robot Multiple Functions


#### **(1)Description:**

The smart car has performed a single function in every previous project. 

Can it display multiply functions at a time ? Positive. 

In this last big project, we intend to use a complete code to control the smart car to show off all functions mentioned in previous projects. We use the keys on the Bluetooth APP to automatically switch various functions, quite simple and convenient.



#### **(2)Flow Diagram:**

<span style="color: rgb(255, 76, 65);">**Please referto Project 16 to install and configure Bluetooth APP**</span>

![image-20230427102547633](media/image-20230427102547633.png)

#### **(3)Connection Diagram:**

![Untitled Sketch 21_bb](media/e7ac834ba04aa2e8862995d2d33ce9356.jpg)

1\. GND, VCC, SDA and SCL of the 8x16 board are connected to G（GND), +（VCC), A4 and A5 of the expansion board.

2\. VCC, IN+, IN- and Gnd of the ultrasonic sensor are connected to 5V(V), 12(S), 13(S) and Gnd(G)

3\. The brown wire, red wire and orange wire of the servo are connected to Gnd(G), 5v(V) and D10.

4\. RXD, TXD, GND and VCC of the BT module are connected to TX, RX, G（GND) and 5V（VCC）. STATE and BRK don’t need to be interfaced.

5\. The pin "G", "V" and S of the left Flame sensors are connected to G (GND), V (VCC), A1 respectively; The right Flame sensors is connected to the G (GND), V (VCC), and A2 respectively.

6\. The distal port of the line tracking sensor is 11, 7 and 8

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

```C
/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 23
  Fire Extinguishing Robot Multiple Functions
  http://www.keyestudio.com
*/
#include <IRremote.h>
IRrecv irrecv(3);  //
decode_results results;
long ir_rec;  //used to save the IR value 

/***********/
#define USE_FAN_FUNCTION   1

//Array, used to save data of images, can be calculated by yourself or gotten from modulus tool
unsigned char start01[] = {0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
unsigned char STOP01[] = {0x2E, 0x2A, 0x3A, 0x00, 0x02, 0x3E, 0x02, 0x00, 0x3E, 0x22, 0x3E, 0x00, 0x3E, 0x0A, 0x0E, 0x00};
unsigned char front[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x12, 0x09, 0x12, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char back[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x24, 0x48, 0x90, 0x48, 0x24, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
unsigned char left[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x44, 0x28, 0x10, 0x00};
unsigned char right[] = {0x00, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x10, 0x28, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

unsigned char Smile[] = {0x00, 0x00, 0x1c, 0x02, 0x02, 0x02, 0x5c, 0x40, 0x40, 0x5c, 0x02, 0x02, 0x02, 0x1c, 0x00, 0x00};
unsigned char Disgust[] = {0x00, 0x00, 0x02, 0x02, 0x02, 0x12, 0x08, 0x04, 0x08, 0x12, 0x22, 0x02, 0x02, 0x00, 0x00, 0x00};
unsigned char Happy[] = {0x02, 0x02, 0x02, 0x02, 0x08, 0x18, 0x28, 0x48, 0x28, 0x18, 0x08, 0x02, 0x02, 0x02, 0x02, 0x00};
unsigned char Squint[] = {0x00, 0x00, 0x00, 0x41, 0x22, 0x14, 0x48, 0x40, 0x40, 0x48, 0x14, 0x22, 0x41, 0x00, 0x00, 0x00};
unsigned char Despise[] = {0x00, 0x00, 0x06, 0x04, 0x04, 0x04, 0x24, 0x20, 0x20, 0x26, 0x04, 0x04, 0x04, 0x04, 0x00, 0x00};
unsigned char Heart[] = {0x00, 0x00, 0x0C, 0x1E, 0x3F, 0x7F, 0xFE, 0xFC, 0xFE, 0x7F, 0x3F, 0x1E, 0x0C, 0x00, 0x00, 0x00};

unsigned char clear[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

#define SCL_Pin  A5  //set the pin of clock to A5
#define SDA_Pin  A4  //set the data pin to A4

#define ML_Ctrl 4  //define the direction control pin of the left motor as 4
#define ML_PWM 6   //define the PWM control pin of the left motor 
#define MR_Ctrl 2  //define the direction control pin of the right sensor
#define MR_PWM 5   //define the PWM control pin of the right motor 
char ble_val;      //used to save the Bluetooth value
byte speeds_L = 200; //the initial speed of the left motor is 200
byte speeds_R = 200; //the initial speed of the right motor is 200
String speeds_l, speeds_r; //receive PWM characters and convert them into PWM value

//wire up the line tracking sensor
#define L_pin  11  //left
#define M_pin  7  //middle
#define R_pin  8  //right
int L_val, M_val, R_val;

#if USE_FAN_FUNCTION  /****use fan*******/
int flame_L = A1; //define the analog port of the left flame sensor to A1
int flame_R = A2; //define the analog port of the right flame sensor to A2
int flame_valL, flame_valR;

//the pin of 130 motor
int INA = 12;
int INB = 13;

#else /****use the ultrasonic sensor*******/
#define servoPin    10  //servo Pin
#define light_L_Pin A1   //define the pin of the left photoresistor
#define light_R_Pin A2   //define the pin of the right photoresistor
int left_light;
int right_light;

#define Trig 12
#define Echo 13
float distance;//Store the distance values detected by ultrasonic for following

//Store the distance values detected by ultrasonic for obstacle avoidance
int a;
int a1;
int a2;

#endif

bool flag;  //flag invariable, used to enter and exit a mode

void setup() {
  Serial.begin(9600);
  irrecv.enableIRIn();  //Initialize the library of the IR remote

  pinMode(SCL_Pin, OUTPUT);
  pinMode(SDA_Pin, OUTPUT);
  
  pinMode(ML_Ctrl, OUTPUT);
  pinMode(ML_PWM, OUTPUT);
  pinMode(MR_Ctrl, OUTPUT);
  pinMode(MR_PWM, OUTPUT);

  pinMode(L_pin, INPUT); //define the pins of sensors to INPUT
  pinMode(M_pin, INPUT);
  pinMode(R_pin, INPUT);

  matrix_display(clear);    //clear screen
  matrix_display(start01);  //show start

#if USE_FAN_FUNCTION/****use the fan*******/
  pinMode(INA, OUTPUT);//set INA to OUTPUT
  pinMode(INB, OUTPUT);//set INB to OUTPUT

  //define inputs of the flame sensor
  pinMode(flame_L, INPUT);
  pinMode(flame_R, INPUT);
#else/****use the ultrasonic sensor*******/
  pinMode(servoPin, OUTPUT);
  pinMode(light_L_Pin, INPUT);
  pinMode(light_R_Pin, INPUT);

  pinMode(Trig, OUTPUT);
  pinMode(Echo, INPUT);
  procedure(90); //set the angle of the servo to 90°
#endif
}

void loop() {
  if (Serial.available()) //if there is data in the serial buffer
  {
    ble_val = Serial.read();
    Serial.println(ble_val);
    switch (ble_val) {
      case 'F': Car_front(); break; //the command to go front

      case 'B': Car_back(); break;  //the command to go back

      case 'L': Car_left(); break;  //the command to turn left

      case 'R': Car_right(); break; //the command to turn right

      case 'S': Car_Stop();  break; //stop

      case 'e': Tracking();  break; //enter the line tracking mode

      case 'f': Confinement(); break;  //enter the confinement mode

#if USE_FAN_FUNCTION/****use fan*******/
      case 'j': Fire(); break;  //enable extinguishing fire mode

      case 'c': fan_begin(); break;  //enable the fan

      case 'd': fan_stop();  break;  //turn off the fan

#else/****use the ultrasonic sensor*******/
      case 'g': Avoid(); break;  //enter obstacle avoidance mode

      case 'h': Follow(); break;  //enter light following mode

      case 'i': Light_following();  break;  //enter light following mode
#endif
      case 'u': 
        speeds_l = Serial.readStringUntil('#'); 
        speeds_L = String(speeds_l).toInt(); 
        break; //start by receiving u, end by receiving characters # and convert into the integer

      case 'v': 
        speeds_r = Serial.readStringUntil('#');
        speeds_R = String(speeds_r).toInt(); 
        break; //start by receiving u, end by receiving characters # and convert into the integer

      case 'k': matrix_display(Smile);    break;  //show "smile" face
      case 'l': matrix_display(Disgust);  break;  //show "disgust" face
      case 'm': matrix_display(Happy);    break;  //show "happy" face
      case 'n': matrix_display(Squint);   break;  //show "Sad" face
      case 'o': matrix_display(Despise);  break;  //show "despise" face
      case 'p': matrix_display(Heart);    break;  //show the hearbeat image
      case 'z': matrix_display(clear);    break;  //clear images

      default: break;
    }
  }

#if (USE_FAN_FUNCTION != 1)/****the function to not use the fan*******/
  //The following three signals are mainly used for cyclic printing
  if (ble_val == 'x') {
    distance = checkdistance(); Serial.println(distance);
    delay(50);
  } else if (ble_val == 'w') {
    left_light = analogRead(light_L_Pin);
    Serial.println(left_light);
    delay(50);
  } else if (ble_val == 'y') {
    right_light = analogRead(light_R_Pin);
    Serial.println(right_light);
    delay(50);
  }
#endif

  if (irrecv.decode(&results)) { //Receive infrared remote control value
    ir_rec = results.value;
    Serial.println(ir_rec, HEX);
    switch (ir_rec) {
      case 0xFF629D: Car_front();   break;   //go front
      case 0xFFA857: Car_back();    break;   //go back
      case 0xFF22DD: Car_left();    break;   //rotate to left
      case 0xFFC23D: Car_right();   break;   //rotate to right
      case 0xFF02FD: Car_Stop();    break;   //stop
      default: break;
    }
    irrecv.resume();
  }
}

#if (USE_FAN_FUNCTION != 1)/****use the ultrasonic sensor*******/

//Control the ultrasonic sensor
float checkdistance() {
  float distance;
  digitalWrite(Trig, LOW);
  delayMicroseconds(2);
  digitalWrite(Trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trig, LOW);
  distance = pulseIn(Echo, HIGH) / 58.20;  //
  delay(10);
  return distance;
}


//the function to control the servo
void procedure(int myangle) {
  int pulsewidth;
  pulsewidth = map(myangle, 0, 180, 500, 2000);  //Calculate the pulse width value, which should be the mapping value from 500 to 2500. Considering the influence of the infrared library, 500~2000 is used here.
  for (int i = 0; i < 5; i++) {
    digitalWrite(servoPin, HIGH);
    delayMicroseconds(pulsewidth);   //The duration of the high level is the pulse width
    digitalWrite(servoPin, LOW);
    delay((20 - pulsewidth / 1000));  //The period is 20ms, so the low level lasts the rest of the time
  }
}

/*****************obstacle avoidance******************/
void Avoid()
{
  flag = 0;
  while (flag == 0)
  {
    a = checkdistance();  //the front distance is set to a
    if (a < 20) {//When the distance in front is less than 20cm
      Car_Stop();  //stop
      delay(500); //delay in 500ms
      procedure(180);  //servo turns left
      delay(500); //delay in 500ms
      a1 = checkdistance();  //the left distance is set to a1
      delay(100); //read value

      procedure(0); //servo turns right
      delay(500); //delay in 500ms
      a2 = checkdistance(); ///the right distance is set to a2
      delay(100); //read value

      procedure(90);  //back to 90°
      delay(500);
      if (a1 > a2) { //When the distance on the left is greater than the distance on the right
        Car_left();  //the robot turns left
        delay(700);  //turn left 700ms
      } else {
        Car_right(); //turn right
        delay(700);
      }
    }
    else { //if the front distance ≥20cm，robot goes front
      Car_front(); //go front
    }
    //receive the Bluetooth value to exit the loop
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S')  //receive S
      {
        flag = 1;  //Set flag to 1 to exit the loop
        Car_Stop();
      }
    }
  }
}

/*******************following***************/
void Follow() {
  flag = 0;
  while (flag == 0) {
    distance = checkdistance();  //set the distance value to distance
    if (distance >= 20 && distance <= 60) //go front
    {
      Car_front();
    }
    else if (distance > 10 && distance < 20)  // stop
    {
      Car_Stop();
    }
    else if (distance <= 10)  //go back
    {
      Car_back();
    }
    else  //stop
    {
      Car_Stop();
    }
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S')
      {
        flag = 1;  //exit the loop
        Car_Stop();
      }
    }
  }
}

/****************light following******************/
void Light_following() {
  flag = 0;
  while (flag == 0) {
    left_light = analogRead(light_L_Pin);
    right_light = analogRead(light_R_Pin);
    if (left_light > 650 && right_light > 650) //go forward
    {
      Car_front();
    }
    else if (left_light > 650 && right_light <= 650)  //turn left
    {
      Car_left();
    }
    else if (left_light <= 650 && right_light > 650) //turn right
    {
      Car_right();
    }
    else  //or else, stop
    {
      Car_Stop();
    }
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S') {
        flag = 1;
        Car_Stop();
      }
    }
  }
}

#else/****use the fan*******/
/***************enable the fan*****************/
void fan_begin() {
  digitalWrite(INA, LOW);
  digitalWrite(INB, HIGH);
}

/***************stop fanning*****************/
void fan_stop() {
  digitalWrite(INA, LOW);
  digitalWrite(INB, LOW);
}

/***************extinguish fire****************/
void Fire() {
  flag = 0;
  while (flag == 0) {
    //Read the analog value of the flame sensor
    flame_valL = analogRead(flame_L);
    flame_valR = analogRead(flame_R);
    if (flame_valL <= 700 || flame_valR <= 700) {
      Car_Stop();
      fan_begin();
    } else {
      fan_stop();
      L_val = digitalRead(L_pin); //Read the value of the left sensor
      M_val = digitalRead(M_pin); //Read the value of the left sensor
      R_val = digitalRead(R_pin); //Read the value of the right sensor

      if (M_val == 1) { //the middle one detects black lines
        if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
          Car_left();
        }
        else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
          Car_right();
        }
        else { //go front
          Car_front();
        }
      }
      else { //the middle one detects black lines
        if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
          Car_left();
        }
        else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
          Car_right();
        }
        else { //otherwise stop
          Car_Stop();
        }
      }
    }
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S') {
        flag = 1;
        Car_Stop();
      }
    }
  }
}

#endif

/***************line tracking*****************/
void Tracking() {
  flag = 0;
  while (flag == 0) {
    L_val = digitalRead(L_pin); //Read the value of the left sensor
    M_val = digitalRead(M_pin); //Read the value of the intermediate sensor
    R_val = digitalRead(R_pin); //Read the value of the sensor on the right
    if (M_val == 1) { //the middle one detects black lines
      if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
        Car_left();
      }
      else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
        Car_right();
      }
      else { //go front
        Car_front();
      }
    }
    else { //the middle sensor doesn’t detect black lines
      if (L_val == 1 && R_val == 0) { //If a black line is detected on the left, but not on the right, turn left
        Car_left();
      }
      else if (L_val == 0 && R_val == 1) { //If a black line is detected on the right, not on the left, turn right
        Car_right();
      }
      else { //otherwise stop
        Car_Stop();
      }
    }
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S') {
        flag = 1;
        Car_Stop();
      }
    }
  }
}

/***************Confinement*****************/
void Confinement() {
  flag = 0;
  while (flag == 0) {
    L_val = digitalRead(L_pin); //Read the value of the left sensor
    M_val = digitalRead(M_pin); //Read the value of the intermediate sensor
    R_val = digitalRead(R_pin); //Read the value of the sensor on the right
    if ( L_val == 0 && M_val == 0 && R_val == 0 ) { //Go front when no black lines are detected      Car_front();
    }
    else { //
      Car_back();
      delay(700);
      Car_left();
      delay(800);
    }
    if (Serial.available())
    {
      ble_val = Serial.read();
      if (ble_val == 'S') {
        flag = 1;
        Car_Stop();
      }
    }
  }
}


/***************dot matrix******************/
//this function is used for the display of dot matrix 
void matrix_display(unsigned char matrix_value[])
{
  IIC_start();  //use the function to start transmitting data
  IIC_send(0xc0);  //select an address
  for (int i = 0; i < 16; i++) //image data have 16 characters
  {
    IIC_send(matrix_value[i]); //data to transmit pictures
  }
  IIC_end();   //end the data transmission of pictures
  IIC_start();
  IIC_send(0x8A);  //show control and select pulse width 4/16
  IIC_end();
}

//the condition that data starts transmitting
void IIC_start()
{
  digitalWrite(SDA_Pin, HIGH);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, LOW);
}

//transmit data
void IIC_send(unsigned char send_data)
{
  for (byte mask = 0x01; mask != 0; mask <<= 1) //each character has 8 digits, which is detected one by one
  {
    if (send_data & mask) { //set high or low levels in light of each bit(0 or 1)
      digitalWrite(SDA_Pin, HIGH);
    } else {
      digitalWrite(SDA_Pin, LOW);
    }
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, HIGH); //pull up the clock pin SCL_Pin to end the transmission of data
    delayMicroseconds(3);
    digitalWrite(SCL_Pin, LOW); //pull down the clock pin SCL_Pin to change signals of SDA 
  }
}

//the sign that transmission of data ends
void IIC_end()
{
  digitalWrite(SCL_Pin, LOW);
  digitalWrite(SDA_Pin, LOW);
  delayMicroseconds(3);
  digitalWrite(SCL_Pin, HIGH);
  delayMicroseconds(3);
  digitalWrite(SDA_Pin, HIGH);
  delayMicroseconds(3);
}

/***************motor runs****************/
void Car_back() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, speeds_R);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, speeds_L);
  matrix_display(back);  //show the image of going back
}

void Car_front() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 255 - speeds_R);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 255 - speeds_L);
  matrix_display(front);  //show the image of going front
}

void Car_left() {
  digitalWrite(MR_Ctrl, HIGH);
  analogWrite(MR_PWM, 255 - speeds_R);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, speeds_L);
  matrix_display(left);  //show the image of turning left
}

void Car_right() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, speeds_R);
  digitalWrite(ML_Ctrl, HIGH);
  analogWrite(ML_PWM, 255 - speeds_L);
  matrix_display(right);  //show the image of turning right
}

void Car_Stop() {
  digitalWrite(MR_Ctrl, LOW);
  analogWrite(MR_PWM, 0);
  digitalWrite(ML_Ctrl, LOW);
  analogWrite(ML_PWM, 0);
  matrix_display(STOP01);  //show the stop image
}
```

#### (5)Test Result

Before uploading the program code, the Bluetooth module needs to be removed, otherwise the code upload will fail.

After uploading the code successfully, open the positioning, and then connect the Bluetooth module.

After uploading the code successfully, plug in the Bluetooth module, after power-on, after the mobile APP is connected to the Bluetooth successfully, we can use the mobile APP to control the tank robot

You can also control the robot with the remote control.

![KS0555-12](media/13656cfee75dc5acbeba18a90a084e159.jpg)

