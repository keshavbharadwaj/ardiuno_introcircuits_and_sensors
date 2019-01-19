const int soundsensor=A2;
const int threshold=10;
int led=7;
void setup() {
pinMode(soundsensor,INPUT);
pinMode(led,OUTPUT);
Serial.begin(9600);

}

void loop() {
int senval=analogRead(soundsensor);
Serial.println(senval);
if(senval>=threshold)
{ digitalWrite(led,HIGH);
delay(10);
}
else
{digitalWrite(led,LOW);
}


}
