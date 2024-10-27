


void setup() {
  Serial.begin(9600);
}

void loop() {
  for(float n=0; n < 360.00; n+=2){
    Serial.print(sin(n*(PI/180.00)));
    Serial.print(" ");
    Serial.println(cos(n*(PI/180.00)));
  }

}

//mohammadzadeh
