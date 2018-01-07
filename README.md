# PathFinder

## Purpose

The innovation project is a third year project at the school Cesi.Exia.
We had to find an innovating idea and make a prototype of it with a documentation and an explanation of the tests.

## Our idea

### Concept

After a long search, we finally found the Pathfinder concept.
A beacon is placed, it transmits a message with his location to a bracelet own by a user.
This bracelet have a screen wich indicate the direction of the beacon with an arrow.
Then the user can simply walk to it.

### Business model

#### Target

The business model of our product has a large affect zone. But the most important way to use it is outside (cause of the Wi-fi communication for indoor use). So any outside activies can use this product.<br/>
By the way, our product is useless for a particular but more adapted for company or group.
The target person is a commercial of a company for hiking for example or a shcool (see Use Case part).

#### Cost/Utility

The final product will not cost a lot. The different components that define our product are not expensive.
In fact for the bracelet and the beacon we need :
* 1 screen
* 2 GPS
* 2 transmitter
* 1 gyroscope
* Batteries
* 2 mini-arduino
* a support

The total ammount is less than 55 €<br/>
So for that price, you can equip your society with a lot of Pathfinder.<br/>
And the bracelets and beacons are reusable, an unlimited times.

### Use case

Either you are in a park, forest or montain, you can put a beacon where the person can go to see a beautiful view or make a parkour. And if a person is lost, he can watch is bracelet and come back to the beacon. This use case is more toursit friendly but it can be use also for shcool trip.<br/>
The teacher has a beacon, so the students who wander a bit far from the group won't hae to worry getting lot because they will only need to check their wrist to find their way back.<br/>
Finally, a person reached by a disease or a disability can wear a beacon or bracelet to let other people know where to find him in case of a problem or emergency.

## Project management

### PBS

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/Innovation%20-%20PBS.png "PBS")

### WBS

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/Innovation%20-%20WBS.png "WBS")

### PERT

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/Innovation%20PERT.png "PERT")

## Test

### Nokia 511 screen test

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/Nokia%20511.png "Nokia 511")

#### Specification

The Nokia 511 screen can show text and image. It is used to display the directions to follow on the bracelet for the user.
An other characteristic is that it has lights on both sides, so the user can use it eihter during the day or the night.

#### Connection

The screen has at least 5 pin that we must connect to a digital Arduino Pin. The rightest pin is for the alimentation of the led (3.3V). And, in the end, we have the VCC (3.3V) and Ground pin on the left.

#### Code

To display a simple text on the screen, it is quite simple. <br/>
First, you have to initialize the resolution of the screen on the setup : <br/>
> lcd.begin(84, 48);

And then you just have to set the cursor on the screen and print your text :
>lcd.setCursor(0, 0); <br/>
>lcd.print("Is alive !");

But, to display an image, it's more difficult. <br/>
With a tab of hexa data, we can fill the pixel we want. Like with 0x12, we will fill pixel 2 and 16 (rember it's hexa so 0x10 have value 16). So by creating the lines, we can draw an image. <br/>
Then you have to build it on the setup :
> lcd.createChar(0, NameOfTheTab);

And simply write it :

> lcd.write(NumberOfTheImage) // Currently 0

### Gyroscope MPU-6050

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/MPU-6050.png "MPU 6050")

#### Specification

The MPU-6050 sensor contains a accelerometer and a gyro in a single chip. It is very accurate, as it contains 16-bits analog to digital conversion hardware for each channel. Therefor it captures the x, y, and z channel at the same time. The sensor uses the I2C-bus to interface with the Arduino.

As the MPU-6050 is not expensive and combines both an accelerometer and a gyro, it was selected for the project thanks to its qualities.

### GPS NEO-6M

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/NEO-6M.jpg "GPS")

#### Specification

The NEO-6M GPS module is a well-performing complete GPS receiver, which provides a strong satellite search capability. With the power and signal indicators, you can monitor the status of the module. Thanks to the data backup battery, the module can save the data when the main power is shut down accidentally. Its 3mm mounting holes can ensure easy assembly on your aircraft, which thus can fly steadily at a fixed position, return to Home automatically, and automatic waypoint flying, etc. Or you can apply it on your smart robot car for automatic returning or heading to a certain destination, making it a real "smart" bot!

#### Connection

##### Prerequisites

* NEO-6M GPS Module
* Arduino Uno Board and USB
* Female-Male Jumper Wire

##### Connection of Arduino UNO and GPS module

Connect the four pins from UBLOX to an Arduino as follows:

*	Ublox - Arduino
*	GND - GND
*	TX - Digital pin (D3)
*	RX - Digital pin (D4)
*	Vcc - 5Vdc


#### Code

This code sends all strings received from the GPS through serial to your computer (Serial Monitor)

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/code.png "GPS code")

### Transmitter esp8266

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/ESP8266.jpg "esp8266 module")

#### Specification

The esp8266 is a Wi-fi transmitter and receptor. It is able to send and receive data. In our case, we use it to send the GPS location to the another esp8266.

#### Connection

The esp8266 have a Vcc pin connected on 3.3 V and a GND pin. <br/>
The two another important parts are the RX and TX pin which assure the communication. You have to connect them on digital pin 1 and 0.

#### Code


Firstly you have to take an empty arduino code. Then you open the console and change the baud on 9600 if it's not done. Then you need to type the AT command within the console to communicate with the esp module.

Firstly you have to take an empty arduino code. Then you open the console and change the baud on 9600 if it's not done. Then you need to type the AT command to communicate with the esp module.
