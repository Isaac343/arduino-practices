int rawval;
int temp;
int del;
void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  rawval = analogRead(A0);
  temp = (rawval*5*100)/1023;
  Serial.println(temp);
  delay(200); 

  if (temp >= 20){
    analogWrite(13,255);
   }
   else{
    analogWrite(13,0);
   }
}
