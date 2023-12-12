// define and enable
const int in1 = 8;
const int in2 = 9;
const int in3 = 10;
const int in4 = 11;
int E1 = 5; 
int M1 = 4; 
int E2 = 6; 
int M2 = 7;

void setup()
{
Serial.begin(115200);
pinMode(in1,OUTPUT) ;
pinMode(in2,OUTPUT) ;
pinMode(in3, OUTPUT) ;
pinMode(in4, OUTPUT) ;
pinMode(M1, OUTPUT);
pinMode(M2, OUTPUT);
}

void loop()
{
//actuate the first module for 500 ms
digitalWrite(E1,HIGH) ;
digitalWrite(E2,LOW) ;
digitalWrite(in1,LOW) ;
digitalWrite(in3, LOW) ;
delay(500) ;
//actuate the second module for 500 ms
digitalWrite(E1,LOW) ;
digitalWrite(E2,HIGH) ;
digitalWrite(in1,LOW) ;
digitalWrite(in3, LOW) ;
delay(500) ;
//actuate the third module for 500 ms
digitalWrite(E1,LOW) ;
digitalWrite(E2,LOW) ;
digitalWrite(in1,HIGH) ;
digitalWrite(in3, LOW) ;
delay(500) ;
//actuate the last module for 500 ms
digitalWrite(E1,LOW) ;
digitalWrite(E2,LOW) ;
digitalWrite(in1,LOW) ;
digitalWrite(in3, HIGH) ;
delay(500) ;
}
