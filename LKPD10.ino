//regsa wishnu
//XI TAV 2
const int buttonPin = 26;
void setup() {
  pinMode(buttonPin, INPUT);
    Serial.begin(9600);
    }
    void loop() {
      int buttonState = digitalRead(buttonPin);
        Serial.print("Tombol ditekan: ");
          if (buttonState == HIGH) {
            Serial.printin("YA");
              } else {
                  Serial.printin("TIDAK");
                    delay(100);
                    }