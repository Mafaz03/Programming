#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        printf("%d %d %d\n", a, b , a % b);
        int temp = a;
        a = b;
        b = temp % b;
    }
    return a;
}

int main() {
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf(" a b r\n");
    printf("GCD: %d\n", gcd(a, b));

    return 0;
}
