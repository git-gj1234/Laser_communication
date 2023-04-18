int laser = 2;

void setup() {
  pinMode(laser,OUTPUT);
  int num;
  Serial.begin(9600);
}
void loop() {  
  if(Serial.available() > 0)  {
    int incomingData= Serial.read(); // can be -1 if read error
    if((int)incomingData-48 > -1){
    send_data((int)incomingData-48);
    Serial.println((int)incomingData -48);}
 }
}

void send_data(int n){
  byte y = n;
  digitalWrite(laser,HIGH);
  delay(3000);
  digitalWrite(laser,LOW);
  for(int i=3; i>=0; i--){
    bool m = bitRead(y, i);
    if(m == 1){
      digitalWrite(laser,HIGH);
    }
    delay(1000);  
    digitalWrite(laser,LOW);
  }
  digitalWrite(laser,HIGH);
  delay(3000);
  digitalWrite(laser,LOW); 
}
