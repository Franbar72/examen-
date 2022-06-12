#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void dP ();
void dM ();
void p2 ();
  float circunferencia (float RADIO );
  float MRUV (float velocidad, float aceleracion, float tiempo);

    int opcion, a, b, c;
      float radio, velocidad, aceleracion, tiempo;  

  int main(){
  
        printf ("\n\tELIJA UNA DE LA OPCIONES\n");
         printf ("1) Calcular las raices de un polinomio2°: \n2) Calcular el volumen de una CIRCUNFERENCIA: \n3) Calcular MRUV de un movil:\n\n");
          scanf ("%d", &opcion);
  
  switch (opcion){
    
    case 1: printf ("\n\tRAICES:\n");
              dP ();
             p2();
             printf ("\n\n");
    break;
    case 2: printf ("\n\tVOLUMEN:\n");
          printf ("Ingrese el valor: "); scanf("%f", &radio); 
          printf ("\n\nV= %f", circunferencia(radio));
          printf ("\n\n");
    break;     
    case 3: printf ("\n\tMRUV\n");
            dM ();
            printf ("\n\nD= %fm", MRUV(velocidad,aceleracion,tiempo));
            printf ("\n\n");
    break;
  }  
  
          system ("pause");
          return 0;
}

  void dP(){
          printf ("valor a");
           scanf ("%d", &a);
           printf ("\nvalor b");
          scanf ("%d", &b);
           printf ("\n valor C");
          scanf ("%d", &c);
  } 


  void p2(){
  
      float raiz;
      float x, x1, x2;
      raiz = b*b-4*a*c;
  
    if (raiz == 0){
      x = -b/(2*a);
          printf ("El valor es: %f", x);  
    
  }    else if (raiz > 0){
      x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
      x2 = (-b-sqrt(b*b-4*a*c))/(2*a); 
          printf  ("las raices del polinomio ingresado son: x1= %f, x2= %f", x1, x2);
    
  }  else{
          printf ("\nERROR T_T.\n\n");
  }
}


    float circunferencia (float RADIO){
  int radio = RADIO;
      float vol = 4/3*2.16*(RADIO*RADIO*RADIO);
  
      if (vol > 0){
          printf ("\nEl volumen de la circunferncia es: %f", vol);
          printf ("\n\n");
  
  }  else if(vol <= 0){
          printf ("\nERROR, radio -0 o = 0 :(");
          printf ("\n\n");
  }
  
              return vol;
}


  void dM(){
  printf ("velocidad inicial: "); 
          scanf ("%f", &velocidad);
           printf ("\ntiempo: "); 
          scanf ("%f", &tiempo);
           printf ("\naceleracion: "); 
          scanf ("%f", &aceleracion);
}

  float MRUV (float velocidad, float aceleracion, float tiempo){
  float d= velocidad*tiempo+1/2*aceleracion*tiempo*tiempo;
            return 0;
}