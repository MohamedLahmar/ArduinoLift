int analogValue = 0;
bool inputActive = false;

void setup()
{
Serial.begin(9600);
}

void loop()
{
//no pull down resistor available, therefor quick and dirty
analogValue = analogRead(A0);
Serial.println("analogValue is: " + (String)analogValue);

 if (analogValue < 100)
{
inputActive = true;
Serial.println("input HIGH");
}
else
{
inputActive = false;
Serial.println("input low");
delay(100);
}

}
