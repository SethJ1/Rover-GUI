
int in1 = 2; 
int in2 = 4;
int enA = 3;

int in3 = 5;
int in4 = 7;
int enB = 6; 

void setup() {
  // put your setup code here, to run once:
  pinMode(enA, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  char data = Serial.read();
  switch (data) {
    case 'A':   
  digitalWrite(in1, HIGH); //Move Forwards
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);break;
    case 'B':   
  digitalWrite(in1, LOW); //Move Backwards
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
  digitalWrite(enA, 100);
  digitalWrite(enB, 100);
  delay(1500);break;
    case 'C':   
    digitalWrite(in1, HIGH); //Move Left
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, 100);
  digitalWrite(enB, 0);
  delay(1500);break;
    case 'D':   
  digitalWrite(in1, HIGH); //Move Right
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, 0);
  digitalWrite(enB, 100);
  delay(1500);break;
    case 'E':
  digitalWrite(in1, HIGH); //Move Right
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
  digitalWrite(enA, 0);
  digitalWrite(enB, 0);
  delay(1500);break;
    }
  }
