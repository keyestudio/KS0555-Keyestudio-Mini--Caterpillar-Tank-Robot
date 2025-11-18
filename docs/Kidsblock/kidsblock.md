# 5. Kidsblock Tutorial

## 5.1 Data download

Scratch information contains project ,please click to download for follow-up study.

Data download：[Data download](./Kidsblock.7z)

## 5.2 Software installation of Windows System

1. Download kidsblock:https://wiki.kidsbits.cc/projects/KidsBlock/en/latest/ 

   ![](./media/Ani.gif)

2. software installation

![](./media/An.gif)

3. operating software

First connect the development board to the computer

![](./media/A.gif)

If you encounter the error shown below during the installation of KidsBlock, a reinstallation may resolve the issue. Please refer to the video tutorial and follow the steps provided.

![](./media/c37b8b9849a01212eb02a3ab28ca82d0.jpg)

<iframe width="951" height="536" src="https://www.youtube.com/embed/ZOIm0tTaBeQ" title="KidsBlock Error Resolution" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

## 5.3 Software installation of Mac System

1.Download kidsblock: https://xiazai.keyesrobot.cn/KidsBlock.dmg Desktop 2.0.4.dmg.
![](./media/img-20230302102209-1749281036490-1.png)

2.Click KidsBlock, and  drag KidsBlock Desktop into Applications. 
![](./media/img-20230302102213-1749281036490-2.png)

3.Wait for installing. KidsBlock icon will show up in Launchpad if it is installed successfully.
![](./media/image-20250709122026453.png)

## 5.4 Projects

In this section, we will start from a single sensor to complex experiments to introduce you how the tank robot works.

<span style="color: rgb(255, 76, 65);">Note:</span> (G), marked on each sensor and module, is the negative pole and connected to“G”, ”-”or “GND”on the sensor shield or control board ; (V) is the positive pole and linked with V , VCC, + or 5V on the sensor shield or control board.

### Project 1: LED Blinks

#### (1)Description：

![](./media/image-20250709122631704.png)

![](media/ae87aea86f6c7e427f7adfc0e7c0efe3.png)

For starters and enthusiasts, LED Blink is a fundamental program. LED, the abbreviation of light emitting diodes, consists of Ga, As, P, N chemical compounds and so on. The LED can flash in diverse colors by altering the delay time in the test code. When in control, power on GND and VCC, the LED will be on if S end is in high level; nevertheless, it will go off.

#### **(2)Parameters:**

![](media/0ea85307e1317c25f2a8d92f25319aa8.png)

- Control interface: digital port
- Working voltage: DC 3.3-5V
- Pin spacing: 2.54mm
- LED display color: yellow

#### (3)Components Required:

![](./media/image-20250709122437613.png)

#### **(4)8833 Motor Driver Expansion Board:**

The Keyestudio 8833 motor driver expansion board is compatible with the Arduino UNO development board. Just stack it onto the development board when using it.

![](media/d8696e83ade31f2b7c56cc5911eacbd7.GIF)

#### **(5)Connection Diagram:**

![](media/8ad54723c1d6149952c730217a1861cd.png)

![](./media/image-20250709122655936.png)

<span style="color: rgb(255, 76, 65);">NOTE:</span> LED is connected to D9 port, and remember to install jumper caps onto the shield.

#### **(6)Test Code:**

You can also drag blocks to edit your code, as shown below.

![](media/cc43ba357acb68a4961adb7e5041b6fe.png)

![](media/26b69cd46ad24e1c900c4fb316430353.png)

![](media/21dc3c24da4271aa7ec2bfdac732eeb3.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/ba4723bab640078eccbe1811da138bc3.png)

#### **(7)Test Results:**

Upload the program, LED blinks at the interval of 1s.

#### **(8)Extension Practice:**

We have known how to control the LED, then let's change the frequency of the LED.

We can the frequency of the LED without changing the pin of the LED. Let's modify the code.

You can also drag blocks to edit your code, as shown below.

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/58c76be4c719a885afb500e8f3b80b85.png)

The test result shows that the LED flashes faster. Therefore, we can draw a conclusion that pins and time delaying affect flash frequency.

### Project 2: Adjust LED Brightness

#### **(1)Description:**

In previous lesson, we control LED on and off and make it blink.

In this project, we will control LED’s brightness through PWM simulating breathing effect. Similarly, you can change the step length and delay time in the code so as to demonstrate different breathing effects.

PWM is a means of controlling the analog output via digital means. Digital control is used to generate square waves with different duty cycles (a signal that constantly switches between high and low levels) to control the analog output. 

In general, the input voltages of ports are 0V and 5V. What if the 3V is required? Or a switch among 1V, 3V and 3.5V? We cannot change resistors constantly. For this reason, we resort to PWM. 

![](media/bbcfcb9ae56abb7e80ee587246fc4be9.GIF)

For Arduino digital port voltage outputs, there are only LOW and HIGH levels, which correspond to the voltage outputs of 0V and 5V respectively. You can define LOW as“0”and HIGH as“1’, and let the Arduino output five hundred‘0’or‘1’within 1 second. If output five hundred‘1’, that is 5V; if all of which is‘0’,that is 0V; if output 250 01 pattern, that is 2.5V. 

This process can be likened to showing a movie. The movie we watch are not completely continuous. Actually, it generates 25 pictures per second, which cannot be told by human eyes. Therefore, we mistake it as a continuous process. PWM works in the same way. To output different voltages, we need to control the ratio of 0 and 1. The more‘0’or‘1’ output per unit time, the more accurate the control.

#### **(2)Parameters:**

![](media/0ea85307e1317c25f2a8d92f25319aa8.png)

- Control interface: Digital port 3

- Working voltage: DC 3.3-5V

- Pin spacing: 2.54mm

- LED display color: yellow

#### **(3)Wiring Diagram**

PWM pins of the Arduino are connected to 3, 5, 6, 9, 10 and 11.Keep the pin9 unchanged.

![](media/8ad54723c1d6149952c730217a1861cd.png)

#### **(4)Test Code:**

You can also drag blocks to edit your code, as shown below

![](media/de8ccd3cb6621f0eb89a8514a9fd8452.png)

![](media/659b8a45b8e8d271226d9a25034aedfd.png)

![](media/3157917e305c01f1920cf4d06aff4ff9.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note: </span>Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/aaab53a06684ab078936ee61f9abcbb3.png)


#### **(5)Test Results**

Upload test code successfully, LED gradually changes from bright to dark, like human’s breath, rather than turning on and off immediately.

#### **(6)Extension Practice:**


Let’s modify the value of delay and remain the pin unchanged, then observe how LED changes.

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/2ff0d71c2688d39695b760a1d0f76965.png)

Upload the code to development board, LED flashes more slowly.



### Project 3: Photoresistor

![](media/36e7e08764ed3c61a1c22f86be8c23d9.jpeg)

#### **(1)Description:**

The photosensitive resistor is a special resistor made of a semiconductor material such as a sulfide or selenium, and a moisture-proof resin is also coated with a photoconductive effect. The photosensitive resistance is most sensitive to the ambient light, different illumination strength, and the resistance of the photosensitive resistance is different. We use the photosensitive resistance to design the photosensitive resistor module. 

The module signal is connected to the microcontroller analog port. When the light intensity is stronger, the larger the analog port voltage, that is, the simulation value of the microcontroller is also large; in turn, when the light intensity is weaker, the smaller the analog port voltage, that is, the simulation value of the microcontroller is also small. 

In this way, we can read the corresponding analog value using the photosensitive resistor module, and the intensity of the light in the inductive environment.

![](./media/image-20250709122809574.png)

![](media/0d9daba6454ef099fe1ceb0e6cb56ec4.png)

#### **(2)Parameters:**

- Photosensitive resistance resistance value: 5K Ou-0.5m

- Interface type: simulation port A0, A1

- Working voltage: 3.3V-5V

- Pin spacing: 2.54mm

#### **(3)Connection Diagram:**

What we are going to test next isthe photoresistor module on the leftside ofthe robot.

![](./media/img-20240117091730.png)

The left photoresistoris connected to A1/P3 of the motor drive shield.

![](media/484852a36f52bdbe44bec1b9a8941e44.png)


#### **(4)Test Code:**

You can also drag blocks to edit your code, as shown below.

![](media/f3bb36c8d40016865672399259c7945d.png)

![](media/844a4e322ac2a3609e89d7e412406616.png)

![](media/0df2da585a311e7b3312111533cd96a8.png)

![](media/d4da0bd0c55e3580fa95782d50f6e540.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/f29c7da2238bcc2bc70cb4b2c773b50d.png)

#### **(5)Test Results:**

Upload the code to the development board. Click ![](media/9011f20d83897d7a5936793c4ae142fc.png) to set baud rate 9600.When covering it with your hand, the value gets smaller; if not, the value gets larger.

![](media/53e2fc37ee5bb2c6ec187c309c431c47.png)



#### **(6)Extension Practice:**

The above code just reads the value of the photoresistor. We can make the photosensitive and LED combine to change the LED.How about controlling the LED’s brightness by it?

![](media/88a89f7996fb7f7d037315e57e8bcd33.png)

PWM can change the light brightness, that is, LED should be connected to the PWM of the development board.

Connect the LED to D9 and keep other pins unchanged, then we edit code.

You can also drag blocks to edit your code, as shown below.

![](media/f3bb36c8d40016865672399259c7945d.png)

![](media/0df2da585a311e7b3312111533cd96a8.png)

![](media/b94c3789429c5fed4fd38467cb9792dd.png)

![](media/9ecdfd77e2a69dea5a8df04e7d56a13a.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/b23bcae806e8e27382b162909d30f3c0.png)

Upload the code to the development board, we press the photoresistor to see if the brightness of the LED light has changed.

![](./media/img-20240117091759.png)

### Project 4: Line Tracking Sensor

#### **(1)Description:**

![](media/d37c24e508361ab86b019135ab6950a9.png)

The tracking sensor is actually an infrared sensor. The component used here is the TCRT5000 infrared tube.

Its working principle is to use different reflectivity of infrared light to colors, then convert the strength of the reflected signal into a current signal.

