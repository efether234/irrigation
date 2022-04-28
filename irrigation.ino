const int READPIN = 0;
int sensorVal;
int moistPer;

void setup() {
    Serial.begin(9600);
}

void loop() {
    sensorVal = analogRead(READPIN;
    moistPer = map(sensorVal, 570, 295, 0, 100);
    Serial.print(moistPer);
    Serial.println("%");
}