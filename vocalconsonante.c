#include <stdio.h>

int main () {

  char nombre = 'O';
  for (char i = 'A'; i <= 'Z'; i++) {
      if (i == nombre) 
          
	printf ("$$$$$$%c$$$$$$ con esta letra empieza mi nombre\n",nombre);
	
      if (i == 'A' || i == 'E' || i == 'I' || i == 'O' || i == 'U')
	printf ("**%c** es una vocal\n", i);
      else
	printf ("-%c- es consonante\n", i);
    }
  return 0;
}
