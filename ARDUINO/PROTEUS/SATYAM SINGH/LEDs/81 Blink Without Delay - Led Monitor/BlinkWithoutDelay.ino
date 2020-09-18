/*
  Parpadear sin retardo

   Enciende y apaga un diodo emisor de luz (LED) conectado a un pin digital,
   sin utilizar la función delay (). Esto significa que se puede ejecutar otro código en el
   mismo tiempo sin ser interrumpido por el código LED.

   El circuito:
   - Utilice el LED integrado.
   - Nota: la mayoría de los Arduinos tienen un LED integrado que puedes controlar. En la UNO, MEGA
     y CERO está conectado al pin digital 13, en MKR1000 en el pin 6. LED_BUILTIN
     se establece en el pin de LED correcto independientemente de la placa que se utilice.
     Si desea saber a qué pin está conectado el LED integrado en su
     Modelo Arduino, consulte las especificaciones técnicas de su placa en:
     https://www.arduino.cc/en/Main/Products

*/

// las constantes no cambiarán. Se utiliza aquí para establecer un número de PIN:
const int ledPin =  LED_BUILTIN;// the number of the LED pin

// Las variables cambiarán:
int ledState = LOW;             // ledState utilizado para configurar el LED

// Generalmente, debe usar "unsigned long" para las variables que mantienen el tiempo
// El valor se volverá rápidamente demasiado grande para que un int lo almacene
unsigned long previousMillis = 0;        // almacenará la última vez que se actualizó el LED

// las constantes no cambiarán:
const long interval = 1000;           // intervalo en el que se parpadea (milisegundos)

void setup() {
  // establecer el pin digital como salida:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // aquí es donde colocaría el código que debe estar ejecutándose todo el tiempo.

  // compruebe si es hora de hacer parpadear el LED; es decir, si la diferencia entre 
  // la hora actual y la última vez que parpadeó el LED es mayor que 
  // el intervalo en el que desea hacer parpadear el LED.
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    // guardar la última vez que parpadeó el LED
    previousMillis = currentMillis;

    // si el LED está apagado, enciéndalo y viceversa:
    if (ledState == LOW) {
      ledState = HIGH;
    } else {
      ledState = LOW;
    }

    // configurar el LED con el ledState de la variable:
    digitalWrite(ledPin, ledState);
  }
}
