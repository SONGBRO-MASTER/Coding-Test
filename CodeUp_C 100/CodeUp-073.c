#include <stdio.h>

int main() {

    char x, t='a';
    scanf("%c", &x);

    do {

        printf("%c ", t);
        t+=1;
    }while(t<=x);

    return 0;
}