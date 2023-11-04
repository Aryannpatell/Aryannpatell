int L_S = 3,R_s = 4;

int m1=8,m2=9,m3=10,m4=11;

int enA = 5,enB = 6;

void setup(){ 

pinMode(R_S, INPUT); 

pinMode(L_S, INPUT);

pinMode(enA, OUTPUT); 
  
pinMode(enB, OUTPUT); 
  
pinMode(m1, OUTPUT); 

pinMode(m2, OUTPUT); 

pinMode(m3, OUTPUT); 

pinMode(m4, OUTPUT); 

digitalWrite(enA, HIGH); 

digitalWrite(enB, HIGH);
  
}

void loop(){  

if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 0)){forward();} 

if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 0)){turnRight();}

if((digitalRead(R_S) == 0)&&(digitalRead(L_S) == 1)){turnLeft();}

if((digitalRead(R_S) == 1)&&(digitalRead(L_S) == 1)){Stop();} 

}

void forward(){

digitalWrite(m1, HIGH);

digitalWrite(m2, LOW); 

digitalWrite(m3, LOW); 

digitalWrite(m4, HIGH);

}

void turnRight(){

digitalWrite(m1, LOW);

digitalWrite(m2, HIGH);

digitalWrite(m3, LOW); 

digitalWrite(m4, HIGH);

}

void turnLeft(){

digitalWrite(m1, HIGH);

digitalWrite(m2, LOW); 
  
digitalWrite(m3, HIGH); 

digitalWrite(m4, LOW);

}

void Stop(){

digitalWrite(m1, LOW); 
  
digitalWrite(m2, LOW); 
  
digitalWrite(m3, LOW); 
  
digitalWrite(m4, LOW); 
  
}