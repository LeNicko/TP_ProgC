#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int tab[100], val, gauche = 0, droite = 99, milieu, trouve = 0;
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        tab[i] = rand() % 1000 + 1;
    }

    qsort(tab, 100, sizeof(int), compare);

    for (int i = 0; i < 100; i++) {
        printf("%d ", tab[i]);
    }

    printf("\nEntrez l'entier que vous souhaitez chercher : ");
    scanf("%d", &val);

    while (gauche <= droite) {
        milieu = (gauche + droite) / 2;
        if (tab[milieu] == val) {
            trouve = 1;
            break;
        } else if (tab[milieu] < val) {
            gauche = milieu + 1;
        } else {
            droite = milieu - 1;
        }
    }

    printf(trouve ? "entier présent\n" : "entier absent\n");
    return 0;
}
