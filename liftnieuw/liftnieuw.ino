int RelayOmhoog = 2;
int RelayOmlaag =3;
int D = 100;




void setup() {
  // put your setup code here, to run once:

  pinMode(Relay1,OUTPUT);
  pinMode(Relay2,OUTPUT);

  digitalWrite(Relay1,HIGH);
  digitalWrite(Relay2,HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

  
 //omhoog
   digitalWrite(Relay1,HIGH);
  delay(D);
  digitalWrite(Relay1,LOW);

  //omlaag
    digitalWrite(Relay2,LOW);
  delay(D);
  digitalWrite(Relay2,HIGH);

  

  
  

}
