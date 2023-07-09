 int button = 11;
 int led = 12;
int reading = 0;
void setup() {
  // put your setup code here, to run once:
pinMode(button, INPUT);
pinMode(led, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
reading = digitalRead(button);
  
if (reading==HIGH)
{
 digitalWrite(led,!digitalRead(led)); }
  delay(250);
}
