//alarm project

float sinVal;
int toneVal;

void setup() {
  // put your setup code here, to run once:
   pinMode(8,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int x=0;x<180;x++){
    //convert angle of sinusodial to radian measure
    sinVal = (sin(x*(3.1412/180)));
    //generate sound of different frequencies by sinusodial
    toneVal = 2000+(int(sinVal*1000));
    //set a frequency for pin out 8
    tone(8,toneVal);
    delay(2);
  }
}
