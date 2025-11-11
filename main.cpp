int yellowLED1 = 12;
int yellowLED2 = 8;
int greenLED = 11;
int yellowLED = 10;
int redLED = 9;

int buzzer = 7;

int button1 = 13;
int button2 = 6;

void setup() {
  pinMode(yellowLED1,OUTPUT);
  pinMode(yellowLED2,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(redLED,OUTPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(button1,INPUT_PULLUP);
  pinMode(button2,INPUT_PULLUP);
}

void loop() {
  digitalWrite(greenLED,HIGH);
  delay(1000);
  digitalWrite(greenLED,LOW);

  digitalWrite(yellowLED,HIGH);
  delay(1000);
  digitalWrite(yellowLED,LOW);

  digitalWrite(redLED,HIGH);
  delay(1000);
  digitalWrite(redLED,LOW);

  digitalWrite(yellowLED1,HIGH);
  digitalWrite(yellowLED2,HIGH);
  delay(1000);
  digitalWrite(yellowLED1,LOW);
  digitalWrite(yellowLED2,LOW);
}
