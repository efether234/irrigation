const int READPIN = 0;
const int LEDPIN = 13;
int sensorVal;
int moistPer;
int lowPer = 70;
int highPer = 80;

void setup() {
    pinMode(LEDPIN, OUTPUT);
    Serial.begin(9600);
    delay(1000);
}

void loop() {
    sensorVal = analogRead(READPIN);
    moistPer = map(sensorVal, 650, 295, 0, 100);
    Serial.print(sensorVal);
    Serial.print(" | ");
    Serial.print(moistPer);
    Serial.println("%");

    if (moistPer < lowPer) {
        digitalWrite(LEDPIN, 1);
    }

    if (moistPer > highPer) {
        digitalWrite(LEDPIN, 0);
    }

    delay(10);
}