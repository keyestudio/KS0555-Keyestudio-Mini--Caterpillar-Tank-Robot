# 2. Configurazione del prodotto

<span style="color: rgb(255, 76, 65);">**Attenzione**</span>: Rimuovere le pellicole sottili dalle schede prima di installare questo robot. Si noti che l'angolo iniziale del servo deve essere impostato durante l'installazione.

![](./media/image-20250709092645945.png)

 **Passo 1**

Strumenti necessari:

![](./media/image-20250709102252976.png)

![](./media/image-20250709092722839.png)

![](./media/image-20250709092738119.png)

<span style="color: rgb(255, 76, 65); font-size: 16px;">**Nota:** Prestare attenzione alla direzione di installazione delle ruote. Il lato spesso deve essere all'esterno.</span>

![](./media/image-20250709092816744.png)

![](./media/image-20250709092828746.png)

 **Passo 2**

![](./media/image-20250709093034445.png)

Le ruote e i cingoli devono essere installati. Quindi montarli contemporaneamente sul corpo dell'auto. Altrimenti i cingoli non possono essere installati.

![](./media/image-20250709093056711.png)

![](./media/image-20250709093110898.png)

**Nota:** Prestare attenzione a dove le ruote sono montate sui cingoli.

![](./media/image-20250709093130989.png)

![](./media/image-20250709093205374.png)

 **Passo 3**

![](./media/image-20250709093225354.png)

![](./media/image-20250709093234885.png)

![](./media/image-20250709093246548.png)

**Nota:** Si prega di cablare prima.

![](./media/image-20250709093344681.png)

![](./media/image-20250709093353998.png)

![](./media/image-20250709093404201.png)

![](./media/image-20250709093423158.png)

![](./media/image-20250709093449028.png)

**Passo 4**

![](./media/image-20250709093522583.png)

![](./media/image-20250709093533500.png)

![](./media/image-20250709093547507.png)

**Passo 5**

![](./media/image-20250709093644514.png)

![](./media/image-20250709093657252.png)

![](./media/image-20250709093847892.png)

 **Passo 6**

![](./media/image-20250709093916149.png)

![](./media/image-20250709093926354.png)

![](./media/image-20250709093939255.png)

**Passo 7**

![](./media/image-20250709094006571.png)

<span style="color: rgb(255, 76, 65);">**Nota:** Prestare attenzione alla direzione dei cappucci dei ponticelli.</span>

![](./media/image-20250709094035675.png)

![](./media/image-20250709094048424.png)

 **Passo 8**

![](./media/image-20250709094212254.png)

![](./media/image-20250709094749158.png)

![](./media/image-20250709094802015.png)

**Passo 9**

![](./media/image-20250709094906387.png)

![](./media/image-20250709094915724.png)

![](./media/image-20250709094931895.png)

**Passo 10**

(È necessario regolare l'angolo del servo)

![](./media/image-20250709095001492.png)

![](./media/image-20250709095028698.png)

**Impostare l'angolo del servo a 90°**

Per regolare il codice del servo, selezionare il codice corrispondente in base al corso.

1.**Arduino:** Scarica il file del codice:[Arduino](./Arduino.7z)

![](./media/image-20250710110650230.png)

2.**Kidsblock:** Scarica il file del codice:[Kidsblock](./Kidsblock.7z)

![](./media/image-20250710110906515.png)

**Dopo aver inizializzato l'angolo del servo, installare il modulo Bluetooth.**

Mantenere il sensore ultrasonico parallelo alla scheda.

![](./media/image-20250709095254305.png)

![](./media/image-20250709095307371.png)

 **Passo 11**

![](./media/image-20250709095338636.png)

![](./media/image-20250709095354728.png)

![](./media/image-20250709095428457.png)



**Passo 12**

![](./media/image-20250709095454717.png)

![](./media/image-20250709095512833.png)

![](./media/image-20250709095524456.png)

**Cablaggio**

Per il pannello LED 8*16, collegare i fili ad A4 e A5.

![](./media/image-20250709095552072.png)

![](./media/image-20250709095606248.png)

![](./media/image-20250709095643567.png)

Collegare il motore A alla porta A e il motore B alla porta B.

![](./media/image-20250709095728739.png)

![](./media/image-20250709095740866.png)

Collegare il cavo di alimentazione.

![](./media/image-20250709095759390.png)

![](./media/image-20250709095811580.png)

Sensore di tracciamento linea (vedi immagine):

![](./media/image-20250709095830428.png)

![](./media/image-20250709095848550.png)

![](./media/image-20250709095901776.png)

![](./media/image-20250709095911639.png)

Cablare i fotoresistori:

![](./media/image-20250709095929779.png)

![](./media/image-20250709095939414.png)

| Fotoresistore | Scheda Keyestudio 8833 |
| :-----------: | :-------------------: |
|       G       |           G           |
|       V       |           V           |
|       s       |          A1           |

![](./media/image-20250709100043670.png)

| Fotoresistore | Scheda Keyestudio 8833 |
| :-----------: | :--------------------: |
|       G       |           G            |
|       V       |           V            |
|       S       |           V2           |

Cablare il sensore ultrasonico:

![](./media/image-20250709100317508.png)

![](./media/image-20250709100329430.png)

| Sensore ultrasonico | Scheda Keyestudio 8833 |
| :---------------: | :-------------------: |
|        Vcc        |           V           |
|       Trig        |          D12          |
|       Echo        |          D13          |
|        Gnd        |           G           |

Cablare il servo (D10):

![](./media/image-20250709100626238.png)

| Servo  | Scheda Keyestudio 8833 |
| :----: | :-------------------: |
| Marrone  |           G           |
|  Rosso   |         V(5V)         |
| Arancione |          D10          |

<span style="color: rgb(255, 76, 65);">**Adottiamo una batteria al litio modello 18650 con polo positivo appuntito, la cui potenza e capacità non sono richieste.**</span>

![](./media/image-20250709100841625.png)
