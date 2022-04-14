#include <stdio.h>

int main() {

    char x;
    scanf("%c", &x);

    while(x!='q') {

        printf("%c", x);
        scanf("%c", &x);
        
    }
    printf("%c", x);

    return 0;
}