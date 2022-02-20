# CASE STUDY
# 1. Washing Machine 

![washingmachinecasestudy](https://user-images.githubusercontent.com/46933088/154832811-38b648c1-d43a-43df-992a-5666960c56f6.png)

## High level Requirements
* H01 User should select the mode i.e type of washing for cotton or silk etc.
* H02 User should lock the Door Properly so that machine starts.
* H03 User should select the start option.
* H04 If user has selected Warm water as option so the heater should turn on.
* H05 At particular temperature it should turn off and send hot water to the  washing drum. 
* H06 Water level should be sensed and stop after required amount of water is taken.
* H07 Motor starts working untill the process is complete.

## Low level Requirements
* L01 Detergent is put in the given slot and closed.
* L02 Water valve is opened to allow water into Washing Drum.
* L03 Water to be drained after the process is complete.
* L04 Buzzer should give indication once the total process is completed.
* L05 Open the door after the process is completed.

## Components

## Powersupply
In the power supply step down transformer is used to reduce the necessary voltage for the contro unit and other components.

## Motor Driver
The motor can be used for spinning the drum both in forward and reverse direction.

## LCD Display
It is used to know in which mode should machine work for example cotton mode or silk mode etc.

## Microcontroller
Microcontroller is used to control the process of washimg machine cycle to drive the external output devices such as Water inlet valve, water drain valve etc.

# 2. Coffee Vending Machine

![coffeemachine](https://user-images.githubusercontent.com/46933088/154834811-cafde815-77ff-455a-8bbe-d6411bc89f2d.png)

## High level Requirements

* H01 User should Select the type of coffee like Filter coffee or Normal Coffee.
* H03 User should make sure Water is filled before starting.
* H04 User should make sure Coffee powder and Sugar are placed in Particular Space given. 
* H02 USer should make sure Power is turned ON.

## Low level Requirements
* L01 User should Place cup below the nob.
* L02 Once Cup is filled it should Notifiy using Buzzer.

## Components

## Powersupply
LCD, IR operate on 5Volt DC Supply.To drive the AC motor and heater we require 230 Volt, 50 Hz supply.

## LCD Display
It is used to know which option we have selected (for example You have selected for Filter coffee). 

## Microcontroller
Microcontroller is used to control the process of washimg machine cycle to drive the external output devices such as Water inlet valve, water drain valve etc.

## IR sensor 
A proximity sensor is used to detect any object without any contact(object in this case is Cup).

## EPROM 
An EPROM or erasable programmable read only memory is type of memory chip that retains its data when its power supply is switched off. Eachstorage location of EPROM consists of single field effect transistor. Each field effect transistor consists of channel in the semiconductor body of device. To retrieve data from the EPROM,the address represented by the values at the address pins of the EPROM is decoded and used to connect one word of the storage to the output buffer amplifier. The EPROM is used to store the data regarding the consumption of coffee by each employ.