#include <SoftwareSerial.h>
 
SoftwareSerial cptSerial(2, 3);
void setup() {
        Serial.begin(1200);
        cptSerial.begin(1200);
}
void loop() {
  if (cptSerial.available())
    Serial.write(cptSerial.read() & 0x7F);
}
