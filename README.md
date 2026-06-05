# Freefall
a PCB with an accelerometer… (built with help from https://hermes.hackclub.com/!)
<br/> About the folders: /code has all the code, /prod has all the production files!
<br/> 3d models are in pcb/3dmodels
<br/>
<br/>
The idea is, each LED is linked to a specific direction. For example, left is the first LED, up is the second LED and so on. By 'entering' a the directions into the PCB, you find the combination of directions that make up a certain code!
<br/> note: PCB models are in pcb/kicad! other 3D models that were used were not sourced by me :)
<br/>
<br/> The motivation for this project was mainly to work more on my PCB skills, as well as my ability to read through documentation of a component and get the addresses right. I think that adding the 'code' feature with the lights was also a fun thing I just wanted to add.
<br/>
In terms of code, I haven't fully done the firmware as I don't have the actual thing yet, but here's a guide for setting up the XIAO_RP2040 with Arduino: https://wiki.seeedstudio.com/XIAO-RP2040-with-Arduino/
The firmware I've added is in progress as of now (26/04/26) and I will add setup steps in the future, when I have the physical PCB itself.
<br/>
<br/> image of PCB:
<br/>
<img width="398" height="512" alt="screenshot of 3dD" src="https://github.com/user-attachments/assets/be3b443d-66d2-4238-ab93-a60a3ebd50c0" />
<br/> schematics:
<br/>
<img width="645" height="470" alt="Schematicss" src="https://github.com/user-attachments/assets/ac56ad0b-9324-4079-b843-ac10dfd4243d" />
<br/> pcb editor/wiring:
<br/>
<img width="390" height="641" alt="pcb" src="https://github.com/user-attachments/assets/111a43c1-ad11-4c0e-b12b-83bcec5047ff" />
<br/>
<br/>
# Setup:
<br/> Wiring:
<br/>LED1 = D0
<br/>LED2 = D1
<br/>LED3 = D2
<br/>LED4 = D3
<br/>Accelerometer & Screen = [various, see schematics]

<br/>
# Assembly instructions, for now:
<br/>~ Solder these things onto the PCB, according to the schematics:
<br/>~ - XIAO_RP_2040
<br/>~ - four LEDs
<br/>~ - four resistors
<br/>~ - OLED screen
<br/>~ - Accelerometer
<br/>~ After this, connect the board to the power, this link could help: https://wiki.seeedstudio.com/XIAO-RP2040-with-Arduino/

<br/>also Flash instructions:
<br/> - install ArduinoIDE, https://docs.arduino.cc/software/ide/
<br/> - add the support for the RP2040 (Preferences > Additional Board Manager URLs > "https://github.com/earlephilhower/arduino-pico/releases/download/global/package_rp2040_index.json")
<br/> - connect the XIAO RP_2040 via USB
<br/> - upload the code from this repo in /firmware!


<br/>
[freefall.pdf](https://github.com/user-attachments/files/28647639/freefall.pdf)
<img width="540" height="828" alt="freefall" src="https://github.com/user-attachments/assets/82e6bbed-188a-483e-949b-12d4693d2068" />

<br/>
<br/>
PCB BOM:
<br/>
<br/>
<br/>

| Reference  | Qty | Value | approx price in USD | purchase links found|
| ------------- | ------------- | ------------- | ------------- | ------------- |
| U2  | 1 | Seeed Studio XIAO RP2040 | $ 3.9 | https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html?srsltid=AfmBOor69gTiD1i0IEN-NgJbt-CYkVZTgTP96P1gkFrOACfPGnEJtVJv / microcontroller board |
| D1, D2, D3, D4  | 4 | LED / L08R5000Q1 | $ 0.1 | [link](https://jlcpcb.com/parts/2nd/Optoelectronics/LED_Indication_Discrete_71) |
| R1, R2, R3, R4  | 4 | resistor | $ 0.01 | [link](https://jlcpcb.com/parts/1st/Resistors_1) |
| DS1  | 1 | OLED screen / OLED_128x64_1.3_12C | $ 7.2 | [link](https://thepihut.com/products/1-3-oled-display-module-128x64?srsltid=AfmBOopDl8PFs2033S-2AllyyVgorweV5rvh_8Nz7fI1gCvMHYW_bYbc) |
| U1  | 1 | Accelerometer / MMA8452QR1 | $ 4.8 | [link](https://www.mouser.co.uk/ProductDetail/STMicroelectronics/MMA8452QR1?qs=nf24X8JpkflP9lEXYucw7A%3D%3D&srsltid=AfmBOopwflme1FghpKhdfCMTg39rWwrrPKN7EFidPL_As-lnLXidkf6g) or [link](https://dratek.cz/arduino-platforma/830-iic-i2c-gyroskop-akcelerometr-modul-mpu-6050.html?gad_source=5&gad_campaignid=21656222776&gclid=EAIaIQobChMIpercyOe9lAMVa6WDBx3s1iCOEAQYASABEgKLdPD_BwE) |
|   |  |  | total cost $12.5, with JLCPCB cost ~ 15.5 USD depending on where you live |  |

| Designator         | Footprint         | Quantity | Approx. Price (USD) | Part / Designation | Link |
|--------------------|-------------------|----------|---------------------|--------------------|------|
| D1, D2, D3, D4     | LEDRD254W57L (LEDs)     | 4        | $3.90               | L08R5000Q1         | https://jlcpcb.com/parts/2nd/Optoelectronics/LED_Indication_Discrete_71 |
| DS1                | LCD_OLED_128 (OLED screen)     | 1        | $0.10               | OLED_128X64        | https://thepihut.com/products/1-3-oled-display-module-128x64 |
| R1, R2, R3, R4     | R_Axial_DIN020 (resistors)   | 4        | $0.01               | R                  | https://jlcpcb.com/parts/1st/Resistors_1 |
| U1                 | PQFN50P300X3 (accelerometer)      | 1        | $7.20               | MMA8452QR1         | https://www.mouser.co.uk/ProductDetail/STMicroelectronics/MMA8452QR1 |
| U2                 | XIAO-RP2040-D     | 1        | $4.80               | XIAO-RP2040-D      | https://www.seeedstudio.com/XIAO-RP2040-v1-0-p-5026.html |

<br/> planning to source from JLCPCB (apologies if the BOM is wrong, I'm new to this)
