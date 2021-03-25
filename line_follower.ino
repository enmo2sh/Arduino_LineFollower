int s1=3;
int s2=2;
int st1;
int st2;
//int st3;

void setup() {
  pinMode(5,OUTPUT); // LEFT
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);//RIGHT
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);//SPEED
  pinMode(10,OUTPUT);
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);

}
 void forward(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  analogWrite(9,55);
  analogWrite(10,55);
  }
  /* void backrward(){
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  digitalWrite(8,HIGH);
  analogWrite(9,65);
  analogWrite(10,65);
  }*/
   void right(){
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  analogWrite(9,55);
  analogWrite(10,55);
  }
   void left(){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  digitalWrite(8,LOW);
  analogWrite(9,55);
  analogWrite(10,55);
  }
   void stopp(){
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  digitalWrite(8,LOW);
  analogWrite(9,55);
  analogWrite(10,55);
  }
void loop() {
  // 1 means whilte
  //0 means black
  st1=digitalRead(s1);
  st2=digitalRead(s2);
  if((st1==0)&&(st2==0))
    stopp();
  else if ((st1==0)&&(st2==1))
    left();
  else if ((st1==1)&&(st2==0))
    right();
  else if ((st1==1)&&(st2==1))
    forward();
}
