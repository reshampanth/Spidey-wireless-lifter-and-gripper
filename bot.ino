int gripperMotor1 = 12, gripperMotor2 = 13;
int lifterMotor1 = 10, lifterMotor2= 11;
int pwmMotorRight = 5;
int pwmMotorLeft = 6;
int motorLeft1 = 2, motorLeft2 = 3, motorRight1 = 4, motorRight2 = 7;
int frontMotorL1 = 8, frontMotorL2 = 9, frontMotorR1 = 14, frontMotorR2 = 15;

void setup() {
  Serial.begin(9600);
  pinMode(pwmMotorRight, OUTPUT);
  pinMode(pwmMotorLeft, OUTPUT);
  pinMode(motorLeft1, OUTPUT);
  pinMode(motorLeft2,OUTPUT);
  pinMode(motorRight1, OUTPUT);
  pinMode(motorRight2, OUTPUT);
  pinMode(frontMotorL1, OUTPUT);
  pinMode(frontMotorL2, OUTPUT);
  pinMode(frontMotorR1, OUTPUT);
  pinMode(frontMotorR2,OUTPUT);
  pinMode(gripperMotor1, OUTPUT);
  pinMode(gripperMotor2, OUTPUT);
  pinMode(lifterMotor1, OUTPUT);
  pinMode(lifterMotor2, OUTPUT);  
  delay(50);

}

void loop() {
  while( Serial.available() == 0);
    if(Serial.peek() == 'U')
    {
      int randomValue = Serial.parseInt();
      digitalWrite(motorLeft1, HIGH);
      digitalWrite(motorLeft2, LOW);
      digitalWrite(motorRight1, HIGH);
      digitalWrite(motorRight2, LOW);
      digitalWrite(pwmMotorRight, HIGH);
      digitalWrite(pwmMotorLeft, HIGH);
      digitalWrite(frontMotorL1, LOW);
      digitalWrite(frontMotorL2, LOW);
      digitalWrite(frontMotorR1, LOW);
      digitalWrite(frontMotorR2, HIGH);
      Serial.println('U');
    }
    if(Serial.peek() == 'D')
    {
      int randomValue = Serial.parseInt();
      digitalWrite(motorLeft1, LOW);
      digitalWrite(motorLeft2, HIGH);
      digitalWrite(motorRight1, LOW);
      digitalWrite(motorRight2, HIGH);
      digitalWrite(pwmMotorRight, HIGH);
      digitalWrite(pwmMotorLeft, HIGH);
      digitalWrite(frontMotorL1, LOW);
      digitalWrite(frontMotorL2, HIGH);
      digitalWrite(frontMotorR1, LOW);
      digitalWrite(frontMotorR2, HIGH);
      Serial.println('D');
    }
    if(Serial.peek() == 'R')
    {
      int randomValue = Serial.parseInt();
      digitalWrite(motorLeft1, LOW);
      digitalWrite(motorLeft2, HIGH);
      digitalWrite(motorRight1, HIGH);
      digitalWrite(motorRight2, LOW);
      digitalWrite(pwmMotorRight, HIGH);
      digitalWrite(pwmMotorLeft, HIGH);
      digitalWrite(frontMotorL1, LOW);
      digitalWrite(frontMotorL2, HIGH);
      digitalWrite(frontMotorR1, HIGH);
      digitalWrite(frontMotorR2, LOW);
      Serial.println('R');
    }
    if(Serial.peek() == 'L')
    {
      int randomValue = Serial.parseInt();
      digitalWrite(motorLeft1, HIGH);
      digitalWrite(motorLeft2, LOW);
      digitalWrite(motorRight1, LOW);
      digitalWrite(motorRight2, HIGH);
      digitalWrite(pwmMotorRight, HIGH);
      digitalWrite(pwmMotorLeft, HIGH);
      digitalWrite(frontMotorL1, HIGH);
      digitalWrite(frontMotorL2, LOW);
      digitalWrite(frontMotorR1, LOW);
      digitalWrite(frontMotorR2, HIGH);
      Serial.println('L');
    }
    if(Serial.peek() == 'S')
    {
      int randomValue = Serial.parseInt();
      digitalWrite(motorLeft1, LOW);
      digitalWrite(motorLeft2, LOW);
      digitalWrite(motorRight1, LOW);
      digitalWrite(motorRight2, LOW);
      digitalWrite(frontMotorL1, LOW);
      digitalWrite(frontMotorL2, LOW);
      digitalWrite(frontMotorR1, LOW);
      digitalWrite(frontMotorR2, LOW);
      digitalWrite(gripperMotor1, LOW);
      digitalWrite(gripperMotor2, LOW);
      digitalWrite(lifterMotor1, LOW);
      digitalWrite(lifterMotor2, LOW);
      Serial.println('S');
    }
     if(Serial.peek() == 'G')
    {
      int randomValue = Serial.parseInt();
      digitalWrite(gripperMotor1, HIGH);
      digitalWrite(gripperMotor2, LOW);
      Serial.println('G');
    }
      if(Serial.peek() == 'T')
    {
      int randomValue = Serial.parseInt();
      digitalWrite(gripperMotor1, LOW);
      digitalWrite(gripperMotor2, HIGH);
      Serial.println('T');
    }
      if(Serial.peek() == 'X')
    {
      int randomValue = Serial.parseInt();
      digitalWrite(lifterMotor1, HIGH);
      digitalWrite(lifterMotor2, LOW);
      Serial.println('X');
    }
     if(Serial.peek() == 'Y')
    {
      int randomValue = Serial.parseInt();
      digitalWrite(lifterMotor1, LOW);
      digitalWrite(lifterMotor2, HIGH);
      Serial.println('Y');
    }
    
    while (Serial.available() > 0)
    {
      Serial.read();
      
    }
    delay(15);

}