During the process of detection, black is active at HIGH level while white is active at LOW level. The detection height is 0-3 cm.

Keyestudio 3-channel line tracking module has integrated 3 sets of TCRT5000 infrared tube on a single board, which is more convenient for wiring and control.

If the Line Tracking Sensor does not work as expected, you will need to use a screwdriver to adjust its potentiometerto make it more sensitive. When yourfinger is close to the sensor, its on-board LED light turns on, and when yourfinger moves away, its on-board LED light turns off. At thistime, itssensitivity isrelatively good.

![](./media/img-20240117091947.png)

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

You can also drag blocks to edit your code, as shown below.

![](media/5ad9eb9c639b74f8271a55079dcf845c.png)

![](media/b1e2059ec06fcfc9423fa6287eb998ef.png)

![](media/700cb0ecc14cbccd6e367c5098360f08.png)

![](media/271423c55b5f147796beb344eed7e9cf.png)

![](media/1a6838765472e3cd3836abb5202d9ab1.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/5298cdfb6fd7c71df155c969c80450cd.png)

#### **(5)Test Results:**

Upload the code to the development board, open serial monitor to 9600 and check line tracking sensors. And the displayed value is 1(high level) when no signals are received. The value shifts into 0 when the sensor is covered with paper.

![](media/5630032421adf9446d51b770f0e7f8af.png)

#### **(6)Extension Practice:**

We can control an LED with this sensor. The LED is connected to D9. If we cover it , the LED will light up.

![](media/1dd733ed6248d09e9b4d218e41559294.png)

You can also drag blocks to edit your code, as shown below.

![](media/5ad9eb9c639b74f8271a55079dcf845c.png)

![](media/b1e2059ec06fcfc9423fa6287eb998ef.png)

![](media/574854f4d96c40a85e1db549d85f14f4.png)

![](media/9077c0d059f7a4d3277f10ccb4e962fb.png)

![](media/1a6838765472e3cd3836abb5202d9ab1.png)

![](media/80e9c514357c63f4791c72220829b673.png)

![](media/b10e1897e99af2c1ade6c09da6c30dba.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/b5a4b5a04cdee9f79d6e18a5c48cbe48.png)

When an object (such as paper or finger) approaches the line-following sensor, the sensor detects the return signal emitted by itself, and the LED module lights up. When the sensor does not detect any return signal, and the LED module turns off.

![](./media/img-20240117092116.png)

### Project 5: Servo Control

#### **(1)Description:**

Servo motor is a position control rotary actuator. It mainly consists of a housing, a circuit board, a core-less motor, a gear and a position sensor. Its working principle is that the servo receives the signal sent by MCU or receiver and produces a reference signal with a period of 20ms and width of 1.5ms, then compares the acquired DC bias voltage to the voltage of the potentiometer and obtain the voltage difference output.

When the motor speed is constant, the potentiometer is driven to rotate through the cascade reduction gear, which leads that the voltage difference is 0, and the motor stops rotating. Generally, the angle range of servo rotation is 0° --180 °.

The rotation angle of servo motor is controlled by regulating the duty cycle of PWM (Pulse-Width Modulation) signal. The standard cycle of PWM signal is 20ms (50Hz). Theoretically, the width is distributed between 1ms-2ms, but in fact, it's between 0.5ms-2.5ms. The width corresponds the rotation angle from 0° to 180°. But note that for different brand motors, the same signal may have different rotation angles.  

![](media/69be958142b773acdae33eeef12afed7.png)

In general, servo has three lines in brown, red and orange. The brown wire is grounded, the red one is a positive pole line and the orange one is a signal line.

![](media/49467dfa70799401a5a5acc691014aee.png)

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

![](media/5120d0b422a1d0b1f1ba075aa5911c25.png)

Note: The brown, red and orange wire of the servo are respectively attached to Gnd(G), 5v(V) and D10 of the shield. Remember to connect an external power because of the high current of the servo. If not, the development board will be burnt out.

#### **(4)Test Code:**

You can also drag blocks to edit your code, as shown below

![](media/5b04350e0310955ee2ecd48338f556a3.png)

![](media/7dd97d17b785de17e6c9362fa32e2a74.png)

![](media/69724a2063fa25e0f142e1eb48efd40f.png)

![](media/e149b45054fe94196dea220b319cb0bf.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/26e37037daf84d69320b76dd13346cd1.png)

#### **(6)Test Results:**

Upload code, plug in power and servo moves in the range of 0° and 180°.

![](./media/img-20240117092225.png)

### Project 6: Ultrasonic Sensor

#### **(1)Description:**

![](media/0180b169a1c3b228394b43df704fac32.png)

The HC-SR04 ultrasonic sensor uses sonar to determine distance to an object like what bats do. It offers excellent non-contact range detection with high accuracy and stable readings in an easy-to-use package. It comes complete with ultrasonic transmitter and receiver modules.

The HC-SR04 or the ultrasonic sensor is being used in a wide range of electronics projects for creating obstacle detection and distance measuring application as well as various other applications. Here we have brought the simple method to measure the distance with Arduino and ultrasonic sensor and how to use ultrasonic sensor with Arduino.

![](./media/image-20250709133626194.png)

#### **(2)Parameters:**

- Power Supply :+5V DC

- Quiescent Current : \<2mA

- Working Current: 15mA

- Effectual Angle: \<15°

- Ranging Distance : 2cm – 400 cm

- Resolution : 0.3 cm

- Measuring Angle: 30 degree

- Trigger Input Pulse width: 10uS

#### **(3)The principle of ultrasonic sensor:**

As the above picture shown, it is like two eyes. One is transmitting end, the other is receiving end.

The ultrasonic module will emit the ultrasonic waves after triggering a signal. When the ultrasonic waves encounter the object and are reflected back, the module outputs an echo signal, so it can determine the distance of the object from the time difference between the trigger signal and echo signal. 

The t is the time that emitting signal meets obstacle and returns. And the propagation speed of sound in the air is about 343m/s, and distance = speed * time. However, the ultrasonic wave emits and comes back, which is 2 times of distance. Therefore, it needs to be divided by 2, the distance measured by **ultrasonic wave = (speed * time)/2**.

1. Use method and timing chart of ultrasonic module:

2. Setting the delay time of Trig pin of SR04 to 10μs at least, which can trigger it to detect distance.

3. After triggering, the module will automatically send eight 40KHz ultrasonic pulses and detect whether there is a signal return. This step will be completed automatically by the module.

4. If the signal returns, the Echo pin will output a high level, and the duration of the high level is the time from the transmission of the ultrasonic wave to the return.

![](media/image-20230525110337646.png)

Circuit diagram of ultrasonic sensor:

![](media/a25028af84d6c7c94382c2a907101241.jpeg)

#### **(4)Connection Diagram:**

![](media/d8fad040d3ab5abe247d6a8d1e08a13d.png)

<span style="color: rgb(255, 76, 65);">Wiring Note:</span> The VCC pin of the ultrasonic sensor module is connected to the 5v(V) of the Keyestudio 8833 motor drive expansion board, the Trig pin is connected to digital D12, the Echo pin is connected to digital D13, and the Gnd pin is connected to Gnd(G);

#### **(5)Test Code:**

You can also drag blocks to edit your code, as shown below.

![](media/8de1b04be1ba147dd242c66bddeacacc.png)

![](media/128e0b4ee7d3448410d72312175bc6da.png)

![](media/413019f6b04d6d904a438ac6c8589d64.png)

![](media/a6df8829b69f7faed26a73d01da8d50d.png)

![](media/25bf5c6f26cce9db18dfe951e7f166fe.png)

![](media/eca0805413af12957d319c706d3e7cdb.png)

![](media/b6e575b05bdc050e32c9b2e54e61a750.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/569aff5ff2cbd2f3605f217ebb5ed50b.png)

#### **(6)Test Results:**

Upload test code on the development board, open serial monitor and set baud rate to 9600. The detected distance will be displayed, and the unit is cm and inch. Hinder the ultrasonic sensor by hand, the displayed distance value gets smaller.

![](media/4f77acbf5b226e20e3cdd70c0f90602e.png)

#### **(7)Extension Practice:**

We have just measured the distance displayed by the ultrasonic. How about controlling the LED with the measured distance? Let's try it and connect an LED light module to the D9 pin.

![](media/291ac1db0f38418772d11bb1786b7314.png)


You can also drag blocks to edit your code, as shown below

![](media/8de1b04be1ba147dd242c66bddeacacc.png)

![](media/49d5523ae565e1d4dfc3504d1e1748d4.png)

![](media/413019f6b04d6d904a438ac6c8589d64.png)

![](media/8d5fc923f5ded5305f36b1379c1ba38e.png)

![](media/25bf5c6f26cce9db18dfe951e7f166fe.png)

![](media/a6205e42e005084c33c247fe564bdcad.png)

![](media/b6e575b05bdc050e32c9b2e54e61a750.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/065eac0ad9cfa8f07aeb5e648698bdb5.png)

Upload test code to development board and move your hand and close to the ultrasonic sensor, then check if the LED is on.

![](./media/img-20240117092413.png)

### Project 7: IR Reception

#### **(1)Description:**

![](./media/image-20250709133757050.png)

There is no doubt that infrared remote control is ubiquitous in daily life. It is used to control various household appliances, such as TVs, stereos, video recorders and satellite signal receivers. Infrared remote control is composed of infrared transmitting and infrared receiving systems, that is, an infrared remote control and infrared receiving module and a single-chip microcomputer capable of decoding.   

The 38K infrared carrier signal emitted by remote controller is encoded by the encoding chip in the remote controller. It is composed of a section of pilot code, user code, user inverse code, data code, and data inverse code. The time interval of the pulse is used to distinguish whether it is a 0 or 1 signal and the encoding is made up of these 0, 1 signals. 

The user code of the same remote control is unchanged while the data code can distinguish the key.

When the remote control button is pressed, the remote control sends out an infrared carrier signal. When the IR receiver receives the signal, the program will decode the carrier signal and determines which key is pressed. The MCU decodes the received 01 signal, thereby judging what key is pressed by the remote control.

