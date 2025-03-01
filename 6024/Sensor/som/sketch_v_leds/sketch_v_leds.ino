int soundPin = A0;
int LED = 13;
 
void setup()
{
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}
 
void loop()
{
    long sum = 100;
    for(int i=0; i<100; i++)
    {
       sum += analogRead(soundPin);
    }
 
    sum = sum/100;
 
    if(sum > 1000){
      digitalWrite(LED, HIGH);
    }else{
      digitalWrite(LED, LOW);
    }
 
    Serial.println(sum);
    delay(500);
}
