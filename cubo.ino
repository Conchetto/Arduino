int Columnas[] = {14,15,13,12,11,10,9,8,7,6,5,4,3,2,0,1};   
int Filas[] = {18, 16, 19, 17};

int RandFila;     //Variable para fila aleatoria
int RandColumna;  //Variable para columna aleatoria
   
void setup()
{
int contador;
   
for (int contador = 0; contador < 17; contador++){
  pinMode(Columnas[contador], OUTPUT); }
   
for (int contador = 0; contador < 5; contador++){
  pinMode(Filas[contador], OUTPUT); }
}
   
void loop()
{
RandLed();
}
   
void RandLed()
{
RandFila = random(0,4);
RandColumna = random(0,16);
   
digitalWrite(Filas[RandFila], HIGH);
digitalWrite(Columnas[RandColumna], HIGH);
   
delay(75);
   
digitalWrite(Filas[RandFila], LOW);
digitalWrite(Columnas[RandColumna], LOW);
   
delay(50);
}

