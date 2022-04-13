#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);

    if(n>=90) {

        printf("A");
    } else if(n>=70 && n<90) {

        printf("B");
    } else if(n>=40 && n<70) {

        printf("C");        
    } else {

        printf("D");
    }

    return 0;
}