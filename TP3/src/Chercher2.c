#include <stdio.h>

int comparer_chaine(const char *a, const char *b) {
    while (*a && *b) {
        if (*a != *b) return 0;
        a++; b++;
    }
    return (*a == *b);
}

int main() {
    char *phrases[10] = {
        "Bonjour, comment ça va ?"
        "La recherche dans un tableau est intéressante.",
        "Les structures de données sont importantes.",
        "Programmer en C, c'est génial."
    };

    char cherche[100];
    printf("Entrez la phrase à chercher :\n");
    fgets(cherche, sizeof(cherche), stdin);

    int trouvée = 0;
    for (int i = 0; i < 10; i++) {
        if (comparer_chaine(phrases[i], cherche)) {
            trouvée = 1;
            break;
        }
    }

    printf(trouvée ? "Phrase trouvée\n" : "Phrase non trouvée\n");
    return 0;
}
