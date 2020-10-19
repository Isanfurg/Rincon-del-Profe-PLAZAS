int BUZZER=9;
int i;

void setup() {
  pinMode(BUZZER,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  for(i=255;i>=0;i--){
    Serial.print(i);
    Serial.print(" : ");
    Serial.println(i*100/255);
    Serial.print("%");
    analogWrite(BUZZER,i); //0=ON 255=OFF
    delay(50);
    analogWrite(BUZZER,255);
  }
}
