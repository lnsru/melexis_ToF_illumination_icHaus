
int voltagePin = 12;
int enablePin = 13;



void setup() 
{
    Serial.begin(9600);
    Serial.print("Online");   
 
    pinMode(enablePin, OUTPUT);  
    digitalWrite(enablePin,LOW); 

    pinMode(voltagePin, OUTPUT);  
    digitalWrite(voltagePin, HIGH); 


}
 
void loop()
{
  delay(10) ; 
  digitalWrite(enablePin, HIGH);
  delay(1) ;
  digitalWrite(enablePin, LOW);
}
