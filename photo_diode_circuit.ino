
int LED = 13;
int val = 0;
void setup(){
  pinMode(LED,OUTPUT);
  Serial.begin(9600);
}

void loop(){
  val = analogRead(0);
  Serial.print(val);
  if(val<1000){
    digitalWrite(LED,LOW);
  }else{digitalWrite(LED,HIGH);
  }delay(10);
}