![](media/5ad0f889b39646ecb13664511479efc8.png)

Infrared receiver we use is an infrared receiver module. Mainly composed of an infrared receiver head, which is a device that integrates reception, amplification, and demodulation. Its internal IC has completed demodulation, and can achieve from infrared reception to output and be compatible with TTL signals. Additionally, it is suitable for infrared remote control and infrared data transmission. The infrared receiving module made by the receiver has only three pins, signal line, VCC and GND. It is very convenient to communicate with Arduino and other microcontrollers.

#### **(2)Parameters:**

- Operating Voltage: 3.3-5V（DC）
- Interface: 3PIN
- Output Signal: Digital signal
- Receiving Angle: 90 degrees
- Frequency: 38khz
- Receiving Distance: 10m

Infrared receiver integrated on motor drive board：

![](./media/image-20250709133832650.png)

<span style="color: rgb(255, 76, 65);">Note: </span>Since the IR receiver is integrated in the Keyestudio 8833 motor drive expansion board, no additional wiring is required. The pins of the IR receiver on the Keyestudio 8833 motor drive expansion board are G (GND), V (VCC) and D3.

#### **(4)Test Code:**

You can also drag blocks to edit your code, as shown below

![](media/cfe0841bcc9404c29519ed623195ca6a.png)

![](media/e9da5ac1d1d68eaec6db176ee61326ee.png)

![](media/5a48421831518ea8e0c00be83cf4edf4.png)

![](media/0aa28f86f26d94bdb4c951c994aa854f.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/90978855cddd94c161f9ed02f85b0674.png)

#### **(5)Test Results:**

Upload the code to the development board, click to set the baud rate to 9600, take out the remote control, aim at the infrared receiving sensor to send the signal, you can see the key value of the corresponding key, if the key time is too long, garbled FFFFFFFF will easily appear.

![](media/5c01c594a5a11511cf52466eb5f27e45.png)

Below we have listed out each key value of keyestudio remote control. So you can keep it for reference.

![](media/ebcf0cb2055f7784505f76ceeaef9f47.jpeg)

#### **(6)Extension Practice:**

We just decoded the key values of the IR remote If you control an LED light on and off. We need to connect an LED light module to the D9 pin, and the pin position of the infrared receiver remains unchanged. When the OK button on the remote control is pressed, the LED connected to D9 will light up, and when the OK button is pressed again, the LED will be off.

![](media/e05da7ef9e7b6f63f414f2ca7e3f4ee3.png)


You can also drag blocks to edit your code, as shown below

（1）![](media/cfe0841bcc9404c29519ed623195ca6a.png)

（2）![](media/e9da5ac1d1d68eaec6db176ee61326ee.png)

（3）![](media/ba67c48d67b1c9753fca82964c9dddc7.png)

(4) ![](media/0aa28f86f26d94bdb4c951c994aa854f.png)

（5）![](media/f8b75df8ccea3efe1cd3ea383b0f88f2.png)

（6）![](media/7406d60c93cdba0b13ded27cba718ec7.png)

（7）![](media/d7be3fa06a1456d46472fffd61823c73.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/57149c79243ff22aa00ff2c54dd4f70b.png)

Upload code to development board, press the“OK”key on remote control to make LED on and off.

![](./media/img-20240117092532.png)

### Project 8: Motor Driving and Speed Control

#### **(1)Description:**

There are many ways to drive motors. Our smart car uses the most common solution called L298P. L298P, produced by STMicroelectronics, is an excellent driving chip specially designed for driving high-power motors . It can directly drive DC motors, two-phase and four-phase motors with the driving current reaching 2A. And the motor’s output terminal adopts 8 high-speed Schottky diodes as protection. We have designed an expansion board based on the L298P circuit of which the laminated design can be directly plugged into the UNO R3 board for use reducing the technical difficulties for users in using and driving the motor.

Stack the expansion board on the board, power the BAT , turn the DIP switch to the ON end, and power the expansion board and the UNO R3 board at the same time via external power supply. In order to facilitate wiring, the expansion board is equipped with anti-reverse interface (PH2.0 -2P -3P -4P -5P) and thus it can be directly plug with motors, power supply, and sensors /modules. The Bluetooth interface of the drive expansion board is fully compatible with the Keyestudio HM-10 Bluetooth module. Therefore, we only need to insert the HM-10 Bluetooth module into the corresponding interface when connecting. At the same time, the drive extension board also uses 2.54 pin headers to extend out some available digital ports and analog ports, so that you can continue to add other sensors and carry out expansion experiments.

The expansion board can be connected to 4 DC motors. In the default jumper cap connection mode, the A and A1, B and B1 interface motors are connected in parallel, and their motion pattern is the same. 8 jumper caps can be used to control the rotation direction of the 4 motor interfaces. For example, when the two jumper caps in front of the motor A interface are changed from a horizontal connection to a vertical connection, the rotation direction of the motor A now is opposite to the original rotation direction.

![](media/6c3731f639e113c8f32fe1829f239898.png)

![](media/62ee9578858ecc8e27b824af65fb22bb.png)

#### **(2)Parameters:**

-   Logic part input voltage: DC 5V

-   Driving part input voltage: DC 7-12V

-   Logic part working current: ≤36mA

-   Driving part working current: ≤ 2A

-   Maximum dissipation power: 25W (T=75℃)

-   Control signal input level:

    High level: 2.3V ≤ Vin ≤ 5V

    Low level: 0V ≤ Vin ≤ 1.5V

-   Working temperature: -25℃～＋130℃

#### **(3)Drive the robot to move:**

The direction pin of A motor is D2, the speed control pin is D5; the direction pin of B motor is in D4 and the speed control pin is D6,

According to the table below, we can know how to control the movement of the robot by controlling the rotation of two motors through the digital ports and PWM ports . Among them, the range of PWM value is 0-255. The larger the value is, the faster the motor rotates.

|   Function   |  D4  | D6（PWM） | Motor （left）B |  D2  | D5（PWM） | Motor（Right）A |
| :----------: | :--: | :-------: | :-------------: | :--: | :-------: | :-------------: |
| Move Forward | HIGH |     0     |   Rotate Left   | HIGH |     0     |   Rotate Left   |
|   Go Back    | LOW  |    255    |  Rotate Right   | LOW  |    255    |  Rotate Right   |
| Rotate Left  | LOW  |    255    |  Rotate Right   | HIGH |    100    |   Rotate Left   |
| Rotate Right | HIGH |    100    |   Rotate Left   | LOW  |    255    |  Rotate Right   |
|     Stop     | LOW  |     0     |      Stop       | LOW  |     0     |      Stop       |

#### **(4)Connection Diagram:**

![](./media/image-20250709134029403.png)

<span style="color: rgb(255, 76, 65);">Note:</span>

The 4-pinconnector is marked with A, A1, B1 and B. The right rear motor is connected to B of the 8833 board and left front one is connected to A port.

#### **(5)Test Code:**

You can also drag blocks to edit your code, as shown below.

（1）![](media/7cbc4d14c2e2dac956f2e9f145f01f31.png)

（2）![](media/0067d367772d4e3005bfc097ba3b59b0.png)

（3）![](media/f0c505e8268454c7996b755f97c6322b.png)

（4）![](media/b7215c8a4997a188947e80fdee1a8cd9.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note: </span>Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/332229f3dc01a38de898367f52531b28.png)


#### **(6)Test Results:**

After wiring according to the diagram, uploading the test code and powering it up.

![](./media/img-20240117092625.png)

the smart car moves forward for 2s, goes back for 2s, turns left for 2s, turns right for 2s and stops for 2s.

### Project 9: 8*16 Facial Expression LED Dot Matrix

#### **(1)Description:**

Won’t it be fun if a expression board is added to the robot? And the Keyestudio 8*16 LED dot matrix can do the trick. With the help of it, you could design facial expressions, images, patterns and other displays by yourselves.

The 8*16 LED board comes with 128 LEDs. The data of the microprocessor (Arduino) communicates with the AiP1640 through a two-wire bus interface. Therefore, it can control the on and off of 128 LEDs on the module, so as to make the dot matrix on the module to display the pattern you need. A HX-2.54 4Pin cable is provided for your convenience of wiring.

#### **(2)Parameters:**

-   Working voltage: DC 3.3-5V

-   Power loss: 400mW

-   Oscillation frequency: 450KHz

-   Drive current: 200mA

-   Working temperature: -40\~80℃

-   Communication mode: two-wire bus

#### **(3)Knowledge:**

**Circuit of the 8\*16 LED dot matrix**

![](media/edf6c77d05904eebbaa89d557e9e9c1a.png)

**Principle of the 8\*16 LED dot matrix**

How to control each LED of the 8\*16 dot matrix? It is known that each byte has 8 bits and each bit is 0 or 1. when it is 0, LED is off while when it is 1 LED is on. One byte can control one column of the LED,and naturally 16 bytes can control 16 columns of LEDs, that’s the 8\*16 dot matrix.

**Pins description and communication protocol**

The data of the microprocessor (Arduino) communicates with the AiP1640 through a two-wire bus cable.

The communication protocol diagram is as follows (SCLK) is SCL, (DIN) is SDA.

![](media/ea2bab37f23c09453c680590b84653d6.png)

①The starting condition for data input: SCL is high level and SDA changes from high to low.

②For data command setting, there are methods as shown in the figure below.

In our sample program, select the way to **add 1 to the address automatically**, the binary value is 0100 0000 and the corresponding hexadecimal value is 0x40.

![](media/image-20230907161100692.png)

③For address command setting, the address can be selected as shown below.

The first 00H is selected in our sample program, and the binary number 1100 0000 corresponds to the hexadecimal 0xc0.

![](media/image-20230907161152467.png)


④The requirement for data input is that when SCL is at high level when inputting data, the signal on SDA must remain unchanged. Only when the clock signal on SCL is at low level, can the signal on SDA be changed. The input of data is the low bit first, and the high bit later.

⑤The condition for the end of data transmission is that when SCL is at low level, SDA at low level and SCL at high level, the level of SDA becomes high.

