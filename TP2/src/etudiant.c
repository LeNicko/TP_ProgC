#include <stdio.h>

int main() {
    char *noms[] = {"Dupont", "Martin", "Nguyen", "Leroy", "Moreau"};
    char *prenoms[] = {"Alex", "Antonin", "Robin", "Pierre", "Khadidiatou"};
    char *adresses[] = {
        "ici",
        "la",
        "par ici",
        "plus loin",
        "Environ la"
    };
    float notes_prog[] = {14.5, 12.0, 16.0, 10.5, 18.0};
    float notes_sys[] = {13.0, 15.5, 14.0, 11.0, 17.5};

    for (int i = 0; i < 5; i++) {
        printf("Étudiant %d :\n", i + 1);
        printf("Nom : %s\n", noms[i]);
        printf("Prénom : %s\n", prenoms[i]);
        printf("Adresse : %s\n", adresses[i]);
        printf("Note Prog en C : %.2f\n", notes_prog[i]);
        printf("Note Systeme: %.2f\n", notes_sys[i]);
       
    }

    return 0;
}
