# 2. Configuration du produit

<span style="color: rgb(255, 76, 65);">**Attention**</span>: Retirez les films minces des cartes avant d'installer ce robot. Notez que l'angle initial du servo doit être réglé pendant l'installation.

![](./media/image-20250709092645945.png)

 **Étape 1**

Outils nécessaires:

![](./media/image-20250709102252976.png)

![](./media/image-20250709092722839.png)

![](./media/image-20250709092738119.png)

<span style="color: rgb(255, 76, 65); font-size: 16px;">**Note:** Faites attention au sens d'installation des roues. Le côté épais doit être à l'extérieur.</span>

![](./media/image-20250709092816744.png)

![](./media/image-20250709092828746.png)

 **Étape 2**

![](./media/image-20250709093034445.png)

Les roues et les chenilles doivent être installées. Ensuite, montez-les simultanément sur le corps de la voiture. Sinon, les chenilles ne peuvent pas être installées.

![](./media/image-20250709093056711.png)

![](./media/image-20250709093110898.png)

**Note:** Faites attention à l'endroit où les roues sont montées sur les chenilles.

![](./media/image-20250709093130989.png)

![](./media/image-20250709093205374.png)

 **Étape 3**

![](./media/image-20250709093225354.png)

![](./media/image-20250709093234885.png)

![](./media/image-20250709093246548.png)

**Note:** Veuillez câbler d'abord.

![](./media/image-20250709093344681.png)

![](./media/image-20250709093353998.png)

![](./media/image-20250709093404201.png)

![](./media/image-20250709093423158.png)

![](./media/image-20250709093449028.png)

**Étape 4**

![](./media/image-20250709093522583.png)

![](./media/image-20250709093533500.png)

![](./media/image-20250709093547507.png)

**Étape 5**

![](./media/image-20250709093644514.png)

![](./media/image-20250709093657252.png)

![](./media/image-20250709093847892.png)

 **Étape 6**

![](./media/image-20250709093916149.png)

![](./media/image-20250709093926354.png)

![](./media/image-20250709093939255.png)

**Étape 7**

![](./media/image-20250709094006571.png)

<span style="color: rgb(255, 76, 65);">**Note:** Faites attention au sens des cavaliers.</span>

![](./media/image-20250709094035675.png)

![](./media/image-20250709094048424.png)

 **Étape 8**

![](./media/image-20250709094212254.png)

![](./media/image-20250709094749158.png)

![](./media/image-20250709094802015.png)

**Étape 9**

![](./media/image-20250709094906387.png)

![](./media/image-20250709094915724.png)

![](./media/image-20250709094931895.png)

**Étape 10**

(Besoin d'ajuster l'angle du servo)

![](./media/image-20250709095001492.png)

![](./media/image-20250709095028698.png)

**Réglez l'angle du servo à 90°**

Pour ajuster le code du servo, veuillez sélectionner le code correspondant selon le cours.

1.**Arduino:** Téléchargez le fichier de code:[Arduino](./Arduino.7z)

![](./media/image-20250710110650230.png)

2.**Kidsblock:** Téléchargez le fichier de code:[Kidsblock](./Kidsblock.7z)

![](./media/image-20250710110906515.png)

**Après avoir initialisé l'angle du servo, installez le module Bluetooth.**

Gardez le capteur à ultrasons parallèle à la carte.

![](./media/image-20250709095254305.png)

![](./media/image-20250709095307371.png)

 **Étape 11**

![](./media/image-20250709095338636.png)

![](./media/image-20250709095354728.png)

![](./media/image-20250709095428457.png)



**Étape 12**

![](./media/image-20250709095454717.png)

![](./media/image-20250709095512833.png)

![](./media/image-20250709095524456.png)

**Câblage**

Pour le panneau LED 8*16, connectez les fils à A4 et A5.

![](./media/image-20250709095552072.png)

![](./media/image-20250709095606248.png)

![](./media/image-20250709095643567.png)

Connectez le moteur A au port A et le moteur B au port B.

![](./media/image-20250709095728739.png)

![](./media/image-20250709095740866.png)

Connectez le fil d'alimentation.

![](./media/image-20250709095759390.png)

![](./media/image-20250709095811580.png)

Capteur de suivi de ligne (voir l'image):

![](./media/image-20250709095830428.png)

![](./media/image-20250709095848550.png)

![](./media/image-20250709095901776.png)

![](./media/image-20250709095911639.png)

Câblez les photorésistances:

![](./media/image-20250709095929779.png)

![](./media/image-20250709095939414.png)

| Photorésistance | Carte Keyestudio 8833 |
| :-----------: | :-------------------: |
|       G       |           G           |
|       V       |           V           |
|       s       |          A1           |

![](./media/image-20250709100043670.png)

| Photorésistance | Carte Keyestudio 8833 |
| :-----------: | :--------------------: |
|       G       |           G            |
|       V       |           V            |
|       S       |           V2           |

Câblez le capteur à ultrasons:

![](./media/image-20250709100317508.png)

![](./media/image-20250709100329430.png)

| Capteur à ultrasons | Carte Keyestudio 8833 |
| :---------------: | :-------------------: |
|        Vcc        |           V           |
|       Trig        |          D12          |
|       Echo        |          D13          |
|        Gnd        |           G           |

Câblez le servo (D10):

![](./media/image-20250709100626238.png)

| Servo  | Carte Keyestudio 8833 |
| :----: | :-------------------: |
| Marron  |           G           |
|  Rouge   |         V(5V)         |
| Orange |          D10          |

<span style="color: rgb(255, 76, 65);">**Nous adoptons une batterie au lithium modèle 18650 avec un pôle positif pointu, dont la puissance et la capacité ne sont pas requises.**</span>

![](./media/image-20250709100841625.png)

