#include <stdio.h>

int main() {
    int j = 5; 

    for (int i = 1; i <= j; i++) { 
        for (int k = 1; k <= i; k++) { 
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
