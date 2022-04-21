#include <stdio.h>

int main() {

    int i, j;
    int sum = 0;

    scanf("%d", &j);

    for(i=0; i<=j; i++) {

        sum += i;
        
        if(sum>=j) {
            
            printf("%d\n", sum);
            break;
        }
    }

    return 0;
}
