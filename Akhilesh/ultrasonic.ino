int pulseOut = 4;             //we have declared pin no. 4 of arduino as the pin from which output to ultrasonic sensor will be given
int pulseIn =3;               //similarly, decalred pin no. 3 from which we would recieve the input from ultrasonic sensor 
long k;                       //created a variable to store the input data from ultrasonic sensor for further processing
int distance;                 //this variable would store the final processed data of the distance
void setup()
{
  pinMode(pulseOut, OUTPUT);    // set the pin for output mode
  pinMode(pulseIn, INPUT);      //set the pin for input mode
  Serial.begin(9600);
}

void loop() 
{
  digitalWrite(pulseOut, LOW);        //stopped the current supply to the output pin
  delay(2);
  digitalWrite(pulseIn, HIGH);        //started the current supply for output pin  
  delay(10);
  digitalWrite(t, LOW);               //again stopped the current supply to the output pin
  k=pulseIn(e, HIGH);                 //value of distance is taken from input pin
  d=k*0.034/2;                        //standard formula to calculate the distance from ultrasonic sensor
  Serial.print("dist: ");               
  Serial.println(d);
}