⑥Display control, set different pulse width, pulse width can be selected as shown in the figure below.

In the example, the pulse width is 4/16, and the hexadecimal corresponding to 1000 1010 is 0x8A.

![](media/image-20230907161220995.png)

**Instructions for the use of modulus tool**

The dot matrix tool uses the online version, and the link is: <http://dotmatrixtool.com/#>

①Enter the link and the page appears as shown below

![](media/354693b5679a2615c62e99b7025d6355.png)

②The dot matrix is 8\*16, so adjust the height to 8 and width to 16, as shown in the figure below.

![](media/5f0278d66ade370e871b447d360d6e7b.png)

③Generate hexadecimal data from the pattern.

As shown in the figure below, press the left mouse button to select, right click to cancel; draw the pattern you want, click Generate, and the hexadecimal data we need will be generated.

![](media/586e88bf13c61b0918046437ed7f6796.png)

#### **(4)Connection Diagram:**

![](media/cec50fec4a335b6922e4c6694a133bc1.png)

The GND, VCC, SDA, and SCL of the 8x16 LED light board are respectively connected to the G(GND), V (VCC), A4 and A5 of the expansion board for two-wire serial communication.

(<span style="color: rgb(255, 76, 65);">Note:</span> though it is connected with the IIC pin of Arduino, this module is not for IIC communication. And the IO port here is to simulate I2C communication and can be connected with any two pins )

#### **(5)Test Code:**


You can also drag blocks to edit your code, as shown below

![](media/e346413e7f38f5f6368dd8262f173514.png)

![](media/8ecfff600093779602b37d2202493057.png)

![](media/0f0df06e3ed2adbbe3ffaa20dd3fa0a5.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/75e6f65c9a299868d37544ac42c54f66.png)

#### **(6)Test Results:**

After uploading the test code successfully, wire up, turn the DIP switch to the ON end and power up, a smile-shaped pattern shows on the dot matrix.

![](media/0fd4831db288e04e75828346ea66a3f5.png)

#### **(7)Extension Practice:**

