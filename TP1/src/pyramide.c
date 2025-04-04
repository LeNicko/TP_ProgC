#include <stdio.h>

int main() {
    int j = 5;
    int boucle;
    
    for (boucle = 0; boucle < j; boucle++) { 
        for (int i = 0; i < j; i++) {
            printf("*");
        }
        printf("\n"); 
    }

    return 0;
}
