#include <SoftwareSerial.h>
SoftwareSerial mySerial(2,3);
int led = 13;
void setup() {
  // put your setup code here, to run once:
  mySerial.begin(9600);
  Serial.begin(9600);
  pinMode(led, OUTPUT);
 

}

void loop() {
  // put your main code here, to run repeatedly:
  int i;

  if (mySerial.available()){
    Serial.println("Module available");
    i = mySerial.read();
    Serial.println("Data received");
    if(i=='1'){
      digitalWrite(led, 1);
      Serial.println("Led on");
    }
    if(i=='0'){
      digitalWrite(led, 0);
      Serial.println("Led off");
    }
  }

}
