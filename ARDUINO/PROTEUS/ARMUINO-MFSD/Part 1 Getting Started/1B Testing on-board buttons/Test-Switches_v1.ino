//ARMUINO: Boton 1- todos apagados;Boton 2 - todos encendidos
int led1=13; int led2=12; int led3=11; int led4=10;

#define BTN1 A1
#define BTN2 A2
#define BTN3 A3

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
}

void loop() {
  if(!digitalRead(BTN1)){
    Serial.println("Boton 1 oprimido: Todos Apagados");
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    digitalWrite(led3,HIGH);
    digitalWrite(led4,HIGH);    
  }
  if(!digitalRead(BTN2)){
    Serial.println("Boton 2 oprimido: Todos Encendidos");
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);    
  }
}
