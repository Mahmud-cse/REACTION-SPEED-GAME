int yellowLED1 = 12;
int yellowLED2 = 8;
int greenLED = 11;
int yellowLED = 10;
int redLED = 9;

int buzzer = 7;

int button1 = 13;
int button2 = 5;

bool buttonPressed;

void setup() {
  pinMode(yellowLED1,OUTPUT);
  pinMode(yellowLED2,OUTPUT);
  pinMode(greenLED,OUTPUT);
  pinMode(yellowLED,OUTPUT);
  pinMode(redLED,OUTPUT);

  pinMode(buzzer,OUTPUT);

  pinMode(button1,INPUT_PULLUP);
  pinMode(button2,INPUT_PULLUP);

  randomSeed(analogRead(A0));
}

void loop() {
  digitalWrite(greenLED,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(900);
  digitalWrite(greenLED,LOW);

  digitalWrite(yellowLED,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(900);
  digitalWrite(yellowLED,LOW);

  digitalWrite(redLED,HIGH);
  digitalWrite(buzzer,HIGH);
  delay(100);
  digitalWrite(buzzer,LOW);
  delay(random(900,4901));
  digitalWrite(redLED,LOW);

  while(buttonPressed == 0){
    digitalWrite(yellowLED1,HIGH);
    digitalWrite(yellowLED2,HIGH);

    if(digitalRead(button1)==0){
      buttonPressed = 1;
      digitalWrite(yellowLED2,LOW);
    }else if(digitalRead(button2)==0){
      buttonPressed = 1;
      digitalWrite(yellowLED1,LOW);
    }
  }
  digitalWrite(buzzer,HIGH);
  delay(500);
  digitalWrite(buzzer,LOW);
  delay(1500);
  digitalWrite(yellowLED1,LOW);
  digitalWrite(yellowLED2,LOW);
  buttonPressed = 0;
}
