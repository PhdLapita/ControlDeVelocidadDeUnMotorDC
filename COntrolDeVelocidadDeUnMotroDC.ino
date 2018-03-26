/*
  Control de velocidad de un motor DC
  
  El motor gira en un sentido por 2 segundos luego cambia 
  de sentido por otro 2 segundos, finalmente se detiene.
 */
 
int IN3 = 2;  //Se define la variable IN3 al pin 2 del arduino nano
int IN4 = 4;  //Se define la variable IN4 al pin 4 del arduino nano
int ENB = 3;  //Se define la variable ENB al pin 3 del arduino nano 
              //porque este pin puede dar señales PWM (Modulacion 
              //por ancho de pulso)y asi poder controlar la velocidad

// Configuracion previa que ejecuta el arduino antes de ejecutar el
// bucle, y que volvera a ejecutar si se presiona el boton reset
void setup() {                
  
  pinMode(2, OUTPUT);  //Se configura como pin de salida
  pinMode(3, OUTPUT);  //Se configura como pin de salida
  pinMode(4, OUTPUT);  //Se configura como pin de salida
}

// the loop routine runs over and over again forever:
void loop() {
 // sentidoHorario();
  //velocidad(80);
  //delay(2000);
  //semtidoAntihorario();
  //velocidad(180);
  //delay(2000);
  velocidad(0);// puedes usar tambien funcion detener(); 
 // delay(2000);
}

void velocidad(int v){
  analogWrite(ENB, v);
}

void sentidoHorario(){
  digitalWrite(IN3, HIGH);   
  digitalWrite(IN4, LOW);
}

void semtidoAntihorario(){
  digitalWrite(IN3, LOW);   
  digitalWrite(IN4, HIGH);
}
void detener(){// PARA DETENER PONER AMBOS EN HIGH O AMBOS EN LOW
  digitalWrite(IN3, LOW);   
  digitalWrite(IN4, LOW);
}

