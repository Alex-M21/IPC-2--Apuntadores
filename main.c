#include <stdio.h>

  int main() {
char c = 'z';
char *pc = &c;
char **ppc = &pc;
char ***pppc = &ppc;
***pppc = 'm'; // Cambia el valor de c a M

printf("El valor del ultimo apuntadores : %c",***pppc);
  return 0;

  }

  