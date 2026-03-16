#include <stdio.h>

/*La función regresa un “1” en casode que las cadenas comparadas sean iguales
y un “0” cuando sean diferentes*/
int CompararCadena (char *cadena1, char *cadena2, int *iguales)
{
  int i=0;   /*Contador para recorrer los caracteres de las cadenas*/

  while(cadena1[i] == cadena2[i] && cadena1[i] != '\0')  /*Compara los caracteres de las dos cadenas uno a uno, hasta que sean distintos*/
  i++;
  if (cadena1[i] == cadena2[i])
  {
    *iguales=1; /* Si las cadenas son iguales, regresa valor "1"*/
  }
  else
  {
    return 0; /* Si no son iguales, regresa valor "0"*/
  }
}

/*La función regresa el valor correspondiente al número de caracteres que tiene
la cadena que recibe.*/
int MedirCadena (char *cadena1, char *cadena2, int *CaracteresCadena1, int *CaracteresCadena2)
{
  int x=0; /*Contador para recorrer los caracteres de la cadena1*/
  int y=0; /*Contador para recorrer los caracteres de la cadena2*/

  while (cadena1[x] != '\0'){ /*Recorre los caracteres de la cadena hasta que sea el fin de la cadena 1*/
    x++;  /*Suma valor al contador de caracteres*/
  }
  while (cadena2[y] != '\0'){ /*Se repite el ciclo para la cadena 2*/
    y++;
  }
  /*Pasa el valor final del contador (x,y)a la variable que representa el numero de caracteres de cada cadena*/
  *CaracteresCadena1=x;
  *CaracteresCadena2=y;
}

/* La función recibe dos cadenas, la cadena origen que es una de las que se
lee desde la línea de comandos y la cadena destino (que será una cadena
diferente a las dos que se leyeron al inicio) y copia los caracteres de la
cadena origen en la cadena destino.*/
int CopiarCadena (char *cadena1, char *cadena2, char *CadenaNueva)
{
  int i=0; /*Contador para recorrer los caracteres de la cadena origen*/
  for (i=0;cadena1[i] != '\0';++i){
    CadenaNueva[i]=cadena1[i]; /*Copia el caracter, uno por uno, de la cadena origen a la destino*/
  }
  CadenaNueva[i]='\0'; /*Determina el fin de los caracteres de la cadena destino*/
}
