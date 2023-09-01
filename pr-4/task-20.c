 #include<stdio.h>

main(){

    int row, col, k;

    for (row = 0; row < 4; row++) {

        for (col = 0; col < 2 * (5 - row) - 1; col++) {
            printf(" ");
        }

        for (k = 0; k < 2 * row + 1; k++) {
            if (k == 0 || k == 2 * row) {
                printf(" *");
            }
            else {
                printf("  ");
            }
        }

        printf("\n");

    }

}