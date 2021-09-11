//lampu lalu lintas
//type data yang berfungsi sebagai penyimpan bilangan
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
//menjadikan ledPin1-3 sebagai OUTPUT
void setup() {
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
}

void loop() {
 //menyalakan ledPin1 selama 4 detik dan ledPin2 selama 1 detik
digitalWrite(ledPin1,HIGH);
delay(4000);
digitalWrite(ledPin2,HIGH);
delay(1000);
//pause atau mematikan ledPin2 dan ledpin1 selama 0,05 detik
digitalWrite(ledPin2,LOW);
digitalWrite(ledPin1,LOW);
delay(50);
//menyalakan ledPin3 selama 5 detik dan ledPin2 selama 1 detik
digitalWrite(ledPin3,HIGH);
delay(5000);
digitalWrite(ledPin2,HIGH);
delay(1000);
//pause atau mematikan ledPin2 dan ledPin3 selama 0,05 detik
digitalWrite(ledPin2,LOW);
digitalWrite(ledPin3,LOW);
delay(50);
}
