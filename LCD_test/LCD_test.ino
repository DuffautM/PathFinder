/*
 * To use this sketch, connect the eight pins from your LCD like thus:
 *
 * Pin 1 -> +3.3V (rightmost, when facing the display head-on)
 * Pin 2 -> Arduino digital pin 3
 * Pin 3 -> Arduino digital pin 4
 * Pin 4 -> Arduino digital pin 5
 * Pin 5 -> Arduino digital pin 7
 * Pin 6 -> Ground
 * Pin 7 -> 10uF capacitor -> Ground
 * Pin 8 -> Arduino digital pin 6
 *
 * Since these LCDs are +3.3V devices, you have to add extra components to
 * connect it to the digital pins of the Arduino (not necessary if you are
 * using a 3.3V variant of the Arduino, such as Sparkfun's Arduino Pro).
 */


#include <PCD8544.h>


// Arrow base (up and down)
const unsigned char base [] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

const unsigned char base2 [] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

const unsigned char base3 [] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

// Arrow down
const unsigned char arrow [] = {
  0x01, 0x03, 0x07, 0x0F, 0x1F
};

const unsigned char arrow1 [] = {
  0x3F, 0x7F, 0xFF, 0x7F, 0x3F
};

const unsigned char arrow2 [] = {
  0x1F, 0x0F, 0x07, 0x03, 0x01
};

//Arrow up
const unsigned char arrowU [] = {
  0x80, 0xC0, 0xE0, 0xF0, 0xF8
};

const unsigned char arrowU1 [] = {
  0xFC, 0xFE, 0xFF, 0xFE, 0xFC
};

const unsigned char arrowU2 [] = {
  0xF8, 0xF0, 0xE0, 0xC0, 0x80
};

// Arrow base for left and right
const unsigned char baseR [] = {
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F
};

const unsigned char baseR2 [] = {
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F
};

const unsigned char baseR3 [] = {
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F
};

const unsigned char baseR4 [] = {
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F
};

const unsigned char baseR5 [] = {
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F
};

const unsigned char baseR6 [] = {
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F
};

const unsigned char baseR7 [] = {
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F
};

const unsigned char baseR8 [] = {
  0x0F, 0x0F, 0x0F, 0x0F, 0x0F
};

//Arrow right
const unsigned char arrowR [] = {
  0xF8, 0xF0, 0xE0, 0xC0, 0x80
};

const unsigned char arrowR1 [] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

const unsigned char arrowR2 [] = {
  0x1F, 0x0F, 0x07, 0x03, 0x01
};

const unsigned char arrowR3 [] = {
  0xFF, 0x7E, 0x3C, 0x18, 0x00
};

//Arrow left
const unsigned char arrowL [] = {
 0x80 , 0xC0 , 0xE0, 0xF0 , 0xF8
};

const unsigned char arrowL1 [] = {
  0xFF, 0xFF, 0xFF, 0xFF, 0xFF
};

const unsigned char arrowL2 [] = {
  0x01, 0x03, 0x07, 0x0F, 0x1F
};

const unsigned char arrowL3 [] = {
  0x00, 0x18 , 0x3C, 0x7E , 0xFF
};


static PCD8544 lcd;


void setup() {
  // PCD8544-compatible displays may have a different resolution...
  lcd.begin(84, 48);

  // Add the base
  lcd.createChar(0, base);
  lcd.createChar(1, base2);
  lcd.createChar(2, base3);

  //down
  lcd.createChar(3, arrow);
  lcd.createChar(4, arrow1);
  lcd.createChar(5, arrow2);

  //up
  lcd.createChar(6, arrowU);
  lcd.createChar(7, arrowU1);
  lcd.createChar(8, arrowU2);

  //Add second base
  lcd.createChar(9, baseR);
  lcd.createChar(10, baseR2);
  lcd.createChar(11, baseR3);
  lcd.createChar(12, baseR4);
  lcd.createChar(13, baseR5);
  lcd.createChar(14, baseR6);
  lcd.createChar(15, baseR7);
  lcd.createChar(16, baseR8);

  //right
  lcd.createChar(17, arrowR);
  lcd.createChar(18, arrowR1);
  lcd.createChar(19, arrowR2);
  lcd.createChar(20, arrowR3);

  //left
  lcd.createChar(21, arrowL);
  lcd.createChar(22, arrowL1);
  lcd.createChar(23, arrowL2);
  lcd.createChar(24, arrowL3);
}


void loop() {

  // Write a piece of text on the first line...
  /*lcd.setCursor(0, 0);
  lcd.print("Is alive !");*/ 

  int location = 1;
  /*location 1 -> down
    location 2 -> up
    location 3 -> right
    location 4 -> left
  */
  
  switch(location){
    case 1:
        lcd.setCursor(40, 1);
        lcd.write(0);  // write the smiley
        lcd.setCursor(40, 2);
        lcd.write(1);
        lcd.setCursor(40, 3);
        lcd.write(2);
        lcd.setCursor(35, 4);
        lcd.write(3);
        lcd.setCursor(40, 4);
        lcd.write(4);
        lcd.setCursor(45, 4);
        lcd.write(5);
        break;

     case 2:
        lcd.setCursor(35, 1);
        lcd.write(6);
        lcd.setCursor(40, 1);
        lcd.write(7);
        lcd.setCursor(45, 1);
        lcd.write(8);  // write the smiley
        lcd.setCursor(40, 2);
        lcd.write(2);
        lcd.setCursor(40, 3);
        lcd.write(1);
        lcd.setCursor(40, 4);
        lcd.write(0);
        break;
        
      case 3:
        lcd.setCursor(20, 3);
        lcd.write(9);
        lcd.setCursor(25, 3);
        lcd.write(10);
        lcd.setCursor(30, 3);
        lcd.write(11); 
        lcd.setCursor(35, 3);
        lcd.write(12);
        lcd.setCursor(40, 3);
        lcd.write(13);
        lcd.setCursor(45, 3);
        lcd.write(14);
        lcd.setCursor(50, 3);
        lcd.write(15);
        lcd.setCursor(55, 3);
        lcd.write(16);

        
        lcd.setCursor(60, 2);
        lcd.write(17);
        lcd.setCursor(60, 3);
        lcd.write(18);
        lcd.setCursor(60, 4);
        lcd.write(19);
        lcd.setCursor(65, 3);
        lcd.write(20);
        break;

     case 4:
        lcd.setCursor(10, 3);
        lcd.write(24);

        lcd.setCursor(15, 2);
        lcd.write(21);
        lcd.setCursor(15, 3);
        lcd.write(22);
        lcd.setCursor(15, 4);
        lcd.write(23);
     
        lcd.setCursor(20, 3);
        lcd.write(9);
        lcd.setCursor(25, 3);
        lcd.write(10);
        lcd.setCursor(30, 3);
        lcd.write(11); 
        lcd.setCursor(35, 3);
        lcd.write(12);
        lcd.setCursor(40, 3);
        lcd.write(13);
        lcd.setCursor(45, 3);
        lcd.write(14);
        lcd.setCursor(50, 3);
        lcd.write(15);
        lcd.setCursor(55, 3);
        lcd.write(16);
        break;
  }

  // Use a potentiometer to set the LCD contrast...
  // short level = map(analogRead(A0), 0, 1023, 0, 127);
  // lcd.setContrast(level);

  delay(1000);
}
