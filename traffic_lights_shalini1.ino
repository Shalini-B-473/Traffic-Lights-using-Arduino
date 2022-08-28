// C++ code
//
int r=2;
int y=3;
int g=4;
void setup()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
  pinMode(2,OUTPUT);digitalWrite(r,LOW);
  pinMode(3,OUTPUT);digitalWrite(y,LOW);
  pinMode(4,OUTPUT);digitalWrite(g,LOW);
}
void traffic(){
  digitalWrite(g,HIGH);Serial.println("Green LED ON : GO");
  delay(30000);
  digitalWrite(g,LOW);
  
  digitalWrite(y,HIGH);Serial.println("Yellow LED ON : WAIT");
  delay(5000);
  digitalWrite(y,LOW);
  
  digitalWrite(r,HIGH);Serial.println("Red LED ON : STOP");
  delay(10500);
  digitalWrite(r,LOW); 
}
void loop()
{
  /*
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); // Wait for 1000 millisecond(s)*/
  //Serial.println("Hello Arduino");
  traffic();
  delay(3000);
}