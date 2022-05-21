#define potentiometer A0
# define led 2

void setup()
{
  pinMode(potentiometer, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int val = analogRead(potentiometer);
  Serial.println(val);
  if(val<500)
  {
    digitalWrite(led, LOW);
  }
  else
  {  
    digitalWrite(led, HIGH);
  }  
}