#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NCARACT 7

void invertirCadena(char cadenaBase[NCARACT],char cadenaFin[NCARACT]);



int main()
{
    char cadena [NCARACT];
    char cadenaI [NCARACT];

    printf("Introduce cadena: ");
    gets(cadena);

    invertirCadena(cadena,cadenaI);

    printf("\nLa cadena invertida: %s", cadenaI);

    return 0;
}

void invertirCadena(char cadenaBase[NCARACT],char cadenaFin[NCARACT])
{

 int largo;
 int i;
 int j;


 largo = strlen(cadenaBase);

 j = largo - 1;


 for (i=0; i < largo; i++)
 {
  cadenaFin[i] = cadenaBase[j];

  j--;
 }

 cadenaFin[largo] = '\0';


 return;


}
