#include <stdio.h>

void afficher_octets(void *ptr, size_t taille) {
    unsigned char *octet = ptr;
    for (size_t i = 0; i < taille; i++) {
        printf("%02x ", octet[i]);
    }
    printf("\n");
}

int main() {
    short s = 0x0302;
    int i = 0x04030201;
    long l = 0x0807060504030201;
    float f = 3.14f;
    double d = 3.14;
    long double ld = 3.14;

    printf("Octets de short : "); afficher_octets(&s, sizeof(s));
    printf("Octets de int : "); afficher_octets(&i, sizeof(i));
    printf("Octets de long : "); afficher_octets(&l, sizeof(l));
    printf("Octets de float : "); afficher_octets(&f, sizeof(f));
    printf("Octets de double : "); afficher_octets(&d, sizeof(d));
    printf("Octets de long double : "); afficher_octets(&ld, sizeof(ld));

    return 0;
}
