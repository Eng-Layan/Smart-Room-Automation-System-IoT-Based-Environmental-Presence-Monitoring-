#include <LiquidCrystal.h>
#include <DHT.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

#define DHTPIN 8
#define DHTTYPE DHT11
DHT dht(DHTPIN, DHTTYPE);

const int trigPin = 10;
const int echoPin = A2;

const int ldrPin = A0;
const int soundPin = A1;
const int buzzerPin = 6;
const int ledPin = 9;

long duration;
float distance;

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  dht.begin();

  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  lcd.print("Smart Room Ready");
  delay(2000);
  lcd.clear();
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;

  float temp = dht.readTemperature();
  float hum = dht.readHumidity();
  int ldrValue = analogRead(ldrPin);
  int soundValue = analogRead(soundPin);

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temp);
  lcd.print("C H:");
  lcd.print(hum);

  lcd.setCursor(0, 1);
  if (distance < 120) {
    lcd.print("Person Detected ");
  } else {
    lcd.print("No One         ");
  }

  if (soundValue > 55) {
    tone(buzzerPin, 2000);
  } else {
    noTone(buzzerPin);
  }

  if (temp > 28) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  Serial.print("Temp: "); Serial.print(temp);
  Serial.print(" | Hum: "); Serial.print(hum);
  Serial.print(" | Light: "); Serial.print(ldrValue);
  Serial.print(" | Sound: "); Serial.print(soundValue);
  Serial.print(" | Distance: "); Serial.println(distance);

  delay(2000);
}
