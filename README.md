# Advanced AC/AC Power Converter

Single-phase to single-phase AC/AC Power Converter laboratory prototype hardware design and drive.

A new generalized step-down single-stage line-frequency switching AC/AC power converter topology is presented here. The converter uses line-frequency switching and does not require any pulse width modulation techniques. The  topology offers promising performances in terms of lower order harmonics, total harmonic distortion, elimination of DC-link capacitors and EMI filters, and switching losses.
The major contributions of this article are:	
        
      1. A new single-stage line-frequency switching AC/AC power converter is proposed;
      2. The proposed converter can be used to convert any frequency without changing the hardware circuit;
      3. The proposed topology does not require any high-frequency switching pulse width modulation technique.

### Circuit Diagram
The following figure shows the single-phase to single-phase AC/AC Power Converter circuit topology. It uses a multi-winding center tapped transformer, pre-rectified diodes and silicon controlled rectifiers (SCRs). The multi-winding transformer is used here to create different voltage level according to the desired frequency conversion with lower THD.


<img src="Images/image-1.png" width="600" height="500">

## Operating Principle
The operating principle of the AC/AC power converter topology is described here with the help of 3:1 (m=3) and 4:1 (m=4) frequency conversion. By connecting the multi-winding center tapped transformer with the AC voltage source, the input AC voltage is divided into small AC voltage levels in a different section of winding. Power diodes are used as a pre-rectifier, which rectifies both the positive cycle and the negative cycle for each section of winding. Hence, only one unidirectional switch is required for each winding to pass the corresponding positive cycle and the negative cycle. The odd numbering switches work as the positive converter, and the even numbering switches work as the negative converter. There are eight operating modes as shown in the following Figure, to describe the working principle of the 3:1 (m=3) and 4:1 (m=4) frequency conversion. The explanation of the eight operating modes helps to understand other frequency conversions also. 

<img src="Images/image-2.png">


