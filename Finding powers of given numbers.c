#include <stdio.h>
int main() {
    int base, exp;
    long double result = 1.0;
    printf("RA2211042010005\n");
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer = %.0Lf", result);
    return 0;
}
