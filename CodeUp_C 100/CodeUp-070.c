#include <stdio.h>

int main() {

    int n=1;

    while (n!=0) {
        
        scanf("%d", &n);
        if(n==0) break;
        printf("%d\n", n);
    }
    
    return 0;
}