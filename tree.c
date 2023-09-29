#include <stdio.h>
int main(){
    int height, row, column;
    
    printf("Enter height of tree: ");
    scanf("%i", &height);

    for (row = 0; row < height; row++){
        for(column = 0; column < height -1 - row; column++){
            printf(" ");
        }
        for(column = 0; column < row; column++){
            printf("#");
        }
        for(column = 0; column <= row; column++){
            printf("#");
        }
        printf("\n");
    }
    for (row = 0; row < height - 1; row++){
        printf(" ");
    }
    printf("#\n");

return 0;
}
