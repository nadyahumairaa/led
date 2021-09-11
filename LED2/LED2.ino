//percobaan ke-2
//type data yang berfungsi sebagai penyimpan bilangan
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;
int ledPin4 = 10;
void setup() {
 //ledPin1-4 menjadi OUTPUT
  pinMode(ledPin1,OUTPUT);
  pinMode(ledPin2,OUTPUT);
  pinMode(ledPin3,OUTPUT);
  pinMode(ledPin4,OUTPUT);
}

void loop() {
  //menyalakan ledPin1 selama 0,1 detik
digitalWrite(ledPin1,HIGH);
delay(100);
//mematikan ledPin1 selama 0,1 detik
digitalWrite(ledPin1,LOW);
delay(100);
//menyalakan ledPin2 selama 0,1 detik
digitalWrite(ledPin2,HIGH);
delay(100);
//mematikan ledPin2 selama 0,1 detik
digitalWrite(ledPin2,LOW);
delay(100);
//menyalakan ledPin3 selama 0,1 detik
digitalWrite(ledPin3,HIGH);
delay(100);
//mematikan ledPin3 0,1 detik
digitalWrite(ledPin3,LOW);
delay(100);
// menyalakan ledPin4 selama 0,1 detik
digitalWrite(ledPin4,HIGH);
delay(100);
//mematikan ledPin4 selama 0,1 detik
digitalWrite(ledPin4,LOW);
delay(100);
//menyalakan ledPin3 menyala sealama 0,1 detik
digitalWrite(ledPin3,HIGH);
delay(100);
//mematikan ledPin3 selama 1 detik
digitalWrite(ledPin3,LOW);
delay(100);
//menyalakan ledPin2 selama 0,1 detik
digitalWrite(ledPin2,HIGH);
delay(100);
//mematikan ledPin2 selama 0,1 detik
digitalWrite(ledPin2,LOW);
delay(100);

}
