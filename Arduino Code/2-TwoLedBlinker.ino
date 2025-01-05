int outled =4;
int outled1=5;

void setup() {
pinMode(outled, OUTPUT);
pinMode(outled1, OUTPUT);
}

void loop() {
digitalWrite(outled,HIGH);
digitalWrite(outled1,LOW);
delay(520);
digitalWrite(outled,LOW);
digitalWrite(outled1,HIGH);
delay(520);
}

//mohammadzadeh
