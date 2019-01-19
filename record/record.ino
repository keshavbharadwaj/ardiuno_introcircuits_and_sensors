int const soundsen=A2;
void setup() {pinMode(soundsen,INPUT);
Serial.begin(9600);

}

void loop() {int a[100];
  int senval;

delay(1000);
for(int i=0;i<100;i++)
{ int senval=analogRead(soundsen);
  a[i]=senval;
  tone(2,senval*100,500);
  delay(100);
}
delay(1000);
for(int i=0;i<1000;i++)
{ tone(2,a[i]*100,500);
  delay(100);
}
}
