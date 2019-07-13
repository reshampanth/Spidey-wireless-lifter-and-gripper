  int potGripper = 1;
  int potLifter = 2;
  int newGripper = 0;
  int newLifter = 0;
  int leftButton=2 , rightButton=3 , downButton=4 , upButton=5;
  int gearLow = 6, gearHigh = 7;
  int gearValue; 
void setup() 
{
  Serial.begin(9600);
 pinMode(potGripper, INPUT);
 pinMode(potLifter, INPUT);
 pinMode(leftButton, INPUT);
 pinMode(rightButton, INPUT);
 pinMode(upButton, INPUT);
 pinMode(downButton, INPUT);

}

void loop() {
  //Control Buttons send L, R, U, D

  if(digitalRead(upButton)== HIGH)
  {
    Serial.println('U');
    Serial.println('1');
    Serial.println('#');
  }
  if(digitalRead(downButton)== HIGH)
  {
    Serial.println('D');
    Serial.println('1');
    Serial.println('#');
  }
  if(digitalRead(rightButton)== HIGH)
  {
    Serial.println('R');
    Serial.println('1');
    Serial.println('#');
  }
  if(digitalRead(leftButton)== HIGH)
  {
    Serial.println('L');
    Serial.println('1');
    Serial.println('#');
  }
  
  int oldGripper = analogRead(potGripper);
  int oldLifter = analogRead(potLifter);
  int Grippervalue = map(oldGripper,0,1023,0,9);
  int Liftervalue = map(oldLifter,0,1023,0,9);
  if(newGripper != Grippervalue)
  {
    Serial.println('!');
    Serial.println(Grippervalue);
    Serial.println('#');
    newGripper = Grippervalue;
  }
  if(newLifter != Liftervalue)
  {
    Serial.println('@');
    Serial.println(Liftervalue);
    Serial.println('#');
    newLifter = Liftervalue;
  }

    if((digitalRead(leftButton)==  LOW) && (digitalRead(rightButton)==LOW) &&(digitalRead(upButton)==LOW) && (digitalRead(downButton)==LOW))
  {
    Serial.println('S');
    Serial.println('1');
    Serial.println('#');
  }
  //For Changing Gears
  int newGear = digitalRead(gearLow);
    if(gearValue != newGear)
  {
    Serial.println('G');
    Serial.println(newGear);
    Serial.println('#');
    gearValue = newGear;
  }
delay(10);
}
