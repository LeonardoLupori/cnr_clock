#include <Adafruit_NeoPixel.h>
#include <Bounce2.h>

#ifdef __AVR__
  #include <avr/power.h>
#endif


#define PIN 6

Adafruit_NeoPixel strip = Adafruit_NeoPixel(85, PIN, NEO_GRB + NEO_KHZ800);

#include <Wire.h>                   // must be incuded here so that Arduino library object file references work
#include <RtcDS3231.h>              // Makuna RTC library (https://github.com/Makuna/Rtc)
//#include <RtcDateTime.h>
//#include <RtcUtility.h>
RtcDS3231<TwoWire> myClock(Wire);  
static RtcDateTime presentTime;


Bounce debounceMinutes = Bounce();
Bounce debounceHours = Bounce();
Bounce debounceAnimations = Bounce();

int debounceDelay = 5;
int minutesButtonPin = 2;
int hourButtonPin = 3;
int animationButtonPin = 4;

int lower = -30; //-30;
int maxtail = 30;
int mintail = 5 ;

int inc1[] = {random(lower,0),random(mintail,maxtail)};
int inc2[] = {random(lower,0),random(mintail,maxtail)};
int inc3[] = {random(lower,0),random(mintail,maxtail)};
int inc4[] = {random(lower,0),random(mintail,maxtail)};
int inc5[] = {random(lower,0),random(mintail,maxtail)};
int inc6[] = {random(lower,0),random(mintail,maxtail)};
int inc7[] = {random(lower,0),random(mintail,maxtail)};
int inc8[] = {random(lower,0),random(mintail,maxtail)};
int inc9[] = {random(lower,0),random(mintail,maxtail)};
int inc10[] = {random(lower,0),random(mintail,maxtail)};
int inc11[] = {random(lower,0),random(mintail,maxtail)};
int inc12[] = {random(lower,0),random(mintail,maxtail)};
int inc13[] = {random(lower,0),random(mintail,maxtail)};
int inc14[] = {random(lower,0),random(mintail,maxtail)};
int inc15[] = {random(lower,0),random(mintail,maxtail)};
int inc16[] = {random(lower,0),random(mintail,maxtail)};
int inc17[] = {random(lower,0),random(mintail,maxtail)};


int s_lower = -8; //-30;
int s_maxtail = 2;  //40;
int s_mintail =1 ;

