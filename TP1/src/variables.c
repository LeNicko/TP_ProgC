#include <stdio.h>

int main() {
    char c = 'B';
    unsigned char uc = 100;
    short s = -123;
    unsigned short us = 456;
    int i = -1000;
    unsigned int ui = 2000;
    long int li = -50000L;
    unsigned long int uli = 100000UL;
    long long int lli = -1000000LL;
    unsigned long long int ulli = 2000000ULL;
    float f = 3.14f;
    double d = 2.71;
    long double ld = 1.61L;

    printf("char : %c\n", c);
    printf("unsigned char : %u\n", uc);
    printf("short : %hd\n", s);
    printf("unsigned short : %hu\n", us);
    printf("int : %d\n", i);
    printf("unsigned int : %u\n", ui);
    printf("long int : %ld\n", li);
    printf("unsigned long int : %lu\n", uli);
    printf("long long int : %lld\n", lli);
    printf("unsigned long long int : %llu\n", ulli);
    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
