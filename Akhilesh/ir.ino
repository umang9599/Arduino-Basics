int ir = 7;                         //set ir input pin to pin 7
int b = HIGH;                       // This is a variable to store the value which we get from IR sensor 
int led = 13;                       // we have taken led pin as 13 because pin 13 in arduino UNO has a built in LED
void setup()
{
  pinMode(led, OUTPUT);          
  pinMode(ir, INPUT);
  Serial.begin(9600);               // we have set the baud rate forserial communication to 9600   
}
void loop()
{
   b = digitalRead(ir); 
   if (b == LOW)                    // If IR sensor detects an obstacle it would give the value LOW or 0
   {
      Serial.println("STOP!!");
      digitalWrite(led, HIGH);
   }
   else
   {
      Serial.println("GO");
      digitalWrite(led, LOW);
   }
  delay(200);                  
}
