#include <stdio.h>
#include <math.h>

int main() {
    int a = 16;
    int b = 3;
    int somme = a+b;
    int soustraction = a-b;
    int division = a/b;
    int multiplication = a*b;
    int modulo = a%b;
  if (a == b) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    if (a >= b) {
        printf("true\n");
    } else {
        printf("false\n");
    }
  printf ("La somme = %d\n",somme);
  printf ("La soustration = %d\n",soustraction);
  printf ("La division = %d\n",division);
  printf ("La multiplication = %d\n",multiplication);
  printf ("La modulo = %d\n",modulo);


}
