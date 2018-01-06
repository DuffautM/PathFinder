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
* 2 transmiter
* 1 gyroscope
* Batteries

The total ammount is less than 50 €

### Use case

Either you are in a park, forest or montain, you can put a beacon where the person can go to see a beautiful view or make a parkour. And if a person is lost, he can watch is bracelet and come back to the beacon. This use case is more toursit friendly but it can be use also for shcool trip.<br/>
The teacher has a beacon, so the students who wander a bit far from the group won't hae to worry getting lot because they will only need to check their wrist to find their way back.<br/>
Finally, a person reached by a disease or a disability can wear a beacon or bracelet to let other people know where to find him in case of a problem or emergency.

## Project management

### PBS

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/Innovation%20-%20PBS.png "PBS")

### WBS

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/Innovation%20-%20WBS.png "WBS")

## Test

### Nokia 511 screen test

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/Nokia%20511.png "Nokia 511")

#### Specification

<<<<<<< Updated upstream
The Nokia 511 screen can show text and image. It is use tpo display the directions to follow on the bracelet for the user.
An another caracteristic is that it has lights on both sides, so the user can use it on eihter in day or night.
=======
The Nokia 511 screen can show text and image. It is use for the indicator on the bracelet.
An another caracteristic is that he have lights on the side, so we can use it on both day and night hours.
>>>>>>> Stashed changes

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

### GPS NEO-6M

### Transmitter esp8266

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/ESP8266.jpg "esp8266 module")

#### Specification

The esp8266 is a Wi-fi transmitter and receptor. It is able to send and receive data. In our case, we use it to send the GPS location to the another esp8266.

#### Connection

The esp8266 have a Vcc pin connected on 3.3 V and a GND pin. <br/>
The two another important parts are the RX and TX pin which assure the communication. You have to connect them on digital pin 1 and 0.

#### Code

<<<<<<< Updated upstream
Firstly you have to take an empty arduino code. Then you open the console and change the baud on 9600 if it's not done. Then you need to type the AT command within the console to communicate with the esp module.
=======
Firstly you have to take an empty arduino code. Then you open the console and change the baud on 9600 if it's not done. Then you need to type the AT command to communicate with the esp module.
>>>>>>> Stashed changes
