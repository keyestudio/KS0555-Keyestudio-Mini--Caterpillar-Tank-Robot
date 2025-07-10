# 2. Product setup

<span style="color: rgb(255, 76, 65);">**Caution**</span>: Set the initial angle of the servo Peel thin films off boards before installing this robot .

![](./media/image-20250709092645945.png)

 **Step1**

Tools needed:

![](./media/image-20250709102252976.png)

![](./media/image-20250709092722839.png)

![](./media/image-20250709092738119.png)

<span style="color: rgb(255, 76, 65); font-size: 16px;">Pay attention to the installation direction of the wheels. The thick side is on the outside.</span>

![](./media/image-20250709092816744.png)

![](./media/image-20250709092828746.png)

 **Step2**

![](./media/image-20250709093034445.png)

The wheels and tracks must be installed. Then mount them on the car body simultaneously. Otherwise the tracks cannot be installed.

![](./media/image-20250709093056711.png)

![](./media/image-20250709093110898.png)

Note where the wheels are mounted on the tracks.

![](./media/image-20250709093130989.png)

![](./media/image-20250709093205374.png)

 **Step3**

![](./media/image-20250709093225354.png)

![](./media/image-20250709093234885.png)

![](./media/image-20250709093246548.png)

Please wire up first.

![](./media/image-20250709093344681.png)

![](./media/image-20250709093353998.png)

![](./media/image-20250709093404201.png)

![](./media/image-20250709093423158.png)

![](./media/image-20250709093449028.png)

**Step 4**

![](./media/image-20250709093522583.png)

![](./media/image-20250709093533500.png)

![](./media/image-20250709093547507.png)

**Step 5**

![](./media/image-20250709093644514.png)

![](./media/image-20250709093657252.png)

![](./media/image-20250709093847892.png)

 **Step 6**

![](./media/image-20250709093916149.png)

![](./media/image-20250709093926354.png)

![](./media/image-20250709093939255.png)

**Step 7**

![](./media/image-20250709094006571.png)

<span style="color: rgb(255, 76, 65);">Note the direction of jumper caps.</span>

![](./media/image-20250709094035675.png)

![](./media/image-20250709094048424.png)

 **Step 8**

![](./media/image-20250709094212254.png)

![](./media/image-20250709094749158.png)

![](./media/image-20250709094802015.png)

**Step 9**

![](./media/image-20250709094906387.png)

![](./media/image-20250709094915724.png)

![](./media/image-20250709094931895.png)

**Step 10**

（Need to adjust the angle of the servo）

![](./media/image-20250709095001492.png)

![](./media/image-20250709095028698.png)

**Set the angle of the servo to 90°**

To adjust the code of the servo,please select it according to the course.

1.**Arduino:**Download the code file:[Arduino](./Arduino.7z)

![](./media/image-20250710110650230.png)

2.**Kidsblock:**Download the code file:[Kidsblock](./Kidsblock.7z)

![](./media/image-20250710110906515.png)

**After initializing servo angle, install the Bluetooth module.**

Keep the ultrasonic sensor parallel to the board.

![](./media/image-20250709095254305.png)

![](./media/image-20250709095307371.png)

 **Step 11**

![](./media/image-20250709095338636.png)

![](./media/image-20250709095354728.png)

![](./media/image-20250709095428457.png)



**Step 12**

![](./media/image-20250709095454717.png)

![](./media/image-20250709095512833.png)

![](./media/image-20250709095524456.png)

**Wire up**

For 8\*16LED panel, Make wires connect to A4 and A5.

![](./media/image-20250709095552072.png)

![](./media/image-20250709095606248.png)

![](./media/image-20250709095643567.png)

Connect the motor A to A port and make the motor B to B port.

![](./media/image-20250709095728739.png)

![](./media/image-20250709095740866.png)

Connect the power wire

![](./media/image-20250709095759390.png)

![](./media/image-20250709095811580.png)

Line Tracking Sensor(see the picture)

![](./media/image-20250709095830428.png)

![](./media/image-20250709095848550.png)

![](./media/image-20250709095901776.png)

![](./media/image-20250709095911639.png)

Wire up the photoresistors

![](./media/image-20250709095929779.png)

![](./media/image-20250709095939414.png)

| Photoresistor | Keyestudio 8833 Board |
| :-----------: | :-------------------: |
|       G       |           G           |
|       V       |           V           |
|       s       |          A1           |

![](./media/image-20250709100043670.png)

| Photoresistor | Keyestudio 8833  Board |
| :-----------: | :--------------------: |
|       G       |           G            |
|       V       |           V            |
|       S       |           V2           |

Wire up ultrasonic sensor.

![](./media/image-20250709100317508.png)

![](./media/image-20250709100329430.png)

| Ultrasonic Sensor | Keyestudio 8833 Board |
| :---------------: | :-------------------: |
|        Vcc        |           V           |
|       Trig        |          D12          |
|       Echo        |          D13          |
|        Gnd        |           G           |

Wire up the servo(D10)

![](./media/image-20250709100626238.png)

| Servo  | Keyestudio 8833 Board |
| :----: | :-------------------: |
| Brown  |           G           |
|  Red   |         V(5V)         |
| Orange |          D10          |

<span style="color: rgb(255, 76, 65);">**We adopt a model 18650 lithium battery with a pointed positive pole, whose power and capacity are not required.**</span>

![](./media/image-20250709100841625.png)

