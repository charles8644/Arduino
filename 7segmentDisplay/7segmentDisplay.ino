/*https://create.arduino.cc/projecthub/Tr3v3n_Jaganath/interfacing-a-4-digit-7-segment-display-8506ca*/
#include <SevSeg.h>

int pinA = 2;int pinB = 3;int pinC = 4;int pinD = 5;
int pinE = 11;int pinF = 12;int pinG = 13;
int pinDP = 6;int D1 = 7;int D2 = 8;int D3 = 9; int D4 = 10;

void setup() {//set all segments & digits as outputs
pinMode(pinA, OUTPUT);
pinMode(pinB, OUTPUT);
pinMode(pinC, OUTPUT);
pinMode(pinD, OUTPUT);
pinMode(pinE, OUTPUT);
pinMode(pinF, OUTPUT);
pinMode(pinG, OUTPUT);
pinMode(D1, OUTPUT);
pinMode(D2, OUTPUT);
pinMode(D3, OUTPUT);
pinMode(D4, OUTPUT);

 digitalWrite(D1, HIGH);one();
 digitalWrite(D2, HIGH);nine();
 digitalWrite(D3, HIGH);nine();
 digitalWrite(D4, HIGH);three();
}

void loop() {
  
  /*digit1();zero();delay(500);
  digit2();one();delay(500);
  digit3();two();delay(500);
  digit4();three();delay(500);
  digit3();four();delay(500);
  digit2();five();delay(500);
  digit1();six();delay(500);
  digit2();seven();delay(500);
  digit3();eight();delay(500);
  digit4();nine();delay(500);*/
 
 /* all4Digits();
  allNumbers();*/
  digit1();one();delay(1000);
  digit2();nine();delay(1000);
  digit3();nine();delay(1000);
  digit4();four();delay(1000);


}


//functions representing numbers 0-9
void zero(){
digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, HIGH);
  }

  void one(){
digitalWrite(pinA, HIGH);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
}

void two(){
  digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, LOW);
  }
  
  void three(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, LOW);
    }
    
  void four(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
    }
    
  void five(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
    }
    
  void six(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
    }
    
  void seven(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
    }
    
  void eight(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
    }
    
  void nine(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
    }

    void allNumbers(){
      one();delay(500);
two();delay(500);
three();delay(500);
four();delay(500);
five();delay(500);
six();delay(500);
seven();delay(500);
eight();delay(500);
nine();delay(500);
      }

  void turnOffAllSegments(){
          digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
          }


    //functions to select individual digits on the display
    void digit1(){
      digitalWrite(D1, HIGH);
digitalWrite(D2, LOW);
digitalWrite(D3, LOW);
digitalWrite(D4, LOW);
      }
      
    void digit2(){
      digitalWrite(D1, LOW);
digitalWrite(D2, HIGH);
digitalWrite(D3, LOW);
digitalWrite(D4, LOW);
      }
      
    void digit3(){
      digitalWrite(D1, LOW);
digitalWrite(D2, LOW);
digitalWrite(D3, HIGH);
digitalWrite(D4, LOW);
      }
      
    void digit4(){
      digitalWrite(D1, LOW);
digitalWrite(D2, LOW);
digitalWrite(D3, LOW);
digitalWrite(D4, HIGH);
      }

      void all4Digits(){
        digitalWrite(D1, HIGH);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);
        }
        
  
