//code for getting orientation from accelerometer using arduino

float xpin = A1;           //we are taking float as datatype because we need value accuarte upto decimals.
float ypin = A2;
float zpin = A3;                 
void setup()
{
  Serial.begin(9600);             // baud rate for serial communication from accelerometer is 9600
  pinMode(A1, INPUT);
  pinMode(A2,INPUT);
  pinMode(A3,INPUT);
  }

void loop()
{
  Serial.print(analogRead(xpin));
  Serial.print("\t");
  Serial.print(analogRead(ypin));
  Serial.print("\t");
  Serial.print(analogRead(zpin));
  Serial.println();
  delay(100);
}
