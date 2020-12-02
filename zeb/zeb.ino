#define LEVER_SWITCH_PIN 10
int pressSwitch = 0;
int analogin = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  pinMode(LEVER_SWITCH_PIN, INPUT);
  pressSwitch = digitalRead(LEVER_SWITCH_PIN);
  if (digitalRead(LEVER_SWITCH_PIN) == LOW)
  {
    Serial.println("Switch Pressed!");
    delay(1000);
  }

// analogin = analogRead(A0);
// Serial.println((String)analogin);
// delay(1000);

 

}
