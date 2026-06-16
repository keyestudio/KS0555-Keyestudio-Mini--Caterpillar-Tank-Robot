# 2. Produkt-Setup

<span style="color: rgb(255, 76, 65);">**Achtung**</span>: Entfernen Sie dünne Folien von den Platinen, bevor Sie diesen Roboter installieren. Beachten Sie, dass der anfängliche Winkel des Servos während der Installation eingestellt werden muss.

![](./media/image-20250709092645945.png)

 **Schritt 1**

Benötigte Werkzeuge:

![](./media/image-20250709102252976.png)

![](./media/image-20250709092722839.png)

![](./media/image-20250709092738119.png)

<span style="color: rgb(255, 76, 65); font-size: 16px;">**Hinweis:** Achten Sie auf die Einbaurichtung der Räder. Die dicke Seite sollte außen sein.</span>

![](./media/image-20250709092816744.png)

![](./media/image-20250709092828746.png)

 **Schritt 2**

![](./media/image-20250709093034445.png)

Die Räder und Ketten müssen installiert werden. Montieren Sie sie dann gleichzeitig am Fahrzeugkörper. Andernfalls können die Ketten nicht installiert werden.

![](./media/image-20250709093056711.png)

![](./media/image-20250709093110898.png)

**Hinweis:** Achten Sie darauf, wo die Räder an den Ketten montiert werden.

![](./media/image-20250709093130989.png)

![](./media/image-20250709093205374.png)

 **Schritt 3**

![](./media/image-20250709093225354.png)

![](./media/image-20250709093234885.png)

![](./media/image-20250709093246548.png)

**Hinweis:** Bitte zuerst verkabeln.

![](./media/image-20250709093344681.png)

![](./media/image-20250709093353998.png)

![](./media/image-20250709093404201.png)

![](./media/image-20250709093423158.png)

![](./media/image-20250709093449028.png)

**Schritt 4**

![](./media/image-20250709093522583.png)

![](./media/image-20250709093533500.png)

![](./media/image-20250709093547507.png)

**Schritt 5**

![](./media/image-20250709093644514.png)

![](./media/image-20250709093657252.png)

![](./media/image-20250709093847892.png)

 **Schritt 6**

![](./media/image-20250709093916149.png)

![](./media/image-20250709093926354.png)

![](./media/image-20250709093939255.png)

**Schritt 7**

![](./media/image-20250709094006571.png)

<span style="color: rgb(255, 76, 65);">**Hinweis:** Achten Sie auf die Richtung der Jumper-Kappen.</span>

![](./media/image-20250709094035675.png)

![](./media/image-20250709094048424.png)

 **Schritt 8**

![](./media/image-20250709094212254.png)

![](./media/image-20250709094749158.png)

![](./media/image-20250709094802015.png)

**Schritt 9**

![](./media/image-20250709094906387.png)

![](./media/image-20250709094915724.png)

![](./media/image-20250709094931895.png)

**Schritt 10**

(Der Winkel des Servos muss eingestellt werden)

![](./media/image-20250709095001492.png)

![](./media/image-20250709095028698.png)

**Stellen Sie den Winkel des Servos auf 90° ein**

Um den Code des Servos anzupassen, wählen Sie bitte den entsprechenden Code gemäß dem Kurs aus.

1.**Arduino:** Laden Sie die Codedatei herunter: [Arduino](./Arduino.7z)

![](./media/image-20250710110650230.png)

2.**Kidsblock:** Laden Sie die Codedatei herunter: [Kidsblock](./Kidsblock.7z)

![](./media/image-20250710110906515.png)

**Nach der Initialisierung des Servowinkels installieren Sie das Bluetooth-Modul.**

Halten Sie den Ultraschallsensor parallel zur Platine.

![](./media/image-20250709095254305.png)

![](./media/image-20250709095307371.png)

 **Schritt 11**

![](./media/image-20250709095338636.png)

![](./media/image-20250709095354728.png)

![](./media/image-20250709095428457.png)



**Schritt 12**

![](./media/image-20250709095454717.png)

![](./media/image-20250709095512833.png)

![](./media/image-20250709095524456.png)

**Verkabelung**

Für das 8*16 LED-Panel verbinden Sie die Kabel mit A4 und A5.

![](./media/image-20250709095552072.png)

![](./media/image-20250709095606248.png)

![](./media/image-20250709095643567.png)

Verbinden Sie Motor A mit dem A-Port und Motor B mit dem B-Port.

![](./media/image-20250709095728739.png)

![](./media/image-20250709095740866.png)

Verbinden Sie das Stromkabel.

![](./media/image-20250709095759390.png)

![](./media/image-20250709095811580.png)

Linienverfolgungssensor (siehe Bild):

![](./media/image-20250709095830428.png)

![](./media/image-20250709095848550.png)

![](./media/image-20250709095901776.png)

![](./media/image-20250709095911639.png)

Verkabeln Sie die Fotowiderstände:

![](./media/image-20250709095929779.png)

![](./media/image-20250709095939414.png)

| Fotowiderstand | Keyestudio 8833 Platine |
| :-----------: | :-------------------: |
|       G       |           G           |
|       V       |           V           |
|       s       |          A1           |

![](./media/image-20250709100043670.png)

| Fotowiderstand | Keyestudio 8833 Platine |
| :-----------: | :--------------------: |
|       G       |           G            |
|       V       |           V            |
|       S       |           V2           |

Verkabeln Sie den Ultraschallsensor:

![](./media/image-20250709100317508.png)

![](./media/image-20250709100329430.png)

| Ultraschallsensor | Keyestudio 8833 Platine |
| :---------------: | :-------------------: |
|        Vcc        |           V           |
|       Trig        |          D12          |
|       Echo        |          D13          |
|        Gnd        |           G           |

Verkabeln Sie das Servo (D10):

![](./media/image-20250709100626238.png)

| Servo  | Keyestudio 8833 Platine |
| :----: | :-------------------: |
| Braun  |           G           |
|  Rot   |         V(5V)         |
| Orange |          D10          |

<span style="color: rgb(255, 76, 65);">**Wir verwenden ein Modell 18650 Lithium-Akku mit spitzem Pluspol, dessen Leistung und Kapazität nicht erforderlich sind.**</span>

![](./media/image-20250709100841625.png)
