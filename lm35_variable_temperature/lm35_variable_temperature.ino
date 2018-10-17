float rawval;
float firsttemp;
float temp;
float factor;
char data;
void setup() {
  Serial.begin(9600);
  pinMode(A1, INPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  float rawval = analogRead(A1);
  firsttemp = (rawval * 500.0)/1023.0;
  temp = firsttemp - 20;
  factor = temp * 4.25;
  Serial.print("Temperatura= ");
  Serial.print(firsttemp);
  Serial.print("    Factor=");
  Serial.println(factor);
 delay(300); 
  if (firsttemp >= 20){
    analogWrite(12, factor);
   }
   else{
    analogWrite(12,0);
   }
}
