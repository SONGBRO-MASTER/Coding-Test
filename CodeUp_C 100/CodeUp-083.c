#include <stdio.h>
/*
    color: 한 점의 색상 r, g, b(8비트 + 8비트 + 8비트 총 24비트)로 표현해서
            총 2^24 가지의 서로 다른 빛의 색 사용
    w: 가로 해상도
    h: 세로 해상도
    b: 한 픽셀을 저장하기 위한 비트
    1024 * 768 해상도 사이즈의 저장 용량
    w    * h   * 24 bit

*/

int main() {

    int w, h, b;
    unsigned int bit = 0;
    float byte = 0;
    float kbyte = 0;
    float mbyte = 0;

    scanf("%d %d %d", &w, &h, &b);

    bit = w * h * b;
    byte = bit / 8;
    kbyte = byte / 1024;
    mbyte = kbyte / 1024;

    printf("%.2f MB", mbyte);

    return 0;
}