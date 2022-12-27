//Test entradas Moxa ioLogik E2210
//Conectar entradas Moxa a los pines digitales 30,31,32,33,34,35,36,37,38,39,40 y 41 del arduino
//Registro de pulsos en monitor Serie


bool flag0;
bool flag1;
bool flag2;
bool flag3;
bool flag4;
bool flag5;
bool flag6;
bool flag7;
bool flag8;
bool flag9;
bool flag10;
bool flag11;


void setup() {
  pinMode(30, OUTPUT);
  pinMode(31, OUTPUT);
  pinMode(32, OUTPUT);
  pinMode(33, OUTPUT);
  pinMode(34, OUTPUT);
  pinMode(35, OUTPUT);
  pinMode(36, OUTPUT);
  pinMode(37, OUTPUT);
  pinMode(38, OUTPUT);
  pinMode(39, OUTPUT);
  pinMode(40, OUTPUT);
  pinMode(41, OUTPUT);

  flag0 = true;
  flag1 = true;
  flag2 = true;
  flag3 = true;
  flag4 = true;
  flag5 = true;
  flag6 = true;
  flag7 = true;
  flag8 = true;
  flag9 = true;
  flag10 = true;
  flag11 = true;
  

  digitalWrite(30, HIGH);
  digitalWrite(31, HIGH);
  digitalWrite(32, HIGH);
  digitalWrite(33, HIGH);
  digitalWrite(34, HIGH);
  digitalWrite(35, HIGH);
  digitalWrite(36, HIGH);
  digitalWrite(37, HIGH);
  digitalWrite(38, HIGH);
  digitalWrite(39, HIGH);
  digitalWrite(40, HIGH);
  digitalWrite(41, HIGH);  
}

void loop() {

  //*******************************
  //Normalmente cerrado
  delay(2000);
  
  if (flag0 == true) {
    digitalWrite(30, LOW);   
    flag0 = false;
  }
delay(250);
  if (flag1 == true) {
    digitalWrite(31, LOW);   
    flag1 = false;
  }
delay(250);

  if (flag2 == true) {
    digitalWrite(32, LOW); 
    flag2 = false;
  }

delay(250);
  if (flag3 == true) {
    digitalWrite(33, LOW);
    flag3 = false;
  }
  delay(250);

  if (flag4 == true) {
    digitalWrite(34, LOW);  
    flag4 = false;
  }
delay(250);

  if (flag5 == true) {
    digitalWrite(35, LOW);
    flag5 = false;
  }
delay(250);

  if (flag6 == true) {
    digitalWrite(36, LOW);
    flag6 = false;
  }
delay(250);

  if (flag7 == true) {
    digitalWrite(37, LOW); 
    flag7 = false;
  }
delay(250);

  if (flag8 == true) {
    digitalWrite(38, LOW);
    flag8 = false;
  }
delay(250);

  if (flag9 == true) {
    digitalWrite(39, LOW);  
    flag9 = false;
  }

delay(250);
  if (flag10 == true) {
    digitalWrite(40, LOW);
    flag10 = false;
  }

delay(250);
  if (flag11 == true) {
    digitalWrite(41, LOW);
    flag11 = false;
  }
}
