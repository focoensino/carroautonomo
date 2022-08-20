#define ena1 4
#define ena2 5
#define v 3
int vl1 = 200;

#define enb1 8
#define enb2 9
#define v2 10
int vl2 = 120;

void setup() {
pinMode(v,OUTPUT);
pinMode(ena1,OUTPUT);
pinMode(ena2,OUTPUT);

pinMode(v2,vl2);
pinMode(enb1,OUTPUT);
pinMode(enb2,OUTPUT);
}

void loop(){
  frente();
  }

void frente() {
 analogWrite(v,vl1);
 digitalWrite(ena1,HIGH);
 digitalWrite(ena2,LOW);

 analogWrite(v2,vl2);
 digitalWrite(enb1,HIGH);
 digitalWrite(enb2,LOW);
}


void tras() {
 analogWrite(v,vl1);
 digitalWrite(ena1,LOW);
 digitalWrite(ena2,HIGH);
 
 analogWrite(v2,vl2);
 digitalWrite(enb1,LOW);
 digitalWrite(enb2,HIGH);
}



void parado() {
 digitalWrite(ena1,LOW);
 digitalWrite(ena2,LOW);
 digitalWrite(enb1,LOW);
 digitalWrite(enb2,LOW);
}
