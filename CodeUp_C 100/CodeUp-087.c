#include <stdio.h>

/*

    a: 시작 값
    r: 등비
    n: 몇 번째인지 나타내는 정수

*/

int main() {

    int i;
    int a, r, n;
    long int sum = 0;

    scanf("%d %d %d", &a, &r, &n);

    sum = a;

    for(i=1; i<n; i++) {

        sum *= r;
    }

    printf("%ld", sum);

    return 0;
}