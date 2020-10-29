//ARMUINO: El potenciometro regula cadena de LEDs
int trimPot=A0;
int led1=13;int led2=12;int led3=11;int led4=10;

int val=0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  val=analogRead(trimPot);
  Serial.println(val); // val=0...1023
  if(val<200){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,LOW);
  }
  else if(val>=200 and val<300){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,LOW);
    digitalWrite(led4,HIGH);
  }
  else if(val>=300 and val<400){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  else {
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);
  }
  delay(500); // espera 0.5 seg antes de la siguiente lectura
}
