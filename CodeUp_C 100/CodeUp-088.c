#include <stdio.h>

/*

    a: 시작 값 
    m: 곱할 값
    d: 더할 값
    n: 몇 번째 인지를 나타내는 정수

*/

int main() {

    int i;
    int a, m, d, n;
    long int sum = 0;

    scanf("%d %d %d %d", &a, &m, &d, &n);

    sum = a;

    for(i=1; i<n; i++) {

        sum = (sum * m) + d;
    }

    printf("%ld", sum);

    return 0;
}