We use the modulus tool we just learned, [http://dotmatrixtool.com/#](http://dotmatrixtool.com/#), to make the dot matrix display the pattern start , go forward, and stop and then clear the pattern. The time interval is 2000 ms.

![](media/31ab1346c58438ca95c990e4ff963c0d.png)

Block to show smile face![](media/1702a82ce685e3e7da7b136cbc51e718.png)

Code to show expression![](media/bae6801afc8fbcc0e7a70c243559c266.png)

Block to show heart![](media/dcaa414f16d10068d2c3627959141da6.png)

Code for moving forward![](media/8fc218e6b35826aa31f5e00f61414651.png)

Block for going back![](media/043abae4540c578f93772ed9b6648e60.png)

Block for turning left![](media/7b3d80a76228ee5b23555af17269a02d.png)

Block for turning right![](media/5a84b3538a62367a8f35cc59071c0bda.png)

Block for stopping![](media/733bd1f96e1c9d116033a317cb507fac.png)

Block for clearing up![](media/06d37680acd61c9c5c4113c78c985eca.png)

You can also drag blocks to edit your code, as shown below.

（1）![](media/e346413e7f38f5f6368dd8262f173514.png)

（2）![](media/840217b5879f1fce9e36566dc76914a4.png)

（3）![](media/e72e75122897b0ef930196f762080623.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/dee30ed46775feb634d4e8e4ec0a189a.png)

Upload the code to the development board, the 8\*16 board will show following patters.

![](./media/image-20250709134319784.png)

![](./media/image-20250709134332835.png)

![](media/dce75583e8bf4bc4377364bf8ed3aa99.png)

### Project 10: Light-following Tank


#### **(1)Description:**

In previous projects, we introduced in detail the use of various sensors, modules, and expansion boards on the smart car. Now let’s move to the projects of the smart car . The light-following smart cars, as the name suggests, is a smart car that can follow the light.

We can combine the knowledge from projects photoresistor and motor drive to make a light-seeking smart car. In the project, we use two photoresistor modules to detect the light intensity on the left and right sides of the smart car, read the corresponding analog values, and then control the rotation of the two motors based on these two data so as,to control the movements of the smart car.

The specific logic of the light-following smart car is shown as below.

![image-20230525113331422](media/image-20230525113331422.png)

#### **(2)Flow chart:**

![](media/wps117.png)

#### **(3)Connection Diagram:**

![](media/d8132c5a3f88a1016d27e5fa9e5fda92.png)

<span style="color: rgb(255, 76, 65);">Note: </span>The pin "G", "V" and S of the left photoresistor module are connected to G (GND), V (VCC), A1 respectively;

The pin "G", "V" and S of the right photoresistor module are connected to the G (GND), V (VCC), and A2 respectively.

The 4pin cable is marked with A, A1, B1 and B. The right rear motor is connected to B port of the 8833 motor driver expansion board and the left front motor is connected to A port of the 8833 motor driver expansion board.

#### **(4)Test Code:**


You can also drag blocks to edit your code, as shown below.

（1）![](media/9352e6447f9648efddc7d5a748618332.png)

（2）![](media/1d99d71f5fe52dd2145cb11d75cabb21.png)

（3）![](media/5004e509325dffb32c05afe25abedfc9.png)

（4）![](media/6c6f0492f657c4c78a0497bb86519561.png)

（5）![](media/b8fc70fa8b3f335dcdf0c8ad9ed998c6.png)

（6）![](media/9eb0e93fbd43aa24f2ce656191f7cd79.png)

(7) ![](media/9f023e6f571e597e661a8d71a7f803cb.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> The threshold 650 in the code can be adjusted appropriately according to the specific light intensity.

Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/6300174b85f63c05dbdcb3b77188f9dc.png)


#### **(5)Test Results:**

After uploading the test code successfully, wire up, turn DIP switch to the ON end and power on, the smart car follows the light to move.

![](./media/img-20240117093758.png)

### Project 11: Ultrasonic Sound-following Tank


#### **(1)Description:**

In the previous lesson, we learned about the light-following smart car. And in this lesson, we can combine the knowledge to make an ultrasonic sound-following car. In the project, we use ultrasonic sensors to detect the distance between the car and the obstacle in front, and then control the rotation of the two motors based on this data so as to control the movements of the smart car.

The specific logic of the ultrasonic sound- following smart car is shown in the table blow:

|                        Detection                        |              Setting              |
| :-----------------------------------------------------: | :-------------------------------: |
| The distance(cm) between the car and the obstacle front | Set the angle of the servo to 90° |
|                      **Condition**                      |           **Movement**            |
|               distance≥20 and distance≤50               |             Go front              |
|            10＜distance＜20<br/>distance＞50            |               Stop                |
|                       distance≤10                       |              go back              |

#### **(2)Flow chart:**

![](media/wps118.png)

#### **(3)Connection Diagram:**

![](media/c5c842ac7e834b9b24ab06b3ce3d02ac.png)

<span style="color: rgb(255, 76, 65);">Note:</span> The wiring of the ultrasonic sensor, the servo and the motor is the same as the previous project experiment. The GND, VCC, SDA, and SCL of the 8x16 LED panel are respectively connected to G (GND), V (VCC), A4, and A5 on the expansion board.

#### **(4)Test Code:**

You can also drag blocks to edit your code, as shown below.

（1）![](media/6eb13569aaa7bf560f62049df28b51db.png)

（2）![](media/f6fb93211f786d023eb77eb210eae454.png)

（3）![](media/5c5994681a5e494ba5ae4ce3c2d1ddac.png)

（4）![](media/904732a3bfdb65a5ef0207d40b3abcc6.png)

（5）![](media/5aa8407b0ed182b18f227c8e1ec9a0b4.png)

（6）![](media/595ee7b491d37a90afe34cec1a429783.png)

(7) ![](media/4b40151c7482ff9371570978b8ef9c77.png)

(8) ![](media/ac663c190f6b0fe5e9861b29b94765b5.png)

(9) ![](media/72f725bac7ba927b55e3a9eea3b1a660.png)

(10) ![](media/fcad8e3c5bf2690dfc7ed07200f72401.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/b895ca60e3249e09d4c15c356c60099a.png)


#### **(5)Test Result:**

Upload the code, power up and turn the DIP switch to ON. The servo will rotate 90°, the 8X16 LED panel will show ![](media/fdd4ae50b3372cc9c4ef27f6bddda387.png) and the car follows the obstacle to move.

![](./media/img-20240117093900.png)


### Project 12: Ultrasonic Obstacle Avoidance Tank

#### **(1)Description:**

In the previous project, we made an ultrasonic sound-following smart car. In fact, using the same components and the same wiring method, we only need to change the test code to turn it into an ultrasonic obstacle avoidance smart car. This smart car can move with the movement of the human hands. 

We use ultrasonic sensors to detect the distance between the smart car and the obstacle in front, and then control the rotation of the two motors based on this data so as to control the movements of the smart car.

|                          Detection                           |         |
| :----------------------------------------------------------: | :-----: |
| Distance measured by the ultrasonic senor between the car and the obstacle in front <br />（set the angle of the servo to 90°） | a (cm)  |
| Distance measured by the ultrasonic senor between the car and the obstacle on the right <br />（set the angle of the servo to 0°） | a2 (cm) |
| Distance measured by the ultrasonic senor between the car and the obstacle on the left <br />（set the angle of the servo to 180°） | a1 (cm) |

**Setting: set the starting angle of the servo to 90°**

| Condition 1 |        Condition 2         |      Condition 3       | Movement                                                     |
| :---------: | :------------------------: | :--------------------: | :----------------------------------------------------------- |
|    a＜20    |                            |                        | Stop for 500ms；set the angle of the servo to 180°，read a1，delay in 100ms；set the angle of the servo to 0°，read a2，delay in 0.1s. |
|             | a1＜50<br />or<br />a2＜50 | **Compare a1 with a2** |                                                              |
|             |                            |         a1＞a2         | Set the angle of the servo to 90°，rotate left for 700ms（set PWM to 255），and move forward（set PWM to 200）. |
|             |                            |         a1＜a2         | Set the angle of the servo to 90°，rotate right for 700ms（set PWM to 255），and move forward（set PWM to 200）. |
|             | a1≥50<br />and<br />a2≥50  |         Random         | set the angle of the servo to 90°，rotate left for 500ms（set PWM to 255），and move forward（set PWM to 200）.<br /><br />set the angle of the servo to 90°，rotate right for 500ms（set PWM to 255），and move forward（set PWM to 200）. |
|    a≥20     |                            |                        | move forward（set PWM to 100）                               |

#### **(2)Flow chart:**

![](media/wps119.png)

#### **(3)Connection Diagram:**

![](media/c5c842ac7e834b9b24ab06b3ce3d02ac.png)

(<span style="color: rgb(255, 76, 65);">Note:</span> the brown, red and orange wires of the servo are respectively connected to G (GND), V（5V）and D10 of the expansion board；and for the ultrasonic sensor, the VCC pin is connected to the 5v (V) ,the Trig pin to digital 12 (S), the Echo pin to digital 13 (S), and the Gnd pin to Gnd (G); the same as last project.）

#### **(4)Test Code:**


You can also drag blocks to edit your code, as shown below.![](media/6eb13569aaa7bf560f62049df28b51db.png)

（2）![](media/5dcbd405806b8e341505d7316246dbdd.png)

（3）![](media/996c8d4e5dd9620757dfb097329e7d5d.png)

（4）![](media/5c5994681a5e494ba5ae4ce3c2d1ddac.png)

（5）![](media/904732a3bfdb65a5ef0207d40b3abcc6.png)

（6）![](media/5aa8407b0ed182b18f227c8e1ec9a0b4.png)

（7）![](media/595ee7b491d37a90afe34cec1a429783.png)

（8）![](media/4b40151c7482ff9371570978b8ef9c77.png)

（9）![](media/ac663c190f6b0fe5e9861b29b94765b5.png)

（10）![](media/72f725bac7ba927b55e3a9eea3b1a660.png)

（11）![](media/fcad8e3c5bf2690dfc7ed07200f72401.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/4360f9642a8c6b2488767c079d481482.png)

#### **(5)Test Results:**

After upload the test code successfully, wire up, turn the DIP switch to the ON end, and power up, the smart car moves forward and automatically avoids obstacles.

![](./media/img-20240117093950.png)


### Project 13: Move-in-Confined-Space Tank


#### **(1)Description:**

The ultrasonic sound-following and obstacle avoidance functions of the smart car have been introduced in previous projects. Here we intend to combine the knowledge in the previous courses to confine the smart car to move in a certain space. In the experiment, we use the line-tracking sensor to detect whether there is a black line around the smart car, and then control the rotation of the two motors according to the detection results, so as to lock the smart car in a circle drawn in black line.

The specific logic of the line-tracking smart car is shown in the table blow:

![](media/image-20230525114604923.png)

|                         Condition                         |                         Movement                          |
| :-------------------------------------------------------: | :-------------------------------------------------------: |
| If one of three line tracking sensors detects black lines | Go back（set PWM to 150）Then turn left（set PWM to 150） |
|             None of them detects black lines              |               Go forward（set PWM to 100）                |

#### **(2)Flow chart**

![](media/b3c30f92cb78d4c2a4a8bd746aef24e1.png)

#### **(3)Connection Diagram:**

![](media/34c48ca77307761e5ce0b1a1fb202201.png)

#### **(4)Test Code:**

You can also drag blocks to edit your code, as shown below

（1）![](media/6eb13569aaa7bf560f62049df28b51db.png)

（2）![](media/e48288f5b46e3e1c78489cb9d9b86333.png)

（3）![](media/801d176b32bc87904b8545ecf80874fc.png)

（4）![](media/3af2546fe93dc84ed3c3002543ae8069.png)

（5）![](media/904732a3bfdb65a5ef0207d40b3abcc6.png)

（6）![](media/5aa8407b0ed182b18f227c8e1ec9a0b4.png)

（7）![](media/595ee7b491d37a90afe34cec1a429783.png)

（8）![](media/4b40151c7482ff9371570978b8ef9c77.png)

（9）![](media/b919eb2b47ee87ae36e21099e754e8a1.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/e656126c11bb8ebe7b6b0df8f22e7a79.png)

#### **(5)Test Results:**

After upload the test code successfully and power up, the smart car moves in a circle drawn in black line.

![](./media/img-20240117094034.png)

### Project 14:Line-tracking Tank


#### **(1)Description:**

The previous project has introduced how to confine the smart car to move in a certain space. In this project, we could use the knowledge learned before to make it a line-tracking smart car. In the experiment, we use the line-tracking sensor to detect whether there is a black line around the smart car, and then control the rotation of the two motors according to the detection results, so as to make the smart car to move along the black line.

The specific logic of the line-tracking smart car is shown in the table blow:

|               Sensor               |                          Detection                           |
| :--------------------------------: | :----------------------------------------------------------: |
| Line-tracking sensor in the middle | Black line detected: in high level<br />White line detected: in low level |
|  Line-tracking sensor on the left  | Black line detected: in high level<br />White line detected: in low level |
| Line-tracking sensor on the right  | Black line detected: in high level<br />White line detected: in low level |

|                         Condition 1                          |                         Condition 2                          |   Movement   |
| :----------------------------------------------------------: | :----------------------------------------------------------: | :----------: |
| Line-tracking sensor <br />in the middle <br />detects the black line | Line-tracking sensor on the left detects the black line<br />the one on the right detects white lines | Rotate left  |
| Line-tracking sensor <br />in the middle <br />detects the black line | Line-tracking sensor on the left detects white lines<br />the one on the right detects the black line | Rotate right |
| Line-tracking sensor <br />in the middle <br />detects the black line | Both the left and right  line-tracking sensors detect white lines<br />Both the left and right line-tracking sensors detect  the black line | Move forward |
| Line-tracking sensor<br />in the middle <br />detects white lines | Line-tracking sensor on the left detects the black line<br />the one on the right detects white lines | Rotate left  |
| Line-tracking sensor<br />in the middle <br />detects white lines | Line-tracking sensor on the left detects white lines<br />the one on the right detects the black line | Rotate right |
| Line-tracking sensor<br />in the middle <br />detects white lines | Both the left and right  line-tracking sensors detect white lines<br />Both the left and right line-tracking sensors detect  the black line |     Stop     |

#### **(2)Flow chart:**

![](media/wps11.png)

#### **(3)Connection Diagram:**

![](media/34c48ca77307761e5ce0b1a1fb202201.png)

#### **(4)Test Code:**

You can also drag blocks to edit your code, as shown below

（1）![](media/6eb13569aaa7bf560f62049df28b51db.png)

（2）![](media/2e41c11455f595e98bd2f0f27bf4a291.png)

（3）![](media/3af2546fe93dc84ed3c3002543ae8069.png)

（4）![](media/904732a3bfdb65a5ef0207d40b3abcc6.png)

（5）![](media/5aa8407b0ed182b18f227c8e1ec9a0b4.png)

（6）![](media/595ee7b491d37a90afe34cec1a429783.png)

（7）![](media/4b40151c7482ff9371570978b8ef9c77.png)

（8）![](media/fec93c7b8b089de709fd50575931519c.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/294ae4c01072e34b58a334912c90083a.png)


#### **(5)Test Results:**

After upload the test code successfully and power on, the smart car moves along the black line.

![](./media/img-20240117094129.png)

### Project 15: IR Remote Control Tank

![](./media/image-20250709134800790.png)

#### **(1)Description:**

Infrared remote control is one of the most common remote control found applications in electric motors, electric fans, and many other household appliances. In this project,we use the knowledge we learned before to make an infrared remote control smart car.

In the 9th lesson, we have tested the corresponding key value of each key of the infrared remote control. In the project, we can set the code (key value) to make the corresponding button to control the movements of the smart car, and display the movement patterns on the 8X16 LED dot matrix.

The specific logic of the line-tracking smart car is shown in the table:

|                 Ultrasonic key                  | Key value | Instructions from keys                                       |
| :---------------------------------------------: | :-------: | ------------------------------------------------------------ |
| ![](media/b11dc5ffa6cccebc6088e5d557d76daf.png) |  FF629D   | Move forward（set PWM to 200）<br />display the pattern of going forward |
| ![](media/ae8110034aacb083151cfd882ee599ba.png) |  FFA857   | Go back（set PWM to 200）<br />display the pattern of going back |
| ![](media/bce9cba2c6d2465fbcce570ad4210eba.png) |  FF22DD   | Turn left<br />display the pattern“STOP”                     |
| ![](media/ad907a618af86f30d52986bbbd57ba76.png) |  FFC23D   | Turn right<br />display the pattern of turning left          |
| ![](media/9716a4ed61a4064d2f47a7b73eccaf87.png) |  FF02FD   | Stop<br />display the pattern“STOP”                          |

**Initial setting: 8X16 LED dot matrix shows the pattern“![](media/dc59c5fcb4fcf6af4d4a5ebb14b7a919.png)”**



#### **(2)Flow chart:**

![](media/wps121.png)

#### **(3)Connection Diagram:**

![](media/54527fe245b218dd22bdff5dafd4805d.png)

<span style="color: rgb(255, 76, 65);">Note:</span>

GND, VCC, SDA and SCL of the 8x16 LED panel are connected to G（GND), V（VCC). A4 and A5 of the expansion board.

Since the 8833 board integrates the IR receiver, you don’t need to wire it up. The pins of the IR receiver are G（GND), V（VCC) and D3.

#### **(4)Test Code:**

You can edit blocks to build up your code

（1）![](media/949a82a4516f57a5e65fdbbd944dc860.png)

（2）![](media/1f98f44522f0d08b8d41a81109f91bee.png)

(3) ![](media/a9042e77ebe3009fbb7653bef3429b66.png)

（4）![](media/53c2dbc1af206a888f95f58b31000ab2.png)

（5）![](media/863962ed6e2fd7112e1b59265320c7f4.png)

（6）![](media/51e30aa2aca3a7da67ee4f0f81c7dad1.png)

