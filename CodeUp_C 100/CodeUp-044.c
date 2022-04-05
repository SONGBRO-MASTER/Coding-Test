#include <stdio.h>

int main() {

    long int a, b, c;
    scanf("%ld %ld %ld", &a, &b, &c);
    printf("%ld\n", a+b+c);
    printf("%.1f", (float)(a+b+c)/3);

    return 0;
}