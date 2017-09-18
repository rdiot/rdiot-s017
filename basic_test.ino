/* IR Infrared Obstacle Avoidance Sensor (IR-08H) [S017] : http://rdiot.tistory.com/170 [RDIoT Demo] */

int T = 2; // INPUT PIN
 
void setup()
{
  Serial.begin(115200); 
  pinMode(T, INPUT);
}
 
void loop()
{
  if (LOW == digitalRead(T))
  {
    Serial.println("IR Detected"); //detected
  }
  else
  {
    Serial.print("."); 
  }
  delay(100);
}
