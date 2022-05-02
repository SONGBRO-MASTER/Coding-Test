#include <stdio.h>

int main() {

    int x, y, index=1;
    int arr[10][10] = {};

    for(x=0; x<10; x++) {

        for(y=0; y<10; y++) {

            scanf("%d", &arr[x][y]);
        }
    }

    for(x=1; x<9; x++) {

        for(y=1; y<9; y++) {

            if(x==1 && y==1) {

                if(arr[x][index + 1] == 2) {
                    
                    arr[x][y] = 9;
                    arr[x][index + 1] = 9;
                    index = -1;
                } else if(arr[x][y] == 2) {

                    arr[x][y] = 9;
                    index = -1;
                } else {

                    arr[x][y] = 9;
                    index++;
                }
            } else {

                if(index == y) {

                    if(arr[x][index + 1] == 2) {

                        arr[x][index + 1] = 9;
                        arr[x][y] = 9;
                        index = -1;
                    } else if(arr[x][index + 1] == 1) {

                        if(arr[x][y] == 2) {

                            arr[x][y] = 9;
                            index = -1;
                        } else {

                            arr[x][y] = 9;    
                        }
                    } else if(arr[x-1][y] == 9 || arr[x][y-1] == 9) {
                        
                        if(arr[x][y] == 2) {

                            arr[x][y] = 9;
                            index = -1;
                        } else {

                            arr[x][y] = 9;  
                            index++;  
                        }
                    }
                }
            }
        }
    }

    printf("----\n\n");

    for(x=0; x<10; x++) {

        for(y=0; y<10; y++) {
            printf("%d ", arr[x][y]);
        }
        printf("\n");
    }

    return 0;
}