## 1. Assemble

 **Caution**: Set the initial angle of the servo Peel thin films off boards before installing this robot 

![](arduino/media/4ea30cc75eb77e63441dccef9f0ca3cb.png)

 **Step1**

![img](arduino/media/wps115.jpg)

![img](arduino/media/wps116.jpg)

![image-20230525092859344](arduino/media/image-20230525092859344.png)

![image-20230525092919242](arduino/media/image-20230525092919242.png)

![image-20230525092925326](arduino/media/image-20230525092925326.png)

![image-20230525092930362](arduino/media/image-20230525092930362.png)

 **Step2**

Required Parts

![ ](arduino/media/6dfc645075993b1a10e45e888b7fc670.png)

![ ](arduino/media/e5322cac246d5324e721489fc805d71f.png)

![ ](arduino/media/bddc904d904489540d4bb2a2fa29d236.png)

 **Step 3**
Required Parts

![ ](arduino/media/1cfa4e5862c2e69e4891b2f7f345938b.png)

![ ](arduino/media/66a58753fc1fa0a64d9c5dec681cb97c.png)

![ ](arduino/media/9a0eb86718e6dd64699af4dab44d5682.png)

 **Step 4**
Required Parts

![ ](arduino/media/8b60ab25e9f6fba784716a315001db91.png)

![ ](arduino/media/a73038cc068a0e0d5495115212fffa66.png)

![ ](arduino/media/115177d49c40c68d979fc21653d70834.png)

 **Step 5**
Required Parts

![ ](arduino/media/7d5047e2ff8803cee7125196533fc4a6.png)

![ ](arduino/media/9479cecb0f142fa3b0e496fae2bfc683.png)

![ ](arduino/media/5b8572e5104d7e72195e76feb929aba6.png)

 **Step 6**
Required Parts

![ 7.png 7](arduino/media/76e5f6b6248c29a8ac0fba75eb2e706a.png)

Note the direction of jumper caps

![ 7_1.png 7_1](arduino/media/e39a2efd338f70fd1869264fe291450b.png)

![ 7_2.png 7_2](arduino/media/4ae6b2601c721b1ebbd039c5567ef78b.png)

 **Step 7**
Required Parts

![\\ 9.jpg 9](arduino/media/6a0447be5d1c8c410c35d7be569d8770.jpeg)

![ 9_1](arduino/media/08c05216fcf38671b207b1769bf4923f.jpeg)

![ 9_2](arduino/media/a285db6d2b9ad77594d3e9a05fbc3c3e.jpeg)

 **Step 8**
Required Parts

![ 8](arduino/media/d3d3d166e9678d298c33b3176de07d6a.jpeg)

![ 8_1](arduino/media/286547498c44567def602fe7fcdff8bc.jpeg)

![ 8_2](arduino/media/1b572444d27283340f630226bfdef9db.jpeg)

 **Step 9**
（Need to adjust the angle of the servo）
Required Parts

![ 8_3](arduino/media/0f4b98efe20dee69b96eeade2599c839.jpeg)

Set the angle of the servo to 90°
Refer to the lesson 7 to set the servo. If you don’t know how to use it, learn the lesson 7 first.

(Note: Do not connect the Bluetooth module before uploading the code, because the uploading of the code also uses serial communication, and there may be conflicts with the serial communication of the Bluetooth, which can cause the uploading of the code to fail.)

Keep the ultrasonic sensor parallel to the board

![ 8_4.png 8_4](arduino/media/24d9629c520bda267abd2bb3274f8234.png)

![ 8_5.png 8_5](arduino/media/c408c7aa269fee1e0988ad69e4d99215.png)

 **Step 10**
Required Parts

![ 12.png 12](arduino/media/b8fd0392e5ddb44a066fc64df1ed64e3.png)

![ 12_1.png 12_1](arduino/media/ed84f27b216cc41f8d5365c01b0eac99.png)

![ 12_2.png 12_2](arduino/media/c5d8fcefa0d47aa0baf1233920694a11.png)

 **Step 11**
Required Parts

