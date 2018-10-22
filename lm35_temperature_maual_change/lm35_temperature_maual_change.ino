float rawval;
float firsttemp;
float temp;
float factor;
float ref;
float ref2;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(13, OUTPUT);
  pinMode(A2, INPUT);
}

void loop() {
  rawval = analogRead(A0);
  delay(10);  
  ref = analogRead(A2);
  delay(10);
  ref2 = (ref * 60.0)/1023.0;
  
  firsttemp = (rawval * 500.0)/1023.0;
  temp = firsttemp - 20.0;
  factor = temp * 4.25;
  Serial.print("Limiter = ");
  Serial.print(ref2);
  Serial.print(" Temperatura= ");
  Serial.print(firsttemp);
  Serial.print("    Factor=");
  Serial.println(factor);
 delay(300); 
  if (firsttemp >= ref2){
    analogWrite(12, factor);
   }
   else{
    analogWrite(12,0);
   }
}
