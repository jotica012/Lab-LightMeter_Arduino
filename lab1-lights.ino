int pinLDR = A2;
int LDRvalue = 0;
const int ledPIN1 = 5;

const int ledPIN2 = 6;

const int ledPIN3 = 9;

const int ledPIN4 = 10;

const int ledPIN5 = 11;


void setup()
{
  Serial.begin(9600);
  pinMode(ledPIN1, OUTPUT);
  pinMode(ledPIN2, OUTPUT);
  pinMode(ledPIN3, OUTPUT);
  pinMode(ledPIN4, OUTPUT);
  pinMode(ledPIN5, OUTPUT);
}

void loop()
{
  LDRvalue = analogRead(pinLDR);
  Serial.println(LDRvalue);
  if(LDRvalue < 784){
    digitalWrite(ledPIN1, LOW);
    digitalWrite(ledPIN2, LOW);
    digitalWrite(ledPIN3, LOW);
    digitalWrite(ledPIN4, LOW);
    digitalWrite(ledPIN5, LOW);
  }
  if(LDRvalue > 784 & LDRvalue < 865){
   	digitalWrite(ledPIN1, HIGH);
    digitalWrite(ledPIN2, LOW);
    digitalWrite(ledPIN3, LOW);
    digitalWrite(ledPIN4, LOW);
    digitalWrite(ledPIN5, LOW);
  }
  if(LDRvalue > 865 & LDRvalue < 921){
   	digitalWrite(ledPIN1, HIGH);
    digitalWrite(ledPIN2, HIGH);
    digitalWrite(ledPIN3, LOW);
    digitalWrite(ledPIN4, LOW);
    digitalWrite(ledPIN5, LOW);
  }
  if(LDRvalue > 921 & LDRvalue < 959){
   	digitalWrite(ledPIN1, HIGH);
    digitalWrite(ledPIN2, HIGH);
    digitalWrite(ledPIN3, HIGH);
    digitalWrite(ledPIN4, LOW);
    digitalWrite(ledPIN5, LOW);
  }
  if(LDRvalue > 959 & LDRvalue < 965){
   	digitalWrite(ledPIN1, HIGH);
    digitalWrite(ledPIN2, HIGH);
    digitalWrite(ledPIN3, HIGH);
    digitalWrite(ledPIN4, HIGH);
    digitalWrite(ledPIN5, LOW);
  }
  if(LDRvalue > 965){
   	digitalWrite(ledPIN1, HIGH);
    digitalWrite(ledPIN2, HIGH);
    digitalWrite(ledPIN3, HIGH);
    digitalWrite(ledPIN4, HIGH);
    digitalWrite(ledPIN5, HIGH);
  }
}
