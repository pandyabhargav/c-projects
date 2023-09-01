#include<stdio.h>

main(){

	int row, col;

	for(row = 5; row >= 1; row--){

		for(col = row; col >= 1; col--){
			printf(" %d",col);
		}

		printf("\n");

	}

}