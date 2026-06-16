# 2. Productconfiguratie

<span style="color: rgb(255, 76, 65);">**Let op**</span>: Verwijder dunne folies van de printplaten voordat u deze robot installeert. Houd er rekening mee dat de initiële hoek van de servo tijdens de installatie moet worden ingesteld.

![](./media/image-20250709092645945.png)

**Stap 1**

Benodigde gereedschappen:

![](./media/image-20250709102252976.png)

![](./media/image-20250709092722839.png)

![](./media/image-20250709092738119.png)

<span style="color: rgb(255, 76, 65); font-size: 16px;">**Opmerking:** Let op de installatierichting van de wielen. De dikke kant moet aan de buitenkant zitten.</span>

![](./media/image-20250709092816744.png)

![](./media/image-20250709092828746.png)

**Stap 2**

![](./media/image-20250709093034445.png)

De wielen en rupsbanden moeten worden geïnstalleerd. Monteer ze vervolgens gelijktijdig op de carrosserie. Anders kunnen de rupsbanden niet worden geïnstalleerd.

![](./media/image-20250709093056711.png)

![](./media/image-20250709093110898.png)

**Opmerking:** Let op waar de wielen op de rupsbanden zijn gemonteerd.

![](./media/image-20250709093130989.png)

![](./media/image-20250709093205374.png)

**Stap 3**

![](./media/image-20250709093225354.png)

![](./media/image-20250709093234885.png)

![](./media/image-20250709093246548.png)

**Opmerking:** Sluit eerst de bedrading aan.

![](./media/image-20250709093344681.png)

![](./media/image-20250709093353998.png)

![](./media/image-20250709093404201.png)

![](./media/image-20250709093423158.png)

![](./media/image-20250709093449028.png)

**Stap 4**

![](./media/image-20250709093522583.png)

![](./media/image-20250709093533500.png)

![](./media/image-20250709093547507.png)

**Stap 5**

![](./media/image-20250709093644514.png)

![](./media/image-20250709093657252.png)

![](./media/image-20250709093847892.png)

**Stap 6**

![](./media/image-20250709093916149.png)

![](./media/image-20250709093926354.png)

![](./media/image-20250709093939255.png)

**Stap 7**

![](./media/image-20250709094006571.png)

<span style="color: rgb(255, 76, 65);">**Opmerking:** Let op de richting van de jumper caps.</span>

![](./media/image-20250709094035675.png)

![](./media/image-20250709094048424.png)

**Stap 8**

![](./media/image-20250709094212254.png)

![](./media/image-20250709094749158.png)

![](./media/image-20250709094802015.png)

**Stap 9**

![](./media/image-20250709094906387.png)

![](./media/image-20250707094915724.png)

![](./media/image-20250709094931895.png)

**Stap 10**

(Moet de hoek van de servo aanpassen)

![](./media/image-20250709095001492.png)

![](./media/image-20250709095028698.png)

**Stel de hoek van de servo in op 90°**

Om de code van de servo aan te passen, selecteert u de overeenkomstige code volgens de cursus.

1.**Arduino:** Download het codebestand: [Arduino](./Arduino.7z)

![](./media/image-20250710110650230.png)

2.**Kidsblock:** Download het codebestand: [Kidsblock](./Kidsblock.7z)

![](./media/image-20250710110906515.png)

**Na het initialiseren van de servohoek, installeert u de Bluetooth-module.**

 Houd de ultrasone sensor parallel aan de printplaat.

![](./media/image-20250709095254305.png)

![](./media/image-20250709095307371.png)

**Stap 11**

![](./media/image-20250709095338636.png)

![](./media/image-20250709095354728.png)

![](./media/image-20250709095428457.png)

**Stap 12**

![](./media/image-20250709095454717.png)

![](./media/image-20250709095512833.png)

![](./media/image-20250709095524456.png)

**Bedrading**

Voor het 8*16 LED-paneel sluit u de draden aan op A4 en A5.

![](./media/image-20250709095552072.png)

![](./media/image-20250709095606248.png)

![](./media/image-20250709095643567.png)

Sluit motor A aan op poort A en motor B op poort B.

![](./media/image-20250709095728739.png)

![](./media/image-20250709095740866.png)

Sluit de voedingsdraad aan.

![](./media/image-20250709095759390.png)

![](./media/image-20250709095811580.png)

Lijnvolgsensor (zie de afbeelding):

![](./media/image-20250709095830428.png)

![](./media/image-20250709095848550.png)

![](./media/image-20250709095901776.png)

![](./media/image-20250709095911639.png)

Sluit de fotoweerstanden aan:

![](./media/image-20250709095929779.png)

![](./media/image-20250709095939414.png)

| Fotoweerstand | Keyestudio 8833 Board |
| :-----------: | :-------------------: |
|       G       |           G           |
|       V       |           V           |
|       s       |          A1           |

![](./media/image-20250709100043670.png)

| Fotoweerstand | Keyestudio 8833 Board |
| :-----------: | :--------------------: |
|       G       |           G            |
|       V       |           V            |
|       S       |           V2           |

Sluit de ultrasone sensor aan:

![](./media/image-20250709100317508.png)

![](./media/image-20250709100329430.png)

| Ultrasone Sensor | Keyestudio 8833 Board |
| :---------------: | :-------------------: |
|        Vcc        |           V           |
|       Trig        |          D12          |
|       Echo        |          D13          |
|        Gnd        |           G           |

Sluit de servo aan (D10):

![](./media/image-20250709100626238.png)

| Servo | Keyestudio 8833 Board |
| :----: | :-------------------: |
| Bruin |           G           |
| Rood |         V(5V)         |
| Oranje |          D10          |

<span style="color: rgb(255, 76, 65);">**We gebruiken een model 18650 lithiumbatterij met een puntige positieve pool, waarvan het vermogen en de capaciteit niet vereist zijn.**</span>

![](./media/image-20250709100841625.png)
