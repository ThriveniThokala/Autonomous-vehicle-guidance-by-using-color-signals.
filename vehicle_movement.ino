const int m1=D3;
const int m11=D4;
const int m2=D5;
const int m22=D6;
void setup()
{
  pinMode(m1, OUTPUT);
  pinMode(m11, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m22, OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  if(Serial.available()>0)
  {
  char data =Serial.read();
  if(data=='F' || data =='f')
  {
    //FORWARD DIRECTION
    Serial.println("Forward direction");
    digitalWrite(m1, HIGH);
    digitalWrite(m11, LOW);
    digitalWrite(m2, HIGH);
    digitalWrite(m22, LOW);
  }
  if(data=='B' || data =='b')
  {
    //BACKWARD DIRECTION
    Serial.println("Backward direction");
    digitalWrite(m1, LOW);
    digitalWrite(m11, HIGH);
    digitalWrite(m2, LOW);
    digitalWrite(m22, HIGH);
  }
  if(data=='R'  || data =='r')
  {
    //RIGHT DIRECTION
    Serial.println("Right direction");
    digitalWrite(m1, HIGH);
    digitalWrite(m11, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m22, HIGH);
  }
  if(data=='L' || data =='l')
  {
    //LEFT DIRECTION
    Serial.println("Left direction");
    digitalWrite(m1,LOW);
    digitalWrite(m11, HIGH);
    digitalWrite(m2, HIGH);
    digitalWrite(m22, LOW);
  }
  if (data=='S' || data=='s')
  {
    //STOP
    Serial.println("Stop");
    digitalWrite(m1,LOW);
    digitalWrite(m11, LOW);
    digitalWrite(m2, LOW);
    digitalWrite(m22, LOW);
  }
  }
}