#include <stdio.h>

/*

    h: 세로
    w: 가로
    n: 놓을 수 있는 막대의 개수 
    l: 길이
    d: 방향(0: 가로, 1: 세로)
    x, y: 좌표(가려진 경우 1, 아닌경우 0)

*/

int main() {

    int h, w, n, l, d, x, y;
    int i, j;

    scanf("%d %d",&h, &w);

    int arr[h][w];
    for(i=0; i<h; i++) {

        for(j=0; j<w; j++) {

            arr[i][j] = 0;
        }
    }

    scanf("%d", &n);

    for(i=0; i<n; i++) {

        scanf("%d %d %d %d", &l, &d, &x, &y);

        if(d==0) {

            for(j=0; j<l; j++) {

                arr[x-1][y-1+j] = 1;
            }
        } else if(d==1) {

            for(j=0; j<l; j++) {

                arr[x-1+j][y-1] = 1;
            }
        }
    }

    for(i=0; i<h; i++) {

        for(j=0; j<w; j++) {

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}