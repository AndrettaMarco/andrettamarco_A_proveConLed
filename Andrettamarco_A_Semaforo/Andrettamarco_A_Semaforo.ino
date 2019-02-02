int LedRosso1=13;
int LedGiallo1=12;
int LedVerde1=11;

int LedRosso2=10;
int LedGiallo2=9;
int LedVerde2=8;


void setup() {
  // put your setup code here, to run once:

pinMode(LedRosso1, OUTPUT);
pinMode(LedGiallo1, OUTPUT);
pinMode(LedVerde1, OUTPUT);
pinMode(LedRosso2, OUTPUT);
pinMode(LedGiallo2, OUTPUT);
pinMode(LedVerde2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

digitalWrite(LedRosso1, HIGH);
digitalWrite(LedVerde2, HIGH);
delay(3000);
digitalWrite(LedVerde2, LOW);
delay(500);
digitalWrite(LedVerde2, HIGH);
delay(300);
digitalWrite(LedVerde2, LOW);
delay(300);
digitalWrite(LedVerde2, HIGH);
delay(300);
digitalWrite(LedVerde2, LOW);
delay(300);
digitalWrite(LedVerde2, HIGH);
delay(300);
digitalWrite(LedVerde2, LOW);
delay(300);
digitalWrite(LedVerde2, HIGH);
delay(300);
digitalWrite(LedVerde2, LOW);
digitalWrite(LedGiallo1,HIGH);
digitalWrite(LedGiallo2, HIGH);
delay(3000);
digitalWrite(LedRosso1, LOW);
digitalWrite(LedGiallo1, LOW);
digitalWrite(LedGiallo2, LOW);
digitalWrite(LedVerde1, HIGH);
digitalWrite(LedRosso2, HIGH);
delay(3000);
digitalWrite(LedVerde1, LOW);
delay(500);
digitalWrite(LedVerde1, HIGH);
delay(300);
digitalWrite(LedVerde1, LOW);
delay(300);
digitalWrite(LedVerde1, HIGH);
delay(300);
digitalWrite(LedVerde1, LOW);
delay(300);
digitalWrite(LedVerde1, HIGH);
delay(300);
digitalWrite(LedVerde1, LOW);
delay(300);
digitalWrite(LedVerde1, HIGH);
delay(300);
digitalWrite(LedVerde1, LOW);
digitalWrite(LedGiallo2,HIGH);
digitalWrite(LedGiallo1, HIGH);
delay(3000);
digitalWrite(LedRosso2, LOW);
digitalWrite(LedGiallo2, LOW);
digitalWrite(LedGiallo1, LOW);
digitalWrite(LedVerde2, HIGH);
digitalWrite(LedRosso1, HIGH);
}