（7）![](media/ce8358153ae79fb76937f3c22c935ae9.png)

（8）![](media/7ab62148fa2a23259b8039475978d8fc.png)

（9）![](media/3af2546fe93dc84ed3c3002543ae8069.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note: </span>Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/fae6c22640ced038daca9cb6721ab95e.png)

#### **(5)Test Results:**

After upload the test code successfully and power up, the smart car can be controlled to move by IR remote control and the 8\*16 shows the corresponding patterns of its movements.

![](./media/img-20240117094223.png)

### Project 16: Bluetooth Remote Control

![](./media/image-20250709134858245.png)

#### **(1)Description:**

In the last several decades, Bluetooth has become the most popular wireless communication module for it is easy to use and has found wide applications in most devices powered by batteries.

In order to adjust with the time and reality and need the needs of customers, Bluetooth has been upgraded several times. In recent years, it embraces lots of transformations in terms of data transfer rate, power consumption of wearable devices and IoT devices, and security systems and others. Here, we plan to learn about DX-BT24 with Arduino board.

#### **(2)Parameter:**

- Bluetooth protocol: Bluetooth Specification V5.1 BLE
- Working distance: In an open environment, achieve 40m ultra-long distance
- Communication Operating frequency: 2.4GHz ISM band
- Communication interface: UART
- Bluetooth certification: in line with FCC CE ROHS REACH certification standards
- Serial port parameters: 9600, 8 data bits, 1 stop bit, invalid bit, no flow control
- Power: 5V DC
- Operating temperature: –10 to +65 degrees Celsius


#### **(3)Application:**

The DX-BT24 module also supports the BT5.1 BLE protocol, which can be directly connected to iOS devices with BLE Bluetooth function, and supports resident running of background programs. Mainly used in the field of short-distance wireless data transmission. Avoid cumbersome cable connections and can directly replace serial cables. Successful application areas of BT24 modules:

※ Bluetooth wireless data transmission; 

※ Mobile phone, computer peripheral equipment; 

※ Handheld POS equipment; 

※ Wireless data transmission of medical equipment;

※ Smart home control; 

※ Bluetooth printer; 

※ Bluetooth remote control toys; 

※ Shared bicycles;

#### **(4)Pins description:**

![](media/cd97cf79ff5cdd5bbd78f4cc960d38e5.png)

①STATE：state pin

②RX：reception pin

③TX：sending pin

④GND：grounded

⑤VCC：power pin

⑥EN：enable pin

Connect Bluetooth to the development board

| Uno  | BT24 |
| :--: | :--: |
|  TX  |  RX  |
|  RX  |  TX  |
| VCC  |  5V  |
| GND  | GND  |

#### **(5)Connection Diagram:**

![](media/63b96e5b26ee18337fb6e0dced5bbbe3.png)

#### **(6)Download APP:**

##### **For IOS system**

1\. Open App Store.

2\. Search <span style="color: rgb(61, 167, 66);">KeyesRobot</span> in the Apple Store and click download.

![](./media/img-20240111141301.png)

3\. After the app is installed, you will see the following icon on your phone desktop.

![](./media/img-20240111141412.png)

**How to connect iOS Phone to Bluetooth module:**

1\. Turn on the Bluetooth and location services on phone through settings.

![](./media/img-20240111141943.png)

2\. Allow KeyesRobot APP to access Bluetooth through settings.

![](./media/img-20240111142052.png)

3\. Click to open KeyesRobot App.

![](./media/img-20240111142140.png)

4\. KeyesRobot App is a universal APP, which is applied to multiple keyestudio robots. If the interface does not display "TANK ROBOT", you can click the left and right buttons to find "TANK ROBOT".

5\. Click the <span style="color: rgb(61, 167, 66);">Bluetooth button</span>![](./media/img-20240111142336.png) in the upper right corner to scan the bluetooth

![](./media/img-20240111142415.png)

6\. You will see a Bluetooth named <span style="color: rgb(0, 209, 0);">**BT24**</span>, click the <span style="color: rgb(255, 169, 0);">Connect</span> button.

![](./media/img-20240111142536.png)

7\. If the onboard LED on the Bluetooth module stops flashing and stays on, it means your phone is successfully connected to the Bluetooth module.

![](./media/img-20240111142702.png)


##### **For Android System**

1\. Search <span style="color: rgb(61, 167, 66);">**KeyesRobot**</span> in Google Play, or open the following link to download and install the app. 

[https://play.google.com/store/apps/details?id=com.keyestudio.keyestudio](https://play.google.com/store/apps/details?id=com.keyestudio.keyestudio)

![](./media/img-20240111143312.png)

2\. Turn on the Bluetooth and the location services of the mobile phone

![](./media/img-20240111143354.png)

3\. Find the KeyesRobot Bluetooth app from settings, click on the permission options of the app, and
enable Location and nearby device permissions.(<span style="color: rgb(255, 76, 65);">Note:</span> Some mobile phones do not have nearby device permissions function.)

![](./media/img-20240111143451.png)

4\. Click to open KeyesRobot App.

![](./media/img-20240111143529.png)

5\. KeyesRobot App is a universal APP, which is applied to multiple keyestudio robots. If the interface does not display "TANK ROBOT", you can click the left and right buttons to find "TANK ROBOT".

6\. Click the <span style="color: rgb(61, 167, 66);">Bluetooth button</span>![](./media/img-20240111142336.png) in the upper right corner to scan the bluetooth

![](./media/img-20240111142415.png)

7\. You will see a Bluetooth named <span style="color: rgb(0, 209, 0);">**BT24**</span>, click the <span style="color: rgb(255, 169, 0);">Connect</span> button.![](./media/img-20240111143910.png)

8\. When your phone is successfully connected to the Bluetooth module, the onboard LED on the Bluetooth module will stop flashing and stay on.

![](./media/img-20240111144004.png)

![](./media/img-20240111142702.png)


#### **(7)BT Test Code:**

You can also drag blocks to edit your code, as shown below

（1）![](media/2a66a7e8b37c68ddc51cfdb3aff53ac2.png)

（2）![](media/96f38f571f4ecae87e8bd6175ac0ca2d.png)

（3）![](media/044ea8429f8bffd438d70f8a7976b663.png)

（4）![](media/19a90ffb7565966f7d40462abed876a7.png)

（5）![](media/c8228c5040a43ae322612b312c995ac3.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/4766ada3bf48bb35522f292d9352bb78.png)


Upload the code to the development board, then plug in the Bluetooth module, and then connected the mobile phone to the Bluetooth module.

After the mobile phone is successfully connected to the Bluetooth module, click to open the Bluetooth APP and click the <span style="color: rgb(0, 252, 255);">Select</span> button on the <span style="color: rgb(0, 252, 255);">homepage</span>.

![](./media/img-20240111144744.png)

The main interface of the Bluetooth app is shown in the figure below.

![](./media/img-20240111144859.png)

Click ![Img](./media/img-20240111171312.png)and set the baud rate to 9600. Click the icon on the APP interface and the serial monitor will display command sent by button.

![](media/f5004f5334fb4885ac0096f99e4133f9.png)

<br>
<br>
<span style="color: rgb(255, 76, 65);">**Note: The APP connection method is the same as below.**</span>
<br>
<br>


#### **(8)Extension Practice:**

In the above project, Bluetooth receives the signal sent by the mobile phone and displays it on the serial port of the development board. Here we use the command sent by the mobile phone to turn on or off an LED. Looking at the wiring diagram, an LED is connected to the D9 pin,

![](media/549c10efcf47f29f8f6355d8cd0497cc.png)


You can also drag blocks to edit your code, as shown below

（1）![](media/2a66a7e8b37c68ddc51cfdb3aff53ac2.png)

（2）![](media/96f38f571f4ecae87e8bd6175ac0ca2d.png)

（3）![](media/044ea8429f8bffd438d70f8a7976b663.png)

（4）![](media/aa78663af261ff1d9bc8ffa6ad7a65bc.png)

(5）![](media/c8228c5040a43ae322612b312c995ac3.png)

（6）![](media/4164bcf66d3d2415f43a0efcd1ce4243.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/91fd9d6f85e291fe90a63e5095ed7f44.png)

After the code above is successfully uploaded. Click ![](media/d5e59839bafc63f8b35c78c60573d1fc.png) to control the LED.

![](./media/img-20240117094418.png)


After you finish the BT project, remove it.

### Project 17: Bluetooth Control Tank

#### **(1)Description:**

We have learned the basic knowledge of Bluetooth in the previous project . In this lesson, we will use Bluetooth to control the smart car. Since it involves Bluetooth, a sending end and a receiving end are needed. In the project, we use the mobile phone as the sender (master), and the smart car connected with the HM-10 Bluetooth module (slave) as the receiver.

We have learned earlier that sending a bit can control LEDs. And the principle of controlling this robot car is the same.

In order to better control the intelligent tank robot, we specially made an APP. In this lesson, we will read all the key value on this APP through code, and then introduce the exclusive APP of our tank robot.

#### **(2)Key Function on the APP:**

The following table illustrates the functions of corresponding keys:

|                      Keys                       |                                                |                          Functions                           |
| :---------------------------------------------: | :--------------------------------------------: | :----------------------------------------------------------: |
| ![](media/1118dccd714c7988a51cf2dde58627e3.png) |                                                | Pair and connect HM-10 Bluetooth module;click again to disconnect |
| ![](media/b23e65f788685576275cc16bf0b679cc.png) |                                                |                 select the robot to operate                  |
| ![](media/8d910d19cec4d03b5d9cb787425d8d7c.png) |                                                |       to control the movements of the robot by buttons       |
| ![](media/9c0c7230244e08fc5afa28b18e8b4241.png) |                                                |      To control the movements of the robot by joystick       |
| ![](media/3ab61154b4ae730a3757f40171846825.png) |                                                |       To control the movements of the robot by gravity       |
| ![](media/fe15b0e4a7e705027cb042d0fd2398ea.png) |   Send “F”when pressed and “S”when released    | The car moves forward when it is pressed and stops when released |
| ![](media/b1765938932b8633bd5a96af0293ef24.png) |   Send “L”when pressed and “S”when released    | The car turns left when it is pressed tight and stops when released |
| ![](media/67f26bd7d2076922470e8805711f2ef9.png) |   Send “R”when pressed and “S”when released    | The car turns right when it is pressed tight and stops when released |
| ![](media/77615a8ca984e538d58e02ac90bc5382.png) |   Send “B”when pressed and “S”when released    | The car turns back when it is pressed tight and stops when released |
| ![](media/f58421773a56c911b09c150d08b0fd67.png) |        Send “u”+digit+“\#”when dragged         |          Drag to change the speed of the left motor          |
| ![](media/a05432839507dd25b7dc7eb1bb9a02bb.png) |        Send “v”+digit+“\#”when dragged         |         Drag to change the speed of the right motor          |
| ![](media/5dd730ab4d2299210dc2399303b94e33.png) |         Select to enter Function page          |                                                              |
| ![](media/a352ca9be952db2838540657b9a70f8c.png) | Send “G”when pressed and “S”when pressed again | Enter obstacle avoidance mode when pressed and exit when pressed again |
| ![](media/64da14a6ca501aa97f8eb8895e9f6b1c.png) | Send “h”when pressed and “S”when pressed again | Enter following mode when pressed and exit when pressed again |
| ![](media/e4f3b211f8c8b06d1eab9dd2281dff74.png) | Send “e”when pressed and “S”when pressed again | Enter line-tracking mode when pressed and exit when pressed again |
| ![](media/3d662f37603a8f0c1c34ab2b9ff28c63.png) | Send “f”when pressed and “S”when pressed again | Enter move-in-confined-space mode when pressed and exit when pressed again |
| ![](media/48ab7c8c488c61abc162dbda0fc75f27.png) | Send “i”when pressed and “S”when pressed again | Enter light following mode when pressed and exit when pressed again |
| ![](media/4250a152c647cc59f72bf51328943371.png) | Send “j”when pressed and “S”when pressed again | Enter fire extinguishing mode when pressed and exit when pressed again |
| ![](media/cc420ba3d148bd6b720dd44df9a82768.png) | Select to enter facial expression display mode |                                                              |
| ![](media/17261f134c25702ae129624860ab8fe1.png) | Send “k”when pressed and “z”when pressed again | Show smiling pattern when clicked and clear expression when clicked again |
| ![](media/a8bff045e822a06a24bfd7599c9f142a.png) | Send “l”when pressed and “z”when pressed again | Show disgusting pattern when clicked and clear expression when clicked again |
| ![](media/8729f3ac4adf446b388221ae2e4cf71f.png) | Send “m”when pressed and “z”when pressed again | Show happy face when clicked and clear expression when clicked again |
| ![](media/63d935cd1958863f862374ded9b87d6b.png) | Send “n”when pressed and “z”when pressed again | Show sad pattern when clicked and clear expression when clicked again |
| ![](media/5e84087020b919a85495831b231efa5a.png) | Send “o”when pressed and “z”when pressed again | Show disparaging pattern when clicked and clear expression when clicked again |
| ![](media/3b7d99862c2d9a5e7337645b4548091e.png) | Send “p”when pressed and “z”when pressed again | Show heart-shaped pattern when clicked and clear expression when clicked again |
| ![](media/41bf8b28dea6061cea89b640f5646403.png) |                                                | Choose to enter the custom function interface; there are six keys 1,2,3,4,5,6; with these keys, you can expand some functions by yourself |
| ![](media/06b8f32aae6c9914ef227d6966ea537f.png) |               Click to send “w”                | Click to display the analog value detected by the photoresistor on the left |
| ![](media/a89df3c223e6a7d4eac29d4fe2ee14af.png) |                Click to send“y”                | Click to display the analog value detected by the photoresistor on the right |
| ![](media/a76df707b84409e57a1167889c3510d9.png) |                Click to send“x”                | Click to show the distance detected by ultrasonic sensor (unit: cm) |
| ![](media/704e5c6a72d89ee8f78d79ff3cd9537c.png) | Click to send“c” <br />Click again to send“d”  |   Press to turn on the fan and press again to turn off it    |

#### **(3)Flow Chart:**

![](./media/image-20250709135203165.png)

#### **(4)Connection Diagram:**

![](media/930a8024364e07505e845624a94c27bd.png)

<span style="color: rgb(255, 76, 65);">Note:</span>

GND, VCC, SDA and SCL of the 8x16 LED panel are connected to G（GND), V（5V), A4 and A5 of the expansion board. STATE and BRK don’t need to be interfaced. The BT module is inserted into the expansion board.

