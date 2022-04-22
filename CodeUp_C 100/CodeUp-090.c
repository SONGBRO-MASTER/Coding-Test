#include <stdio.h>

int main() {

    int i, t;
    int n, a[24]={};

    scanf("%d", &n);

    for(i=1; i<=n; i++) {

        scanf("%d", &t);
        a[t] += 1;
    }

    for(i=1; i<=23; i++) {

        printf("%d ", a[i]);
    }

    return 0;
}