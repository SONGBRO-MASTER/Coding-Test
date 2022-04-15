#include <stdio.h>
/*

    h: 1초 동안 소리 강약 체크하는 수 
    b: 한 번 체크한 결과를 저장하는 비트
    c: 소리를 저장할 트랙 개수인 채널
    s: 녹음할 시간
    
    필요한 저장 용량을 계산해라
    CD 음질(44.1KHz, 16bit, 스테레오) 1초 저장
    44100 * 16 * 2 * 1 bit 의 저장 공간 필요
    h     * b  * c * s = 저장 공간
    
*/
int main() {

    int h, b, c, s;
    unsigned int bit = 0;
    float byte = 0;
    float kbyte = 0;
    float mbyte = 0;
    
    scanf("%d %d %d %d", &h, &b, &c, &s);

    bit = h * b * c * s;
    byte = bit / 8;
    kbyte = byte / 1024;
    mbyte = kbyte / 1024;

    printf("%.1f MB", mbyte);

    return 0;
}