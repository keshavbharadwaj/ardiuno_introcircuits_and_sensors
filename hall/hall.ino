int hall = A0;
int ledpin=7;
int state=0;
void setup() {
  pinMode(ledpin,OUTPUT);
  pinMode(hall,INPUT);
  Serial.begin(9600);
}

void loop() {
 state=analogRead(hall);
 if(state == LOW)
 digitalWrite(ledpin,HIGH);
 else
 digitalWrite(ledpin,LOW);
 Serial.println(state);
}
