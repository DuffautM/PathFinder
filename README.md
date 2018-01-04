# PathFinder

## Purpose

The innovation project is a third year project.
We had to find an innovating idea and make a prototype of it with a documentation and an explanation of the tests.

## Our idea

### Concept

After a long search, we finally found the Pathfinder concept.
A beacon is placed, it transmit a message with his location to a bracelet own by a user.
This bracelet have a screen wich indicate the direction of the beacon with an arrow.
Then the user can simply walk to it.

### Use case

Person have a walk in the forest or mountain. With Pathfinder, they can have the location of points of view.<br/>
A fire has started in a building, an employee can simply go outside of the building with the Pathfinder indicator.

## Project management

### PBS

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/Innovation%20-%20PBS.png "PBS")

### WBS

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/Innovation%20-%20WBS.png "WBS")

## Test

### Nokia 511 screen test

![alt tag](https://github.com/DuffautM/PathFinder/blob/master/Images/Nokia%20511.png "Nokia 511")

#### Specification

The Nokia 511 screen can show text and image. It is use for the indicator on the bracelet.
An another caracteristic is that he have lights on the side, so we can use it on both day and night ours.

#### Connection

The screen have at least 5 pin that we must connect to an digital Arduino Pin. The rightest pin is the led alimentation (3.3V). And, in the end, we have the VCC (3.3V) and Ground pin on the left.

#### Code

To split a simple text on the screen is easy. <br/>
First, you have to initialize the resolution of the screen on the setup : <br/>
> lcd.begin(84, 48);

And then you just have to set the cursor on the screen and print your text :
>lcd.setCursor(0, 0);
>lcd.print("Is alive !");

But, to split an image, it's more difficult. <br/>
With a tab of hexa data, we can fill the pixel we want. Like with 0x12, we will fill pixel 2 and 16 (rember it's hexa so 0x10 have value 16). So by creating the lines, we can draw an image. <br/>
Then you have to build it on the setup :
> lcd.createChar(0, NameOfTheTab);

And simply write it :

> lcd.write(NumberOfTheImage) // Currently 0

### Gyroscope MPU-6050

### GPS NEO-6M

### Transmitter esp8266