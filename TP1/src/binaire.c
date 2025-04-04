#include <stdio.h>

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres) / sizeof(nombres[0]);

    for (int i = 0; i < taille; i++) {
        printf("Le nombre %d en binaire est : ", nombres[i]);

        for (int j = 31; j >= 0; j--) {
            int bit = (nombres[i] >> j) & 1;
            printf("%d", bit);
            if (j % 4 == 0) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
