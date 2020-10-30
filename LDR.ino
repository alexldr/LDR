void setup() {
  pinMode (A0, INPUT);
  pinMode (13, OUTPUT);
  Serial.begin(9600);
}

float v=0;
float r=0;
float il=0;
float Van=0;

void loop() {
  delay(2000);
  v=analogRead(A0);
  Van = v*5/1023;
  r=615*((5/Van)-1);
  il= pow((r/128432), -1.1655);
  if(il < 2000)
  {
    digitalWrite(13, HIGH);
  }
  else
  {
    digitalWrite(13, LOW);
  }
  Serial.println(" ");
  Serial.print("IL:  ");
  Serial.print(il);
  Serial.print("  LUX");
  Serial.println(" ");
  Serial.print("R:  ");
  Serial.print(r);
  Serial.print("  OHMS");
  Serial.println(" ");
  Serial.print("Van:  ");
  Serial.print(Van);
  Serial.print("  VOLTS");
  Serial.println(" ");
  Serial.println(" ");
}
