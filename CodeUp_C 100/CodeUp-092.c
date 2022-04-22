#include <stdio.h>

int main() {

    int i, n, t;
    int min = 0;

    scanf("%d", &n);

    for(i=0; i<n; i++) {

        scanf("%d", &t);
        if(i==0) {

            min = t;
        } else {

            if(min > t)
                min = t;
        } 
    }

    printf("%d", min);

    return 0;
}