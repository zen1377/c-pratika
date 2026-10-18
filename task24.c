// нсд

#include <stdio.h>

int gcd(int a, int b) {
    if (b==0) {
        return a;
    }
    return gcd(b,a%b);
}

int main() {
    int a, b;
    printf("enter a and b like this: 10 12\n");
    scanf("%d %d", &a, &b);
    int nsd = gcd(a, b);
    printf("нсд це ");
    printf("%d", nsd);
    return 0;
}