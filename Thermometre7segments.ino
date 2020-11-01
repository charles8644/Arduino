//www.elegoo.com
//2018.10.25


#include <dht_nonblocking.h>
#define DHT_SENSOR_TYPE DHT_TYPE_11

static const int DHT_SENSOR_PIN = 6;
DHT_nonblocking dht_sensor( DHT_SENSOR_PIN, DHT_SENSOR_TYPE );

int pinA = 2;
int pinB = 3;
int pinC = 4;
int pinD = 5;
//int pinDP = 6;
int D1 = 7;
int D2 = 8;
int D3 = 9;
int D4 = 10;
int pinE = 11;
int pinF = 12;
int pinG = 13;
  float temperature;
  float humidity;
  String firstDigit;
  String SecondDigit;
  int iTemp;
  String sTemp;


/*
 * Initialize the serial port.
 */
void setup( )
{
  Serial.begin( 9600);
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
}



/*
 * Poll for a measurement, keeping the state machine alive.  Returns
 * true if a measurement is available.
 */
static bool measure_environment( float *temperature, float *humidity )
{
  

  /* Measure once every four seconds. */

    if( dht_sensor.measure( temperature, humidity ) == true )
    {
      
      return( true );
  }

  return( false );
}



/*
 * Main program loop.
 */
void loop( )
{

  
  /* Measure temperature and humidity.  If the functions returns
     true, then a measurement is available. */
  if( measure_environment( &temperature, &humidity ) == true )
  {
    /*Serial.print( "T = " );
    Serial.print( temperature, 1 );
    Serial.print( " deg. C, H = " );
    Serial.print( humidity, 1 );
    Serial.println( "%" );*/
    
    iTemp = (int) temperature;
    sTemp = (String) iTemp;
    
    firstDigit = sTemp.substring(0, 1);
    SecondDigit = sTemp.substring(1, 2);
    /*Serial.println( firstDigit );
    Serial.println( SecondDigit );*/

    


    
    
  }

  if (firstDigit == "0") 
        {
          digit2();zero();delay(1);
        }
        if (firstDigit == "1") 
        {
          digit2();one();delay(1);
        }
        if (firstDigit == "2") 
        {
          digit2();two();delay(1);
        }
        if (firstDigit == "3") 
        {
          digit2();three();delay(1);
        }
        if (firstDigit == "4") 
        {
          digit2();four();delay(1);
        }
        if (firstDigit == "5") 
        {
          digit2();five();delay(1);
        }
        if (firstDigit == "6") 
        {
          digit2();six();delay(1);
        }
        if (firstDigit == "7") 
        {
          digit2();seven();delay(1);
        }
        if (firstDigit == "8") 
        {
          digit2();eight();delay(1);
        }
        if (firstDigit == "9") 
        {
          digit2();nine();delay(1);
        }

        if (SecondDigit == "0") 
        {
          digit3();zero();delay(1);
        }
        if (SecondDigit == "1") 
        {
          digit3();one();delay(1);
        }
        if (SecondDigit == "2") 
        {
          digit3();two();delay(1);
        }
        if (SecondDigit == "3") 
        {
          digit3();three();delay(1);
        }
        if (SecondDigit == "4") 
        {
          digit3();four();delay(1);
        }
        if (SecondDigit == "5") 
        {
          digit3();five();delay(1);
        }
        if (SecondDigit == "6") 
        {
          digit3();six();delay(1);
        }
        if (SecondDigit == "7") 
        {
          digit3();seven();delay(1);
        }
        if (SecondDigit == "8") 
        {
          digit3();eight();delay(1);
        }
        if (SecondDigit == "9") 
        {
          digit3();nine();delay(1);
        }
        digit4();degre();delay(1);
}
//functions representing numbers 0-9
void zero(){
digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, LOW);
  }

  void one(){
digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
}

void two(){
  digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, LOW);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, LOW);
digitalWrite(pinG, HIGH);
  }
  
  void three(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, HIGH);
    }
    
  void four(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
    }
    
  void five(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, LOW);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
    }
    
  void six(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, LOW);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
    }
    
  void seven(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
    }
    
  void eight(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
    }
    
  void nine(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
    }

      void degre(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
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
      digitalWrite(D1, LOW);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);
      }
      
    void digit2(){
      digitalWrite(D1, HIGH);
digitalWrite(D2, LOW);
digitalWrite(D3, HIGH);
digitalWrite(D4, HIGH);
      }
      
    void digit3(){
      digitalWrite(D1, HIGH);
digitalWrite(D2, HIGH);
digitalWrite(D3, LOW);
digitalWrite(D4, HIGH);
      }
      
    void digit4(){
      digitalWrite(D1, HIGH);
digitalWrite(D2, HIGH);
digitalWrite(D3, HIGH);
digitalWrite(D4, LOW);
      }

      void all4Digits(){
        digitalWrite(D1, LOW);
digitalWrite(D2, LOW);
digitalWrite(D3, LOW);
digitalWrite(D4, LOW);
        }

