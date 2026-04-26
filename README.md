# Freefall
a PCB with an accelerometer… (built with help from https://hermes.hackclub.com/!)
<br/> About the folders: /code has all the code, /prod has all the production files!

<br/>
<img width="679" height="606" alt="model of PCB" src="https://github.com/user-attachments/assets/010a3723-65d9-4cca-bf80-69128ab92438" />
<br/>
<img width="645" height="470" alt="Schematicss" src="https://github.com/user-attachments/assets/ac56ad0b-9324-4079-b843-ac10dfd4243d" />
<br/>
<img width="382" height="587" alt="pcb editor" src="https://github.com/user-attachments/assets/ce6a40b1-c17d-486b-b622-f04ed40a0a62" />

<br/>
<br/>
The idea is, each LED is linked to a specific direction. For example, left is the first LED, up is the second LED and so on. By 'entering' a the directions into the PCB, you find the combination of directions that make up a certain code!
<br/> note: PCB models are in pcb/kicad! other 3D models that were used were not sourced by me :)
<br/> The motivation for this project was mainly to work more on my PCB skills, as well as my ability to read through documentation of a component and get the addresses right. I think that adding the 'code' feature with the lights was also a fun thing I just wanted to add.
<br/>
<br/>
<br/>
<br/>23/04/2026:
<br/>
_Each LED is linked to a specific direction. For example, left is the first LED, up is the second LED and so on. By 'entering' a the directions into the PCB, you find the combination of directions that make up a certain code!
Hopefully I actually find out how to code that… but as long as I can somehow find the right hex address for the outputs, I should be okay. (I hope?) I have got some of the basic code down… the addresses are tweaked for the accelerometer and OLED screen._


<br/>
<br/>
<br/>
In terms of code, I haven't fully done the firmware as I don't have the actual thing yet, but here's a guide for setting up the XIAO_RP2040 with Arduino: https://wiki.seeedstudio.com/XIAO-RP2040-with-Arduino/
The firmware I've added is in progress as of now (26/04/26) and I will add setup steps in the future, when I have the physical PCB itself.
<br/>
Wiring:
LED1 = D0
LED2 = D1
LED3 = D2
LED4 = D3
Accelerometer & Screen = [various, see schematics]


<br/>
<img width="540" height="828" alt="freefallZinee" src="https://github.com/user-attachments/assets/9518886b-4c16-447d-8bfc-21834185fd5c" />



<br/>
<br/>
PCB BOM:
<br/>
<br/>
<br/>

| Reference  | Qty | Value | links I found|
| ------------- | ------------- | ------------- | ------------- |
| U2  | 1 | Seeed Studio XIAO RP2040 | https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html?srsltid=AfmBOor69gTiD1i0IEN-NgJbt-CYkVZTgTP96P1gkFrOACfPGnEJtVJv / microcontroller board |
| D1, D2, D3, D4  | 4 | LED / L08R5000Q1 | [link](https://jlcpcb.com/parts/2nd/Optoelectronics/LED_Indication_Discrete_71) |
| R1, R2, R3, R4  | 4 | resistor | [link](https://jlcpcb.com/parts/1st/Resistors_1) |
| DS1  | 1 | OLED screen / OLED_128x64_1.3_12C | [link](https://thepihut.com/products/1-3-oled-display-module-128x64?srsltid=AfmBOopDl8PFs2033S-2AllyyVgorweV5rvh_8Nz7fI1gCvMHYW_bYbc) |
| U1  | 1 | Accelerometer / MMA8452QR1 | [link](https://www.mouser.co.uk/ProductDetail/STMicroelectronics/MMA8452QR1?qs=nf24X8JpkflP9lEXYucw7A%3D%3D&srsltid=AfmBOopwflme1FghpKhdfCMTg39rWwrrPKN7EFidPL_As-lnLXidkf6g) |

<br/> planning to source from JLCPCB (apologies if the BOM is wrong, I'm new to this)
