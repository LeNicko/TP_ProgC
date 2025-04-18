#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct {
    unsigned char r, g, b, a;
} Couleur;

typedef struct {
    Couleur c;
    int nb;
} StatCouleur;

int couleurs_egales(Couleur c1, Couleur c2) {
    return c1.r == c2.r && c1.g == c2.g && c1.b == c2.b && c1.a == c2.a;
}

int main() {
    Couleur tab[100];
    StatCouleur stats[100];
    int distinctes = 0;
    srand(time(NULL));

    for (int i = 0; i < 100; i++) {
        tab[i].r = rand() % 256;
        tab[i].g = rand() % 256;
        tab[i].b = rand() % 256;
        tab[i].a = 255;

        int trouvé = 0;
        for (int j = 0; j < distinctes; j++) {
            if (couleurs_egales(tab[i], stats[j].c)) {
                stats[j].nb++;
                trouvé = 1;
                break;
            }
        }

        if (!trouvé) {
            stats[distinctes].c = tab[i];
            stats[distinctes].nb = 1;
            distinctes++;
        }
    }

    for (int i = 0; i < distinctes; i++) {
        printf("%02x %02x %02x %02x : %d\n",
            stats[i].c.r, stats[i].c.g, stats[i].c.b, stats[i].c.a,
            stats[i].nb);
    }

    return 0;
}
