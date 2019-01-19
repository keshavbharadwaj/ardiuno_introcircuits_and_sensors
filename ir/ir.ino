void setup() {
  // put your setup code here, to run once:
pinMode(A0,INPUT);
pinMode(7,OUTPUT);
Serial.begin(9600);


}

void loop() {digitalWrite(2,HIGH);
  int a=analogRead(A0);
  Serial.println(a);
  if(a<500)
  { digitalWrite(7,HIGH);
    delay(1000);
  }
  else
  digitalWrite(7,LOW);

}
