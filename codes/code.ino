int A,X,Y,Z;

void disp_7447(int A )
{
  digitalWrite(2, A); //LSB
    

}
// the setup function runs once when you press reset or power the board
void setup() {
    pinMode(6, INPUT);  
    pinMode(7, INPUT);
    pinMode(8, INPUT);
    pinMode(2,OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
Z= digitalRead(6);
Y=digitalRead(7);
X=digitalRead(8);
A=(X&&Y&&!Z);
    
disp_7447(A);

}
