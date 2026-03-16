/****************************************************************************
Alternativas de Funciones strcmp, strlen y strcpy.
Programa que trabaja alternativas para las funciones strcmp, strlen y strcpy a
través del manejo de dos cadenas que se leerán como argumento desde la línea de
comandos.

Por: Monica Ivette Vergara Mendoza
****************************************************************************/
#include <stdio.h>
#include <string.h>

extern int CompararCadena (char *cadena1, char *cadena2,int *iguales);
extern int MedirCadena (char *cadena1, char *cadena2, int *CaracteresCadena1, int *CaracteresCadena2);
extern int CopiarCadena (char *cadena1, char *cadena2, char *CadenaNueva);

int main (int argc, char *argv[])
{
  char cadena1[20]; /*Declaración de cadena1*/
  char cadena2[20]; /*Declaración de cadena2*/
  int iguales=0;  /*Diferencia si una cadena es igual a otra, uso:función CompararCadena*/
  int CaracteresCadena1=0; /*Representa el número de caracteres de la cadena1, uso:función MedirCadena*/
  int CaracteresCadena2=0; /*Representa el número de caracteres de la cadena2, uso:función MedirCadena*/
  char CadenaNueva[20]; /*Es la cadena Destino, donde se copiaran los caracteres de una cadena ingresada por el usuario, uso:función CopiarCadena*/

  sscanf (argv [1],"%s",cadena1); /*Se alamcena el argumento 1,en cadena1*/
  sscanf (argv [2],"%s",cadena2); /*Se alamcena el argumento 2,en cadena2*/

/*** Aquí comienza la función de Comparar Cadenas ***/
  CompararCadena(cadena1,cadena2,&iguales);
  printf("%d ",iguales);
  if(iguales==1){
    printf("Las cadenas son iguales\n");
  }
  else{
    printf("Las cadenas son diferentes\n");
  }

/***Aquí comienza la función de Medir Cadenas (muestra el numero de caracteres de cada cadena)***/
    MedirCadena(cadena1,cadena2,&CaracteresCadena1,&CaracteresCadena2);
    printf("[%s] cuenta con %d caracteres y [%s] cuenta con %d caracteres\n",cadena1,CaracteresCadena1,cadena2,CaracteresCadena2);

/***Aquí comienza la función de Copiar Cadenas***/
    CopiarCadena(cadena1,cadena2,CadenaNueva);
    printf("Cadena Origen: [%s] Cadena Destino: [%s]\n",cadena1,CadenaNueva);
}
