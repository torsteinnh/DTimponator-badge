#include <ShiftRegister74HC595.h>

ShiftRegister74HC595<2> ledc(3, 2, 1);

void setup() {
  pinMode(4, OUTPUT);
  digitalWrite(4, LOW);

  pinMode(0, INPUT);

  ledc.setAllHigh();
  delay(500);
  ledc.setAllLow();
  delay(500);
}

void loop() {
  for (int led = 0; led < 16; led++){
    ledc.set(led, HIGH);
    delay(200);
  }
  for (int led = 0; led < 16; led++){
    ledc.set(led, LOW);
    delay(200);
  }

  for (int i = 0; i < 3; i++){
    ledc.setAllHigh();
    delay(100);
    ledc.setAllLow();
    delay(100);
  }
}
