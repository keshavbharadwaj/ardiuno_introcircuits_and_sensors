

#define DHTPIN 7;
#define DHTTYPE DHT11;
DHT dht(DHTPIN,DHTTYPE);
void setup() {Serial.begin(9600);
    dht.begin();
    Serial.print("temp:  Humidity: ");

}

void loop() {
  delay(500);
  float h=dht.readHumidity();
  float f=dht.readTemperature();
  if(isnan(h)||isnan(f))
  { Serial.print("error");
    return;
  }
  Serial.print(f);
  Serial.print(h);

}
