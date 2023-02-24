#include <stdio.h>

int main () {

  int numero;

  printf ("Escriba un numero para encontrar su factor: ");
  scanf ("%d", &numero);
  if (numero <= 0)
    printf
      ("Error, solo se pueden calcular los factores de numeros positivos");
  else
    {
      printf ("Los factores de %d son:\n", numero);

      for (int i = 1; i <= numero; i++)
	{

	  if (numero % i == 0)
	    printf ("%d,", i);
	}
    }
  return 0;
}
