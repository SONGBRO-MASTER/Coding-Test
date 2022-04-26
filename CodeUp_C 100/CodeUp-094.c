#include <stdio.h>

int main() {

    int n, i, j, x, y, k;
    int arr[20][20] = {};

    for(i=1; i<20; i++) {

        for(j=1; j<20; j++) {

            scanf("%d", &arr[i][j]);
        }
    }

    scanf("%d", &n);

    for(k=0; k<n; k++) {

        scanf("%d %d", &x, &y);

        for(i=1; i<20; i++) {

            if(arr[x][i] == 0) {

                arr[x][i] = 1;
            } else {

                 arr[x][i] = 0;
            }
        }

        for(j=1; j<20; j++) {

            if(arr[j][y] == 0) {

                arr[j][y] = 1;
            }else {

                arr[j][y] = 0;
            }
        }
    }

    for(i=1; i<20; i++) {

        for(j=1; j<20; j++) {

            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}