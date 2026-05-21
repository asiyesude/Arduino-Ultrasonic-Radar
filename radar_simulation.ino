
long sure;
int mesafe;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  Serial.begin(9600); 
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);


  sure = pulseIn(echoPin, HIGH);

  mesafe = sure * 0.034 / 2;

  Serial.print("Hedef Mesafesi: ");
  Serial.print(mesafe);
  Serial.println(" cm");

  if (mesafe < 50) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

  delay(100);
}
