int ldr;
int led1 = 0;
int led2 = 1;
int a[10];
int num=-1;
int pinA = 11;
int pinB = 7;
int pinC = 4;
int pinD = 2;
int pinE = 13;
int pinF = 10;
int pinG = 5;
int pinDP = 3;
int D1 = 12;
int D2 = 9;
int D3 = 8; 
int D4 = 6;

void setup() {
  
  pinMode(A0,INPUT);
  pinMode(pinA, OUTPUT);
  pinMode(pinB, OUTPUT);
  pinMode(pinC, OUTPUT);
  pinMode(pinD, OUTPUT);
  pinMode(pinE, OUTPUT);
  pinMode(pinF, OUTPUT);
  pinMode(pinG, OUTPUT);
  pinMode(pinDP, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(D3, OUTPUT);
  pinMode(D4, OUTPUT); 
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  for(int i= 0;i<10;i++) a[i] = 0;
  
  
}

void loop() {
  
  digitalWrite(led2, LOW);
  digitalWrite(led1, LOW);
  ldr = analogRead(A0);
 
//  Serial.println(ldr);
  
  for(int i=9;i>0;i--){
      a[i] = a[i-1];
  }
  if(ldr>60){  
    a[0]=1;
    digitalWrite(led1,HIGH);
    
  }
  else{  
    a[0]=0;  
    digitalWrite(led1,LOW);  
    
  }  
  if(((a[9]==1)&&(a[8]==1)&&(a[7]==1)) && ((a[0]==1)&&(a[1]==1)&&(a[2]==1))){
    num = a[3]+2*a[4]+4*a[5]+8*a[6];
    
    switch(num){
      case 1:
        digit3();one();
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(8000);
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;
      case 2:
        digit3();two();
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(8000);
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;
      case 3:
        digit3();three();
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(8000);
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;
      case 4:
        digit3();four();
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(8000);
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;
      case 5:
        digit3();five();
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(8000);
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;
      case 6:
        digit3();six();
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(8000);
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;
      case 7:
        digit3();seven();
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(8000);
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;
      case 8:
        digit3();eight();
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(8000);
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;
      case 9:
        digit3();nine();
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(8000);
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;
      case 0:
        digit3();zero();
        digitalWrite(led1, LOW);
        digitalWrite(led2, HIGH);
        delay(8000);
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;   
      default:
        digit3();
        turnOffAllSegments();
        digitalWrite(led2, LOW);
        break;      
      }
  }
  num = -1;   
  delay(1000);
}

void zero(){
digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, HIGH);
  }

  void one(){
digitalWrite(pinA, HIGH);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, HIGH);
}

void two(){
  digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, LOW);
digitalWrite(pinDP, HIGH);
  }
  
  void three(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, LOW);
digitalWrite(pinDP, HIGH);
    }
    
  void four(){
    digitalWrite(pinA, HIGH);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
digitalWrite(pinDP, HIGH);
    }
    
  void five(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
digitalWrite(pinDP, HIGH);
    }
    
  void six(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
digitalWrite(pinDP, HIGH);
    }
    
  void seven(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, HIGH);
    }
    
  void eight(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, LOW);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
digitalWrite(pinDP, HIGH);
    }
    
  void nine(){
    digitalWrite(pinA, LOW);
digitalWrite(pinB, LOW);
digitalWrite(pinC, LOW);
digitalWrite(pinD, LOW);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, LOW);
digitalWrite(pinG, LOW);
digitalWrite(pinDP, HIGH);
    }

  void digit3(){
    digitalWrite(D1, LOW);
digitalWrite(D2, LOW);
digitalWrite(D3, HIGH);
digitalWrite(D4, LOW);
      }    

  void turnOffAllSegments(){
          digitalWrite(pinA, HIGH);
digitalWrite(pinB, HIGH);
digitalWrite(pinC, HIGH);
digitalWrite(pinD, HIGH);
digitalWrite(pinE, HIGH);
digitalWrite(pinF, HIGH);
digitalWrite(pinG, HIGH);
digitalWrite(pinDP, HIGH);
          }

 
