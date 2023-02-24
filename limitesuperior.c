#include <stdio.h>

int main (){
    
  int numero, suma = 0;

  printf ("Escribe el limite superior: ");
  scanf ("%d", &numero);
  
  if (numero == 0)
    printf ("Error, No se puede sumar los numeros impares del 0 al 0");
  else {
      
      if (numero > 0){
	  for (int i = numero; i > 0; i--) {
	      
	      if (i % 2 != 0) {
		  printf ("%d \n", i);
		  suma += i;
		}
	    }
	}
      else
	for (int i = numero; i < 0; i++) {
	    if (i % 2 != 0) {
		printf ("%d \n", i);
		suma += i;
	      }
	  }
      printf ("La suma de los numeros impares es: %d", suma);
    }
  return 0;
}
