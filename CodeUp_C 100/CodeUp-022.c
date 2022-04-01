#include <stdio.h>

int main() {

    char d[30];
    int i;

    scanf("%s", d);
    
    for(i=0; d[i]!= '\0'; i++) {

        printf("\'%c\'\n",  d[i]);
    }

    return 0;
}