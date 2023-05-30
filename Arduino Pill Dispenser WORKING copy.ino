

// C++ code
//
#include <Servo.h>
#include  <LiquidCrystal_I2C.h>

int force = 0;
long seconds = 1;
long minutes = 0;
long hours = 0;
const int buttonPin = 2;
int gettime = 0;

Servo servo_10;
LiquidCrystal_I2C lcd_1(0x20,16,2);

int buttonState = 1; 


void setup()
{
  pinMode(A1, INPUT);
  servo_10.attach(3);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
  pinMode(buttonPin, INPUT);
  servo_10.write(90);
  lcd_1.init(); // initialize the lcd
  lcd_1.backlight();
  lcd_1.clear();
  lcd_1.setCursor(0,0);
  lcd_1.print("Enter Pills");
}


void loop(){
  
  	force = analogRead(A1);
    Serial.println(force);
  	//Serial.println(analogRead(A0));
  	delay(250);
  	gettime = analogRead(A0);
  	Serial.println(gettime);
  
 
    
    
  //Serial.println(force);

  if (seconds == -1 && minutes == 0 && hours == 0 && force > 10) {
    servo_10.write(180);
    Serial.println("sr");

    lcd_1.clear();
    Serial.println("Take Pills");
    lcd_1.setCursor(0, 1);
    lcd_1.print("Take Pills");
    delay(1000);
    tone(3, 3, 1000); // play tone 2 (D0 = 18 Hz)
    }
  

  if (force > 10 && seconds > -1) {
    servo_10.write(180);//closes flap
    Serial.println("sr");
    Serial.print("Time Remaining: ");
    lcd_1.setCursor(0, 1);
    lcd_1.clear();
    lcd_1.print("Time Remaining: ");
    lcd_1.setCursor(1, 1);
    Serial.println(hours);
    Serial.println(minutes);
    Serial.println(seconds);
    lcd_1.setCursor(0, 1);
    lcd_1.print(hours);
    lcd_1.print(" h ");
    lcd_1.print(minutes);
    lcd_1.print(" mins ");
    lcd_1.print(seconds);
    lcd_1.print(" secs ");

    delay(1000);
    seconds -= 1;
  	if (seconds == -1 && minutes != 0)
  	{
    	seconds = 59;
    	minutes -= 1;
  	}
  	if (minutes == 0 && hours != 0)
  	{
      minutes = 60;
    	hours -= 1;
  	}
  }
  buttonState = digitalRead(buttonPin);
  //Serial.println(buttonState);

  if (force < 200 && buttonState == 0){
    lcd_1.setCursor(0, 1);
    lcd_1.clear();
    lcd_1.print("Enter Pills");
    
  }

    if (force < 10){
    if (gettime == 0){
      lcd_1.clear();
      lcd_1.print("Please Set Time");
      seconds = 1;
      hours = 0;
      minutes = 0;
    }
  	if (gettime > 0 && gettime < 42){
    	hours = 1;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("1 hour");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 43 && gettime < 84){
    	hours = 2;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("2 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
      
    }
    if (gettime > 85 && gettime < 126){
    	hours = 3;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("3 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 127 && gettime < 168){
    	hours = 4;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("4 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 169 && gettime < 210){
    	hours = 5;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("5 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 211 && gettime < 252){
    	hours = 6;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("6 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 253 && gettime < 294){
    	hours = 7;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("7 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 295 && gettime < 336){
    	hours = 8;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("8 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 337 && gettime < 378){
    	hours = 9;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("9 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 379 && gettime < 420){
    	hours = 10;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("10 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 421 && gettime < 462){
    	hours = 11;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("11 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 463 && gettime < 504){
      hours = 12;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("12 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 505 && gettime < 546){
    	hours = 13;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("13 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 547 && gettime < 588){
    	hours = 14;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("14 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 589 && gettime < 630){
    	hours = 15;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("15 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 631 && gettime < 672){
    	hours = 16;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("16 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 673 && gettime < 714){
    	hours = 17;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("17 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
    }
    if (gettime > 715 && gettime < 756){
    	hours = 18;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("18 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 757 && gettime < 798){
    	hours = 19;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("19 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
    }
    if (gettime > 799 && gettime < 840){
    	hours = 20;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("20 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 841 && gettime < 882){
    	hours = 21;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("21 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 883 && gettime < 924){
    	hours = 22;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("22 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 925 && gettime < 966){
    	hours = 23;
      minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("23 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
    if (gettime > 967){
        hours = 24;
        minutes = 0;
      seconds = 1;
      	lcd_1.clear();
      	lcd_1.print("24 hours");
      	delay(2000);
      	lcd_1.clear();
      	lcd_1.print("Enter Pills");
        delay(4000);
    }
  }

  

  
  
}