#### **(5)Test Code:**

You can drag blocks to edit your code

（1）![](media/949a82a4516f57a5e65fdbbd944dc860.png)

（2）![](media/1f98f44522f0d08b8d41a81109f91bee.png)

(3) ![](media/3b4fb768cbf7e0b80fa55cb15aa932b7.png)

（4）![](media/53c2dbc1af206a888f95f58b31000ab2.png)

（5）![](media/863962ed6e2fd7112e1b59265320c7f4.png)

（6) ![](media/8a13abc40d27d0470902e528b40170c3.png)

（7）![](media/ce8358153ae79fb76937f3c22c935ae9.png)

（8）![](media/5aa8407b0ed182b18f227c8e1ec9a0b4.png)

（9）![](media/3af2546fe93dc84ed3c3002543ae8069.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/341e0a01bd6a76edb53f9414ef641a75.png)

#### **(6)Test Result:**

After uploading the code, connect the robot to the Bluetooth module and pair the Bluetooth APP. Turn on the powerswitch of the motor drive shield. Place the robot on the floor, you can use these buttons of the Bluetooth app to control the robot. 

![](media/352d5ec83c4246b980da10b5f99711c5.jpeg)

1. The up, down, left and right arrows control the robot to move forward, backward, left and right respectively.

![](./media/img-20240117095015.png)

2. Click the joystick button and pull the direction of the black point in the white circle to control the movement direction of the robot.

![](./media/img-20240117095052.png)

3.Click the Gravity button and tilt the phone in the forward, backward, left, and right directions, and the robot will move in the direction in which the phone istilted.

![](./media/img-20240117095131.png)


### Project 18: Ultrasonic Tank Robot Multiple Functions

#### **(1)Description:**

The smart car has performed a single function in every previous project. 

Can it display multiply functions at a time ? Positive. 

In this last big project, we intend to use a complete code to control the smart car to show off all functions mentioned in previous projects. We use the keys on the Bluetooth APP to automatically switch various functions, quite simple and convenient.

#### **(2)Flow Diagram:**

![](media/wps122.png)

#### **(3)Connection Diagram:**

![](media/e7ac834ba04aa2e8862995d2d33ce935.png)

1\. GND, VCC, SDA and SCL of the 8x16 board are connected to G（GND), +（VCC), A4 and A5 of the expansion board.

2\. VCC, Trig, Echo and Gnd of the ultrasonic sensor are connected to 5V(V), 12(S), 13(S) and Gnd(G)

3\. The brown wire, red wire and orange wire of the servo are connected to Gnd(G), 5v(V) and D10.

4\. RXD, TXD, GND and VCC of the BT module are connected to TX, RX, G（GND) and 5V（VCC）. STATE and BRK don’t need to be interfaced.

5\. The pin "G", "V" and S of the left photoresistor module are connected to G (GND), V (VCC), A1 respectively; The right photoresistor module is connected to the G (GND), V (VCC), and A2 respectively.

6\. The distal port of the line tracking sensor is 11, 7 and 8

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

<span style="color: rgb(255, 76, 65);">Note:</span> you can’t speed up the car via App.

![](media/e3c4c6cf504b1b9ea6fbae63f5fd9077.png)

#### **(5)Test Result:**

Before uploading the program code, the Bluetooth module needs to be removed, otherwise the code upload will fail.

After uploading the code successfully, open the positioning, and then connect the Bluetooth module.

After uploading the code successfully, plug in the Bluetooth module, after power-on, after the mobile APP is connected to the Bluetooth successfully, we can use the mobile APP to control the tank robot.

## 4. Experiment Extension

### Assemble Fire Extinguishing Robot

Remove the ultrasonic sensor and two photoresistors

![](./media/d575fad4068d67daffaf3958996a185b.png)

![](./media/3a350ba2fda9f37c8f0870f16c981f7b.png)

Put on a fan module and two flame sensors

![](./media/f1a3dbebcb34d4a390e4b2412d34e03e.png)

You can make the fan module install further if the fan module and flame sensors interfere

![](./media/8ec448f8b626fd9f8f0a6941b927c0af.png)

**Wire up**

Wire up the two flame sensors

![](./media/e224ea3ffed9b63eda92e9fbd2fc0ed2.png)

| Flame Sensor | Keyestudio 8833 Board |
| :----------: | :-------------------: |
|      G       |           G           |
|      V       |           V           |
|      A       |          A1           |

![](./media/5aaf61e5d36e7bc01753e544bebeca46.png)

| Flame Sensor | Keyestudio 8833 Board |
| :----------: | :-------------------: |
|      G       |           G           |
|      V       |           V           |
|      A       |          A2           |

Wire up the fan module 

![](./media/c646fb9322c3f4315b246a36ee1df17c.png)

| DC130 Motor | Keyestudio 8833 Board |
| :---------: | :-------------------: |
|      G      |           G           |
|      V      |           V           |
|     IN+     |          D12          |
|     IN-     |          D13          |

------



 **We adopt a model 18650 lithium battery with a pointed positive pole, whose power and capacity are not required.**

![](./media/img-20240117152622.jpg)


### Project 19: Flame Sensor

![](media/7cf8c051f489b06119c262cd059c23c5.jpeg)

#### **(1)Description:**

The flame sensor uses IR receiving tube to detect flames, converts the brightness of the flame into signals with high and low levels, input them into the central processor. The corresponding program processing. In both flames close to and without flames, the voltage value of the analog port is varied. 

If there is no flame, the analog port is about 0.3V; when there is a flame, the analog port is 1.0V. The closer the flame is , the more the voltage value is. It can be used to detect the fire source or make a smart robot.

