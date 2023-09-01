#include<stdio.h>

main(){

	int row, col;

	for(row = 45; row <= 49; row++){

		for(col = 45; col <= row; col++){
			printf(" %d",col);
		}

		printf("\n");

	}

}