#include <stdio.h>

long long convert(int x);

// It's the driver function
int main() {
    int x;

    printf("-----Enter a decimal number to convert-----\n");
    scanf("%d", &x);

    printf("\nThe Decimal: %d => Binary: %lld\n", x, convert(x));
    return 0;
}

// This function will convert number decimal to binary
long long convert(int x) {
    long long bin = 0;
    int rem, i = 1;

    while (x != 0) {
        rem = x % 2;
        x /= 2;
        bin += rem * i;
        i *= 10;
    }
    return bin;
}