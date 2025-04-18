#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int tab[100], val, trouve = 0;
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 1000 + 1;
        printf("%d ", tab[i]);
    }

    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &val);

    for (int i = 0; i < 100; i++) {
        if (tab[i] == val) {
            trouve = 1;
            break;
        }
    }

    printf(trouve ? "entier présent\n" : "entier absent\n");
    return 0;
}
