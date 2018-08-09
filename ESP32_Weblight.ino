int freq = 6000;
int ledChannel = 0;
int resolution = 8;
 
void setup() {
 
  ledcSetup(ledChannel, freq, resolution);
  ledcAttachPin(22, ledChannel);
 
}
 
void loop() {
 
  for (int dutyCycle = 0; dutyCycle <= 255; dutyCycle++) {
    ledcWrite(ledChannel, dutyCycle);
    delay(30);
  }
 
  for (int dutyCycle = 255; dutyCycle >= 0; dutyCycle--) {
    ledcWrite(ledChannel, dutyCycle);
    delay(30);
  }
 
}