Note the probe of flame sensors only bears the temperature between -25 ℃and ～85℃.

In the process of use, pay attention to keep the flame sensor in certain distance to avoid getting damaged.

#### **(2)Parameters:**

![](media/e2c77a94067ccd3e634fb3674c02b80f.png)

- Working voltage: 3.3V-5V (DC)

- Current: 100mA

- Maximum power: 0.5W

- Work temperature: -10 ° C to +50 degrees Celsius

- Sensor size: 31.6mmx23.7mm

- Interface: 4pin turn 3PIN interface

- Output signal: analog signals A0, A1

#### **(3)Connection Diagram:**

![](media/10f5f2256c61c54bf7f9a7a0c52375f9.png)

Pin A of two photoresistors are connected to A1 and A2. We connect the flame sensor to A1 and A2. We replace two photoresistors and the ultrasonic sensor with two flame sensors and a fan, an extinguishing car is created.

<span style="color: rgb(255, 76, 65);">**Note:**</span>
1）This experiment requires the use of a fire source. Please make it away from flammable items to prevent fire. Children should experiment under adult supervision. If you cannot confirm that you are safe, please abandon the experiment. 
2）**The flame sensoris not fireproof, please do not burn it directly with flame.**

#### **(4)Test Code:**

You can also drag blocks to edit your code, as shown below

![](media/f3bb36c8d40016865672399259c7945d.png)

![](media/844a4e322ac2a3609e89d7e412406616.png)

![](media/0df2da585a311e7b3312111533cd96a8.png)

![](media/d4da0bd0c55e3580fa95782d50f6e540.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/4bc6c8a4d6e964fd078a6aeb0dd51ff4.png)

#### **(5)Test Results:**

Wire up components, burn the code, open the serial monitor and set the baud rate to 9600.

You can view the simulation value of flame sensor.

The closer the flame, the smaller the simulation value.

Adjust the potentiometer on the module to maintain the LED at the critical point. When the sensor does not detect flame, the LED will be off, but if the sensor detects flame, the LED will be on.

![](./media/img-20240117100139.png)

![](media/60d0ce2044a504135af3b1113a1a4c7d.png)

#### **(6)Extension Practice:**

<span style="color: rgb(255, 76, 65);">**Note:**</span>
1）This experiment requires the use of a fire source. Please make it away from flammable items to prevent fire. Children should experiment under adult supervision. If you cannot confirm that you are safe, please abandon the experiment. 
2）The flame sensoris not fireproof, please do not burn it directly with flame.
We can control an external LED with the flame sensor. The LED still is connected to D9. When fire is connected, LED will be on.

![](media/814c315d3bb44278b476a754d3681227.png)

You can drag blocs to edit your code, as shown below

![](media/f3bb36c8d40016865672399259c7945d.png)

![](media/844a4e322ac2a3609e89d7e412406616.png)

![](media/337311907ec5e21f151b20c0e49e9ba9.png)

![](media/5b5e78e7acccddd6b278c52cf5d9a6bb.png)

![](media/cc09f61b782a662eaee267f8dbd8968d.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/9d2f5915e4a6991ed4549b39ec853fa5.png)

You can use the flame of a lighter near the left flame sensor. When the flame sensor detects a flame, the LED module will light up as an alarm.

![](./media/img-20240117100333.png)

<span style="color: rgb(255, 76, 65);">**Note:**</span>
Please make it away from flammable items to prevent fire. Children should experiment under adult supervision. If you cannot confirm that you are safe, please abandon the experiment. The flame sensor is not fireproof, please do not burn it directly with flame.


### Project 20: Fan

#### **(1)Description：**

![](media/4afc1c9720d36beba8adfac0ee22ff10.png)

This fan module uses a HR1124S motor-controlling chip, a single-channel H-bridge driver chip containing a low-conductivity resistance PMOS and NMOS power tubes. The low-conducting resistance can ease the power consumption, contributing to the safe work of the chip for longer time.

In addition, its low standby current and low static working current makes itself apply to toys. We can control the rotation direction and speed of the fan by outputting IN + and IN- signals and PWM signals.

#### **(2)Parameters:**

- Working voltage: 5V

- Current: 200mA

- Maximum power: 2W

- Work temperature: -10 ° C to +50 degrees Celsius

- Size: 47.6mm \* 23.8mm

#### **(3)Connection Diagram:**

The fan module needs driving by large current; therefore, we install a battery holder.

![](media/2bd9aa5cc21e274458328958561f1915.png)

The pin GND, VCC, IN+ and IN- of the fan module are connected to pin G, V, 12 and 13 of the shield.

#### **(4)Test Code:**

You can also drag blocks to edit your code, as shown below

![](media/4e9d7f8f92495db5208c718292da3e15.png)

![](media/1360090880c1cd9b20671c17604f4108.png)

![](media/4e9354e674060efe6cf540a3e1b87813.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/cbb8f153dd0d114bdd350577af7a1f02.png)

#### **(5)Test Results:**

Upload code, wire up components, power on and turn the DIP switch to ON. The small fan will turn clockwise for 2s, stop for 2s and anticlockwise for 2s

![](./media/img-20240117100504.png)

#### **(6)Extension Practice:**

We have understood the working principle of the flame sensor. Next, hook up a flame sensor in the circuit , as shown below. Then control the fan to blew out fire with the flame sensor.

![](media/67463007499fe6b3f077b4bfbdce6cad.png)


You can drag blocs to edit your code, as shown below

![](media/4e9d7f8f92495db5208c718292da3e15.png)

![](media/337311907ec5e21f151b20c0e49e9ba9.png)

![](media/5b5e78e7acccddd6b278c52cf5d9a6bb.png)

![](media/cc09f61b782a662eaee267f8dbd8968d.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/74ddb07daf4063f0640c31f4243a0864.png)


After uploading the code, turn on the power switch of the motor drive shield, you can turn on the fan when flame is detected from the left flame sensor of the robot.

![](./media/img-20240117102303.png)

### Project 21: Fire Extinguishing Tank

#### **(1)Description:**

The line-tracking function of the smart tank has been explained in the previous project. And in this project we use the flame sensor to make a fire extinguishing robot. 

When the car encounters flames, the motor of the fan will rotate to blow out the fire. Of course, we need to replace the ultrasonic sensor and two photoresistors with a fan module and flame sensors first.

The specific logic of the line-tracking smart car is shown in the table blow:

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

![](media/wps120.png)

#### **(3)Connection Diagram:**

![](media/c02e461ac7bdbab7fd14a19c453e08e4.png)

<span style="color: rgb(255, 76, 65);">Note:</span>

GND, VCC, SDA and SCL of the 8x16 LED panel are connected to G（GND, V（VCC), A4 and A5.

G, V and A of two flame sensors are interfaced with G（GND), V（VCC), A1 and A2 of the expansion board.

#### **(4)Test Code:**


You can also drag blocks to edit your code, as shown below

（1）![](media/6eb13569aaa7bf560f62049df28b51db.png)

（2）![](media/2e41c11455f595e98bd2f0f27bf4a291.png)

（3）![](media/2e3d4904d9605dfecb5736b4bf235ab2.png)

（4） ![](media/5aa8407b0ed182b18f227c8e1ec9a0b4.png)

（5） ![](media/4b40151c7482ff9371570978b8ef9c77.png)

（6）![](media/c0365237fa7ec7de10e9fc465353fae1.png)

**Complete Test Code**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

![](media/c07c09e5533a37838722b8c2b513646d.png)

#### **(5)Test Results:**

After upload the test code successfully, power up and turn the DIP switch to ON end. The smart car will put out the fire when it detects flame.

![](media/2de5f1d832d40c0fc94274f1d87443c6.jpeg)

<span style="color: rgb(255, 76, 65);">**Note:**</span>
Please make it away from flammable items to prevent fire. Children should experiment under adult supervision. If you cannot confirm that you are safe, please abandon the experiment. The flame sensor is not fireproof, please do not burn it directly with flame.

### Project 22: Fire Extinguishing Robot Multiple Functions

#### **(1)Description:**

The smart car has performed a single function in every previous project. 

Can it display multiply functions at a time ? Positive. 

In this last big project, we intend to use a complete code to control the smart car to show off all functions mentioned in previous projects. We use the keys on the Bluetooth APP to automatically switch various functions, quite simple and convenient.

#### **(2)Flow Diagram:**

<span style="color: rgb(255, 76, 65);">**Please referto Project 16 to install and configure Bluetooth APP**</span>

![](media/wps122.png)

#### **(3)Connection Diagram:**

![](media/e7ac834ba04aa2e8862995d2d33ce935.png)

1\. GND, VCC, SDA and SCL of the 8x16 board are connected to G（GND), +（VCC), A4 and A5 of the expansion board.

2\. VCC, IN+, IN- and Gnd of the ultrasonic sensor are connected to 5V(V), 12(S), 13(S) and Gnd(G)

3\. The brown wire, red wire and orange wire of the servo are connected to Gnd(G), 5v(V) and D10.

4\. RXD, TXD, GND and VCC of the BT module are connected to TX, RX, G（GND) and 5V（VCC）. STATE and BRK don’t need to be interfaced.

5\. The pin "G", "V" and S of the left Flame sensors are connected to G (GND), V (VCC), A1 respectively; The right Flame sensors is connected to the G (GND), V (VCC), and A2 respectively.

6\. The distal port of the line tracking sensor is 11, 7 and 8.

#### **(4)Test Code:**

(<span style="color: rgb(255, 76, 65);">Note:</span> Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)
<span style="color: rgb(255, 76, 65);">Note:</span> you can’t speed up the car via App.

![](media/b1527b806741e28e8f2af5107db505fe.png)


#### **(5)Test Result:**

Before uploading the program code, the Bluetooth module needs to be removed, otherwise the code upload will fail.

After uploading the code successfully, open the positioning, and then connect the Bluetooth module.

After uploading the code successfully, plug in the Bluetooth module, after power-on, after the mobile APP is connected to the Bluetooth successfully, we can use the mobile APP to control the tank robot.

![](media/13656cfee75dc5acbeba18a90a084e159.jpg)

