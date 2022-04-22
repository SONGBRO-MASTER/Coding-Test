#include <stdio.h>

/*

    day: 날 수
    a, b, c: 방문 주기
    p: 같은 날 동시에 가입한 인원 수
*/

int main() {

    int day=1;
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    while(day%a!=0 || day%b!=0 || day%c!=0) {

        // printf("%d\n", day);
        // printf("day a: %d, day b: %d, day c: %d\n\n", day%a, day%b, day%c);
        day++;
    }

    printf("%d", day);
    // printf("--- day a: %d, day b: %d, day c: %d\n\n", day%a, day%b, day%c);

    return 0;
}