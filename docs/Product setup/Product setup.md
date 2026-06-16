# 2. Configuración del producto

<span style="color: rgb(255, 76, 65);">**Precaución**</span>: Retire las películas delgadas de las placas antes de instalar este robot. Tenga en cuenta que el ángulo inicial del servo debe ajustarse durante la instalación.

![](./media/image-20250709092645945.png)

**Paso 1**

Herramientas necesarias:

![](./media/image-20250709102252976.png)

![](./media/image-20250709092722839.png)

![](./media/image-20250709092738119.png)

<span style="color: rgb(255, 76, 65); font-size: 16px;">**Nota:** Preste atención a la dirección de instalación de las ruedas. El lado grueso debe estar hacia afuera.</span>

![](./media/image-20250709092816744.png)

![](./media/image-20250709092828746.png)

**Paso 2**

![](./media/image-20250709093034445.png)

Las ruedas y las orugas deben instalarse. Luego móntelas en la carrocería del coche simultáneamente. De lo contrario, las orugas no se podrán instalar.

![](./media/image-20250709093056711.png)

![](./media/image-20250709093110898.png)

**Nota:** Preste atención a dónde se montan las ruedas en las orugas.

![](./media/image-20250709093130989.png)

![](./media/image-20250709093205374.png)

**Paso 3**

![](./media/image-20250709093225354.png)

![](./media/image-20250709093234885.png)

![](./media/image-20250709093246548.png)

**Nota:** Por favor, conecte los cables primero.

![](./media/image-20250709093344681.png)

![](./media/image-20250709093353998.png)

![](./media/image-20250709093404201.png)

![](./media/image-20250709093423158.png)

![](./media/image-20250709093449028.png)

**Paso 4**

![](./media/image-20250709093522583.png)

![](./media/image-20250709093533500.png)

![](./media/image-20250709093547507.png)

**Paso 5**

![](./media/image-20250709093644514.png)

![](./media/image-20250709093657252.png)

![](./media/image-20250709093847892.png)

**Paso 6**

![](./media/image-20250709093916149.png)

![](./media/image-20250709093926354.png)

![](./media/image-20250709093939255.png)

**Paso 7**

![](./media/image-20250709094006571.png)

<span style="color: rgb(255, 76, 65);">**Nota:** Preste atención a la dirección de los puentes.</span>

![](./media/image-20250709094035675.png)

![](./media/image-20250709094048424.png)

**Paso 8**

![](./media/image-20250709094212254.png)

![](./media/image-20250709094749158.png)

![](./media/image-20250709094802015.png)

**Paso 9**

![](./media/image-20250709094906387.png)

![](./media/image-20250709094915724.png)

![](./media/image-20250709094931895.png)

**Paso 10**

(Es necesario ajustar el ángulo del servo)

![](./media/image-20250709095001492.png)

![](./media/image-20250709095028698.png)

**Ajuste el ángulo del servo a 90°**

Para ajustar el código del servo, seleccione el código correspondiente según el curso.

1.**Arduino:** Descargue el archivo de código: [Arduino](./Arduino.7z)

![](./media/image-20250710110650230.png)

2.**Kidsblock:** Descargue el archivo de código: [Kidsblock](./Kidsblock.7z)

![](./media/image-20250710110906515.png)

**Después de inicializar el ángulo del servo, instale el módulo Bluetooth.**

Mantenga el sensor ultrasónico paralelo a la placa.

![](./media/image-20250709095254305.png)

![](./media/image-20250709095307371.png)

**Paso 11**

![](./media/image-20250709095338636.png)

![](./media/image-20250709095354728.png)

![](./media/image-20250709095428457.png)

**Paso 12**

![](./media/image-20250709095454717.png)

![](./media/image-20250709095512833.png)

![](./media/image-20250709095524456.png)

**Cableado**

Para el panel LED 8*16, conecte los cables a A4 y A5.

![](./media/image-20250709095552072.png)

![](./media/image-20250709095606248.png)

![](./media/image-20250709095643567.png)

Conecte el motor A al puerto A y el motor B al puerto B.

![](./media/image-20250709095728739.png)

![](./media/image-20250709095740866.png)

Conecte el cable de alimentación.

![](./media/image-20250709095759390.png)

![](./media/image-20250709095811580.png)

Sensor de seguimiento de línea (ver la imagen):

![](./media/image-20250709095830428.png)

![](./media/image-20250709095848550.png)

![](./media/image-20250709095901776.png)

![](./media/image-20250709095911639.png)

Conecte los fotorresistores:

![](./media/image-20250709095929779.png)

![](./media/image-20250709095939414.png)

| Fotorresistor | Placa Keyestudio 8833 |
| :-----------: | :-------------------: |
| G | G |
| V | V |
| S | A1 |

![](./media/image-20250709100043670.png)

| Fotorresistor | Placa Keyestudio 8833 |
| :-----------: | :--------------------: |
| G | G |
| V | V |
| S | V2 |

Conecte el sensor ultrasónico:

![](./media/image-20250709100317508.png)

![](./media/image-20250709100329430.png)

| Sensor ultrasónico | Placa Keyestudio 8833 |
| :---------------: | :-------------------: |
| Vcc | V |
| Trig | D12 |
| Echo | D13 |
| Gnd | G |

Conecte el servo (D10):

![](./media/image-20250709100626238.png)

| Servo | Placa Keyestudio 8833 |
| :----: | :-------------------: |
| Marrón | G |
| Rojo | V(5V) |
| Naranja | D10 |

<span style="color: rgb(255, 76, 65);">**Adoptamos una batería de litio modelo 18650 con polo positivo puntiagudo, cuya potencia y capacidad no son requisitos.**</span>

![](./media/image-20250709100841625.png)
