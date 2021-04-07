#include <stdio.h>
#include <stdlib.h>

int main()
{///nums[Lines][Rows]///


    int nums[4][4] = {
                {5,9,1,6},
                {5,8,4,1},
                {5,9,1,9},
                {5,8,2,1},

    };
    int i , j;
    for( i = 0 ; i < 4; i++){
            printf("***");
        for (j = 0; j < 4; j++){
            printf("%d,", nums[i][j]);
        }
        printf("***\n");
    }
    printf("\n");
    return 0;
}
