int led=13;

void setup() {
  pinMode(led,OUTPUT);
   Serial.begin(9600);
    Serial.println("Enter the number 100 or ON or H to turn on the LED");
  Serial.println("Enter the number 200 or OFF or L to turn off the LED");
}



void loop() {
  if (Serial.available() >0 ){
    String input=Serial.readStringUntil('\n');
    if (input =="on" || input =="ON" || input =="On" || input =="H" || input =="h" || input=="100"){
      digitalWrite(led, HIGH);
      Serial.println("LED turn On");
    }
      else if (input =="off" || input =="OFF" || input =="Off" || input =="L" || input =="l" || input=="200"){
        digitalWrite(led, LOW);
        Serial.println("LED turn Off");
      }
  }
}
