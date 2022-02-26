# **password protected door loack system** #

##  content

| sr. no.            | Title                                                                                                 |
| :------------------ | :-------------------------------------------------------------------------------------------------------------- |
| 0      |  CONTENT                                                                    |
| 1      | INTRODUCTION  |
| 2     |  Block diagram                                                                      |
| 3   |                 Identifying features                                                                            |
| 4|    State of art/ Research                                                                           |
| 5          |  Requirnments                                                                                              |   
| 6        | 5 W's and 1H  |
| 7 |          SWOT ANALYSIS       |
| 8|Behavioral diagram|
| 9|structural diagram|
| 10|Components Used|
| 11|Test plan|
## INTRODUCTION
  * Many times, we forgot to carry the key of our home. Or sometimes we come out of our home and door latch closes by mistake. In these cases, it is really difficult to get inside the house. This project is designed to solve this purpose. Main concept behind this project is of a door-latch opening using a password entered through keypad. As well as turning on the Buzzer when password is entered wrong. Today people are facing more problems about security in all over world, nowadays security is the most
essential issue everywhere in the world so security of everything gains higher and higher importance in recent years. The main component in the circuit is 8051 microcontrollers. Here, 4*4 keypad is used to enter the password. The entered password is compared with the predefined password. If it is correct password, the
system opens the door by rotating door motor and displays the status of door on LCD. If the password is wrong then door remains closed and displays ―password
is wrong on LCD. It can be used at organizations to ensure authorized access to highly secured places. With a slight modification by replacing the motor driver with a relay driver, this circuit can be used to control the switching of loads through code. This circuit can be also modified by using EEPROM chip interfaced to the microcontroller and store the entered password in the chip. Such an automatic lock system consists of electronic control assembly which controls the output load through a password. This output load can be a motor or a lamp or any other mechanical/electrical load.
## Block diagram
![Microcontroller based Door lock](https://user-images.githubusercontent.com/98838252/155738896-63c8769b-eabb-4b7d-9cb2-e6147f2f9619.jpg)

## Identifying features
   * Screen guides how to enter the password.
   * secure
   * easy to use
   * No crashing happens so that work can be done without any breaks.
## State of art/ Research
    * we need door lock system for securty purposes.


## Requirnments for this project are
    
    * hardware requirnments
        * microcontroller
        * stepper motor
        * keypad
        * buzzer
        * lcd display
        * motor driver controller
        * power source, etc
    
   * HLR and LLR 
    
## High Level Requirements 
|  | High Level Requirements |
|:----|-------------------------|
| HLR1 |	System shall control Door locks by pressing a number on Keypad |
| HLR2 |	There shall be a LCD to display the numbers we press |
| HLR3 |	A password shall be provided for our system |

## Low Level Requirements
|  |Low Level Requirements |
|:----|-------------------------|
| |	Low Level Requirements for HL1	 |
| LLR1.1 |	According to the values of Keypad door locks shall be controlled		 |
| LLR1.2 |	there shall be a sound output for the door lock |	 |
||	Low Level Requirements for HL2 |
|LLR2.1|	Entered value on keypad shall be displayed on LCD Screen|
|LLR2.2 |whether the door is locked or not shall be displayed on screen|
|  |	Low Level Requirements for HL3		|
| LLR3.1|	Device shall open the door lock when the Password is matched		 |
| LLR3.2	|Device shall ask to Re-Enter the Password again if entered one is wrong		 |

## 5 W's and 1H

![Untitled](https://user-images.githubusercontent.com/98838252/155832029-19cdb5eb-2e56-4b7a-8d3d-83cf0ec14cbf.png)

   

## SWOT ANALYSIS
  
  ![secure easy to use](https://user-images.githubusercontent.com/98838252/154832932-4fa8d460-b509-4033-8ea6-4c391959d7f5.jpg)


## Behavioral diagram
### High level behavioral diagram
![behavioral diagram (1)](https://user-images.githubusercontent.com/98838252/155833123-ef0b2bc0-0a70-493b-9bec-2d932512e8ac.jpeg)

### Low level behavioral diagram
![ll behavioral diagram](https://user-images.githubusercontent.com/98838252/155833666-07662b30-f00b-4cfa-9330-84198ed1d6d4.jpeg)

## structural diagram
  ## High level UML use case
![HL UML](https://user-images.githubusercontent.com/98838252/155834769-17e27422-8661-4892-81ec-55e0fd8d0aca.png)






## Components Used
### Kaypad

It is customizable in size ( rows and columns ) and key labels.
By default it is an standard 12 keys; 4 rows, 3 Cols.

More Info:
 http://simulide.blogspot.com/p/blog-page_22.html

![kaypad](https://user-images.githubusercontent.com/98838252/155747679-a49f537e-ab30-45db-ab38-4c0dcfe93840.png)

## Atmega 328
 ### Package: 28-pin-PDIP

* 1: Reset
* 2: PD0 RXD0   PCINT16
* 3: PD1 TXD0   PCINT17
* 4: PD2 INT0   PCINT18
* 5: PD3 INT1   OC2B    PCINT19
* 6: PD4 T0     XCK0    PCINT20
* 7: Vcc
* 8: Gnd
* 9: PB6 TOSC1  XTAL1   PCINT6
* 10: PB7 TOSC2  XTAL2   PCINT7
* 11: PD5 T1     OC0B    PCINT21
* 12: PD6 AIN0   OC0A    PCINT22
* 13: PD7 AIN1   PCINT23
* 14: PB0 ICP1   CLKO    PCINT0
* 15: PB1 OC1A   PCINT1
* 16: PB2 !SS    OC1B    PCINT2
* 17: PB3 MOSI   OC2A    PCINT3
* 18: PB4 MISO   PCINT4
* 19: PB5 USCK   PCINT5
* 20: AVCC
* 21: AREF
* 22: Gnd
* 23: PC0 ADC0   PCINT8
* 24: PC1 ADC1   PCINT9
* 25: PC2 ADC2   PCINT10
* 26: PC3 ADC3   PCINT11
* 27: PC4 ADC4   SDA     PCINT12
* 28: PC5 ADC5   SCL     PCINT13

### Summary:
* The high-performance Microchip picoPower 8-bit AVR RISC-based microcontroller
* 32 KB ISP flash memory with read-while-write capabilities,
* 1024 B EEPROM,
* 2 KB SRAM,
* 23 general purpose I/O lines,
* 32 general purpose working registers,
* 2 x 8-bit, 1 x 16-bit timer/counters with compare modes,
* 6-channel PWM,
* 1 comparators,
* internal and external interrupts,
* 1 serial programmable USART,
* 1 byte-oriented 2-wire serial interface,
* 1 SPI serial port,
* 6-channel 10-bit A/D converter,
* programmable watchdog timer with internal oscillator,
* 5  software selectable power saving modes.
* The device operates between 1.8-5.5 volts.

![Screenshot 2022-02-25 213212](https://user-images.githubusercontent.com/98838252/155747736-672602ae-33f8-44ca-8567-3e2391b85444.png)

## Stepper motor
Step by step Motor.

- Configurable number of steps per revolution.
- Configurable coil resistance.

For simplicity and speed, Motor Coils are modelled as resistors.

![stepper](https://user-images.githubusercontent.com/98838252/155747798-3f268b58-4874-468d-8fd2-e2a36de71243.png)

## Speaker
Connection to default audio output in you machine.

If no default audio device is found, you will se an "X" in the symbol.

![buzzer](https://user-images.githubusercontent.com/98838252/155747860-17082cf2-f1d4-4e5b-825c-9085e6f42427.png)

## Display
HD44780 LCD:

5x8 dot-matrix liquid crystal display based on Hitachi HD44780 LCD controller.

Configurable in characters rows and columns.

![display](https://user-images.githubusercontent.com/98838252/155747953-a7af087e-57d2-4255-8a05-b2334af4e246.png)

## Test plan
### HIGH LEVEL TEST PLAN

| Test no. | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 1 | Keypad | * | Goto reset password | --- | To be Done |
| 2 | Keypad | # | Goto change password | --- | To be Done |
| 3 | Password input from keypad | 1234 | Show door unlocked on display and unlock the door | --- | To be Done |
| 4 | Password input from keypad | 1111 | Show wrong password  and door does not unlocked on display and do not unlock the door | --- | To be Done |


### LOW LEVEL TEST PLAN
####  LCD/Keypad Configuration Test

| Test no. | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Keypad | 1 | Display 1 on lcd | --- | To be Done |
| 02 | Keypad | 2 | Display 2 on lcd | --- | To be Done |
| 03 | Keypad | 3 | Display 3 on lcd | --- | To be Done |
| 04 | Keypad | 4 | Display 4 on lcd | --- | To be Done |
| 05 | Keypad | 5 | Display 5 on lcd | --- | To be Done |
| 06 | Keypad | 6 | Display 6 on lcd | --- | To be Done |
| 07 | Keypad | 7 | Display 7 on lcd | --- | To be Done |
| 08 | Keypad | 8 | Display 8 on lcd | --- | To be Done |
| 09 | Keypad | 9 | Display 9 on lcd | --- | To be Done |
| 10 | Keypad | 0 | Display 0 on lcd | --- | To be Done |
| 11 | Keypad | * | Display * on lcd | --- | To be Done |
| 12 | Keypad | # | Display # on lcd | --- | To be Done |

#### Motor/Actuator Test

| Test no. | Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for right password | 1234 | Stepper motor rotates clockwise |  To be done | To be done |
| 02 | Check for wrong password | 0000 | Stepper motor does not ratate |  To be done | To be done |
| 03 | Check for door lock button | Door lock switch | Stepper motor rotates anti clockwise |  To be done | To be done |




        

