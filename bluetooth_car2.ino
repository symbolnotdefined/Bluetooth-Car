char data;
void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT); 
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);

}

void loop() 
{
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  
  if(Serial.available())
    data=Serial.read();
    Serial.println(data);
     if(data=="F"){
    fwd();
  }
  else if(data=="B"){
    rev();
  }
  else if(data=="L"){
    lft();
  }
  else if(data=="R"){
    rght();
  }
  else if(data=="N"){
    stp();
  }
}
  

  // put your main code here, to run repeatedly:
  void rght()
{
  analogWrite(2,HIGH);
  analogWrite(3,LOW);
  analogWrite(4,HIGH);
  analogWrite(5,LOW);
}

void lft()
{
  analogWrite(2,LOW);
  analogWrite(3,HIGH);
  analogWrite(4,LOW);
  analogWrite(5,HIGH);
}

void fwd()
{
  analogWrite(2,LOW);
  analogWrite(3,HIGH);
  analogWrite(4,HIGH);
  analogWrite(5,LOW);
}

void rev()
{
  analogWrite(2,HIGH);
  analogWrite(3,LOW);
  analogWrite(4,LOW);
  analogWrite(5,HIGH);
}

void stp()
{
  analogWrite(2,LOW);
  analogWrite(3,LOW);
  analogWrite(4,LOW);
  analogWrite(5,LOW);
}
  

