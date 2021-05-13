#include <stdio.h>
int main () 
{
     /* Martínez Pérez Carlos Alberto
    equipo los burros dorados del 17
    12 MAY 21.
    */
   float numerodepersonas, numerodealimentos, porciones;
   printf ("\n\n Programa 1");
   printf ("\n\n Dame el numero de personas");
   scanf ("%f",&numerodepersonas);
   printf ("\n\n Dame el numero de alimentos disponibles");
   scanf ("%f",&numerodealimentos);
   porciones=numerodealimentos/numerodepersonas;
   printf ("\n\n La porcion para dividir equitativamente a cada persona es %f",porciones);
    return 0;
}

   
