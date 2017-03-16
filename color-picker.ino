// Readings for White
int wR=800;
int wG=735;
int wB=715;
 
// Readings for Black
int bR=275;
int bG=266;
int bB=275;

void setup() {
  Serial.begin(9600);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(6, INPUT_PULLUP);
}

void loop() {
    int R, G, B;
  
    int value=digitalRead(6);
    //Quando o botão está pressionado

    //Serial.println(analogRead(0));delay(100);// leitura contínua do LDR
    
    if(value == 0)  {
      
    //Liga a LED RGB com Vermelho
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    delay(100);
    R = analogRead(0);

    //Liga a LED RGB com Verde
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(3, LOW);
    delay(100);
    G = analogRead(0);

    //Liga a LED RGB com Azul
    digitalWrite(3, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    delay(100);
    B = analogRead(0);

    digitalWrite(5, LOW);
     digitalWrite(4, LOW);
    digitalWrite(3, LOW);

        // normalizar
        /*
    Serial.print("Vermelho:");
    Serial.println(R);
    Serial.print("Verde:");
    Serial.println(G);
    Serial.print("Azul:");
    Serial.println(B );  
*/
   R=map(R, bR, wR, 0, 255);
   G=map(G, bG, wG, 0, 255);
   B=map(B, bB, wB, 0, 255);
    
   if( R < 0) R = 0;
   if( G < 0) G = 0;
   if( B < 0) B = 0;
   if( R > 255 ) R = 255;
   if( G > 255 ) G = 255;
   if( B > 255 ) B = 255;

    Serial.print("Vermelho:");
    Serial.println(R);
    Serial.print("Verde:");
    Serial.println(G);
    Serial.print("Azul:");
    Serial.println(B );
    }
    
}
