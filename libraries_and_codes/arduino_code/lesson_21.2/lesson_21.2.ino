/*
  Keyestudio Mini Tank Robot V3 (Popular Edition)
  lesson 21.2
  130 motor
  http://www.keyestudio.com
*/
int INA = 12;
int INB = 13;
int flame = A1; //Define the flame pin as analog pin A1
int val = 0;    //Define digital variables
void setup() {
  pinMode(INA, OUTPUT);//Set digital port INA as output
  pinMode(INB, OUTPUT);//Set digital port INB as output
  pinMode(flame, INPUT); //Define the flame as an input source
}

void loop() {
  val = analogRead(flame); //Read the analog value of the flame sensor
  if (val <= 700) {  //When analog value≤700, fan is on
    //Turn on the fan when flame is detected
    digitalWrite(INA, LOW);
    digitalWrite(INB, HIGH);
  } else {
    //Otherwise it stops operating
    digitalWrite(INA, LOW);
    digitalWrite(INB, LOW);
  }
}
//*************************************************