int s_inc1[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc2[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc3[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc4[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc5[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc6[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc7[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc8[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc9[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc10[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc11[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc12[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc13[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc14[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc15[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc16[] = {random(s_lower,0),random(s_mintail,s_maxtail)};
int s_inc17[] = {random(s_lower,0),random(s_mintail,s_maxtail)};

bool duepunti=true;
long duepuntiT=millis();
float orecolor = 0;
uint32_t bgColor = strip.Color(10, 10, 10);

int i=0;


void setup() {
  
  myClock.Begin();                          // Initialize the object myClock
  // uncomment to set the clock
  //RtcDateTime compiled = RtcDateTime(__DATE__, __TIME__);   
  //myClock.SetDateTime(compiled);            // Set the correct time in the rtc (time of compiling)
  
  Serial.begin(9600);
  //presentTime = myClock.GetDateTime();
  
  Serial.println((analogRead(0)*presentTime.Minute())%presentTime.Second());
  randomSeed(analogRead(0));
  strip.begin();
  strip.setBrightness(200);
  strip.show(); // Initialize all pixels to 'off'

  pinMode(minutesButtonPin,INPUT_PULLUP);
  pinMode(hourButtonPin,INPUT_PULLUP);
  pinMode(animationButtonPin,INPUT_PULLUP);
  
  debounceMinutes.attach(minutesButtonPin);
  debounceMinutes.interval(debounceDelay);
  debounceHours.attach(hourButtonPin);
  debounceHours.interval(debounceDelay);
  debounceAnimations.attach(animationButtonPin);
  debounceAnimations.interval(debounceDelay);
  
  off();

}


void loop() {
  
  presentTime = myClock.GetDateTime();
  //Serial.println(String(presentTime.Second(),10).length());
  String minuti = String(presentTime.Minute(),10);
  String ore = String(presentTime.Hour(),10);

  orecolor= (float)(presentTime.Hour()%12) + (float)(presentTime.Minute())/60;
  //Serial.println(map2(orecolor,0,12,0,255));
  uint32_t color = Wheel(map2(orecolor,0,12,0,255)); //strip.Color(255, 255, 0);

  debounceHours.update();
  if(debounceHours.fell()){
    presentTime = RtcDateTime(presentTime.Year(),
                  presentTime.Month(),
                  presentTime.Day(),
                  (presentTime.Hour()+1)%24,
                  presentTime.Minute(),
                  presentTime.Second());
    myClock.SetDateTime(presentTime);
  }

  debounceMinutes.update();
  if(debounceMinutes.fell()){
    presentTime = RtcDateTime(presentTime.Year(),
                  presentTime.Month(),
                  presentTime.Day(),
                  presentTime.Hour(),
                  (presentTime.Minute()+1)%60,
                  presentTime.Second());
    myClock.SetDateTime(presentTime);
  }

//
  debounceAnimations.update();
  if(debounceAnimations.fell()){
    rand_animation(); // ANIMAZIONE  A CASO
  }

  
  bg(bgColor);
  
 if (ore.length()>1){
    numbers(ore[0],0,color);
    numbers(ore[1],4,color);
  }else{
    numbers('0',0,color);
    numbers(ore[0],4,color);
    }

  if (minuti.length()>1){
    numbers(minuti[0],10,color);
  numbers(minuti[1],14,color);
  }else{
    numbers('0',10,color);
    numbers(minuti[0],14,color);
    }

  if (millis()>duepuntiT){
    duepunti=not duepunti;
    duepuntiT=millis()+500;
  }
  
  if (duepunti){
    numbers(':',8,color);
  }

  strip.show();
  off();

  
  // COMPLEANNI
  uint32_t birthday_color =  strip.Color(255,255,255);
  uint32_t birthday_color1 =  strip.Color(0,0,255);
  String happy_birthday = "happy birthday ";
  if(birthday(2,22)){matrix(100);} // comple raf
  if(birthday(8,6)){sinewave(100);} // comple leo
  if(birthday(5,16)){danceHall();} // comple elsa
  
  if(birthday(10,17)){ textDrift(happy_birthday + "santiago ramon y cajal",birthday_color);} 
  if(birthday(7,7)){ textDrift(happy_birthday + "camillo golgi",birthday_color1);}
  if(birthday(5,6)){ textDrift(happy_birthday + "sigmund freud",birthday_color);}
  if(birthday(7,26)){ textDrift(happy_birthday + "carl jung",birthday_color1);} 
  if(birthday(7,22)){ textDrift(happy_birthday + "donald hebb",birthday_color);} 
  if(birthday(6,3)){ textDrift(happy_birthday + "torsten wiesel",birthday_color1);}
  if(birthday(2,27)){ textDrift(happy_birthday + "david hubel",birthday_color);}
  if(birthday(8,20)){ textDrift(happy_birthday + "roger sperry",birthday_color1);}
  if(birthday(7,30)){ textDrift(happy_birthday + "giuseppe moruzzi",birthday_color);}
  if(birthday(4,22)){ textDrift(happy_birthday + "rita levi montalcini",birthday_color1);}
  if(birthday(3,20)){ textDrift(happy_birthday + "burrhus skinner",birthday_color);} 
  if(birthday(9,5)){ textDrift(happy_birthday + "susumu tonegawa",birthday_color1);} 
  if(birthday(1,19)){ textDrift(happy_birthday + "david marr",birthday_color);}
  if(birthday(11,7)){ textDrift(happy_birthday + "eric kandel",birthday_color);} 
  if(birthday(3,4)){ textDrift(happy_birthday + "charles sherrington",birthday_color1);}
  if(birthday(6,28)){ textDrift(happy_birthday + "paul broca",birthday_color);}
  if(birthday(5,15)){ textDrift(happy_birthday + "carl wernicke",birthday_color1);} 
  if(birthday(1,26)){ textDrift(happy_birthday + "wilder penfield",birthday_color);}
  if(birthday(9,9)){ textDrift(happy_birthday + "luigi galvani",birthday_color1);}
  if(birthday(8,31)){ textDrift(happy_birthday + "hermann von helmholtz",birthday_color);} 
  if(birthday(11,17)){ textDrift(happy_birthday + "korbinian brodmann",birthday_color1);} 
  if(birthday(11,17)){ textDrift(happy_birthday + "alan hodgkin",birthday_color);}
  if(birthday(11,17)){ textDrift(happy_birthday + "andrew huxley",birthday_color1);} 
  
  if(birthday(12,13)){textDrift(happy_birthday + "santiago ramon y cajal" ,birthday_color1);}
  
  
  // RICORRENZE
  if(birthday(12,25)){letitsnow(300);} // natale 
  if(birthday(3,14)){textDrift("happy pi day",birthday_color1);} // PI Day 
  if(birthday(12,19)){letitsnow(300);} // festa natale 2019

 if (Serial.available() > 0) {
    String in =  Serial.readString() ;
    textDrift(in,strip.Color(255,127,0));
 }

}


long map2(float x, float in_min, float in_max, long out_min, long out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}




  
