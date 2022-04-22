#include <stdio.h>

/*

    a: 시작 값
    d: 등차
    n: 몇 번째인지 나타내는 정수

*/

int main() {

    int i;
    int a, d, n;
    int sum = 0;

    scanf("%d %d %d", &a, &d, &n);

    sum += a;

    for(i=1; i<n; i++) {

        sum += d;    
    }

    printf("%d", sum);

    return 0;
}