![ 12_3.png 12_3](arduino/media/871cc650bbf0fa90bd66c94fbb7c7e14.png)

![ 12_4.png 12_4](arduino/media/2b4e9fc8e12cc62291bcea7703dbcbc2.png)

![ 12_5.png 12_5](arduino/media/11bba4f642c4e0d7356a646ac3c17fc0.png)

Wire up
For 8\*16LED panel, Make wires connect to A4 and A5

![ ](arduino/media/f3262a7f63769b2a69665dbf99476394.jpeg)

![ ](arduino/media/6a61630c713284ffcd12a046224793df.png)

![ ](arduino/media/image-20230907160223855.png)

Connect the motor A to B port and make the motor B to A port

![ ](arduino/media/5c5ca1f43b3fe0758ed9c2b95700ab22.png)

![ ](arduino/media/47dabc315fe9e19c5d3d5f42b7e36959.png)

Line Tracking Sensor(see the picture)

![ ](arduino/media/01d98654282c339efe6a422f96380989.jpeg)

![ ](arduino/media/07144428.jpg)

![ ](arduino/media/6d44df09cf294c175fe45a067da373ec.jpeg)

![ ](arduino/media/7b20e184afc842346615a8ca91167a57.png)

![ ](arduino/media/8abdfcbc1328f818978bce68b47ee83c.png)

Wire up the photoresistor

![ ](arduino/media/e0d6dbb2e9a054991bbd53284790d2dd.png)

![ ](arduino/media/3c4715f8bd327477824d5f9ac872503d.png)

| Left | Keyestudio 8833 Board |      | Right | Keyestudio 8833  Board |
| :--: | :-------------------: | ---- | :---: | :--------------------: |
|  G   |           G           |      |   G   |           G            |
|  V   |           V           |      |   V   |           V            |
|  S   |          A1           |      |   S   |           A2           |

Wire up ultrasonic sensors

![ ](arduino/media/ea9bdc12ab2c158fbf9205e5125cbafa.png)

| Ultrasonic Sensor | Keyestudio 8833 Board |
| :---------------: | :-------------------: |
|        Vcc        |           V           |
|       Trig        |          D12          |
|       Echo        |          D13          |
|        Gnd        |           G           |

Wire up the servo(D10)

![ ](arduino/media/a435408b48071d6f1977c19d105e3836.png)

| Servo  | Keyestudio 8833 Board |
| :----: | :-------------------: |
| Brown  |           G           |
|  Red   |         V(5V)         |
| Orange |          D10          |

 Extinguishing Robot

Remove the ultrasonic sensor and two photoresistors

![ 12_6.png 12_6](arduino/media/d575fad4068d67daffaf3958996a185b.png)

![ 13.png 13](arduino/media/3a350ba2fda9f37c8f0870f16c981f7b.png)

Put on a fan module and two flame sensors

![ 2.png 2](arduino/media/f1a3dbebcb34d4a390e4b2412d34e03e.png)

You can make the fan module install further if the fan module and flame sensors interfere

![ ](arduino/media/8ec448f8b626fd9f8f0a6941b927c0af.png)

Wire up

Wire up the fan module and two flame sensors

![ ](arduino/media/e224ea3ffed9b63eda92e9fbd2fc0ed2.png)

![ ](arduino/media/5aaf61e5d36e7bc01753e544bebeca46.png)

| Left | Keyestudio 8833 Board |      | Right | Keyestudio 8833 Board |
| :--: | :-------------------: | ---- | :---: | :-------------------: |
|  G   |           G           |      |   G   |           G           |
|  V   |           V           |      |   V   |           V           |
|  A   |          A1           |      |   A   |          A2           |

![ ](arduino/media/c646fb9322c3f4315b246a36ee1df17c.png)

| DC130 Motor | Keyestudio 8833 Board |
| :---------: | :-------------------: |
|      G      |           G           |
|      V      |           V           |
|     IN+     |          D12          |
|     IN-     |          D13          |

------



 **We adopt a model 18650 lithium battery with a pointed positive pole, whose power and capacity are not required.**

------

