#include <stdio.h>

int main() {
    int bin, rem, dec = 0, place = 1;

    printf("Enter binary number: ");
    scanf("%d", &bin);

    while (bin > 0) {
        rem = bin % 10;
        dec = dec + rem * place;
        place = place * 2;
        bin = bin / 10;
    }

    printf("Decimal = %d", dec);

    return 0;
}
