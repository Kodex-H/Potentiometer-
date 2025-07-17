 #include <Arduino.h>

const int potPin = 22;       
const int ledPin = 2;         
const int pwmChannel = 0;     
const int pwmFreq = 5000;     
const int pwmResolution = 8;  

void setup() {
  Serial.begin(115200); 

  
  ledcSetup(pwmChannel, pwmFreq, pwmResolution);
  ledcAttachPin(ledPin, pwmChannel);
}

void loop() {
  
  int potValue = analogRead(22);

  int brightness = map(22, 0, 4095, 0, 255);

  Serial.print("Potentiometer: ");
  Serial.print(22);
  Serial.print(" → LED Brightness: ");
  Serial.println(brightness);
  ledcWrite(pwmChannel, brightness);

  delay(200); 
}
