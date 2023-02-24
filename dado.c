#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
  time_t t1;
  int dado, valor, contador, numerosaleatorios;

  printf ("Cuantas veces quiere lanzar el dado? ");
  scanf ("%d", &dado);

  if (dado < 1)
    printf ("Error, no puede lanzar el dado menos de una vez");
  else {
      printf ("Que valor te interesa? ");
      scanf ("%d", &valor);

      if (valor > 6 || valor < 1)
	printf ("*** Error, ese valor no aparece en el dado");
      else {
	  srand ((unsigned) time (&t1));

	  for (int i = 1; i <= dado; i++) {

	      numerosaleatorios = (rand () % 6) + 1;

	  if (numerosaleatorios == valor)
		contador += 1;
	      printf ("%d\n", numerosaleatorios);
	    }
	  printf ("El %d cayo %d veces", valor, contador);
	}
    }
  return 0;
}
