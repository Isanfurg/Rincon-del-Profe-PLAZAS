//ARMUINO: El botón 3 activa el zumbador
#define BUZZER 3 // El zumbador está en el pin D3
#define BUTTON A3 // El botón está en el pin A3

void setup() {
  pinMode(BUTTON, INPUT);
  pinMode(BUZZER, OUTPUT);
  digitalWrite(BUZZER,HIGH); //Apaga el zumbador
}

void loop() {
  if(!digitalRead(BUTTON)){
    digitalWrite(BUZZER,LOW);//Enciende el zumbador
  }
  else{
    digitalWrite(BUZZER,HIGH); //Apaga el zumbador
  }
}
