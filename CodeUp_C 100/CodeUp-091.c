#include <stdio.h>

int main() {

    int i, n, t;
    int a[10000] = {};

    scanf("%d", &n);

    for(i=0; i<n; i++) {

        scanf("%d", &t);
        a[i] = t;
    }

    for(i=n-1; i>=0; i--) {

        printf("%d ", a[i]);
    }

    return 0;
}