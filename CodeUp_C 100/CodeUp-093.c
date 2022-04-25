#include <stdio.h>

int main() {

    int i, j, k, x, y, n;
    int arr[20][20] = {};

    scanf("%d", &n);

    for(i=0; i<n; i++) {

        scanf("%d %d", &x, &y);
        arr[x][y] = 1;
    }

    for(j=1; j<=19; j++) {

        for(k=1; k<=19; k++) {

            printf("%d ", arr[j][k]);
        }

        printf("\n");
    }

    return 0;
}