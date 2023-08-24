#include <stdio.h>

main() {
	char x[100];
	int i,z=0;

	printf("Enter  the string : ");
	gets(x);

	for(i=0; x[i]; i++) {
		if(x[i]==32) {
			z++;
		}
	}
	if(i>0) {

		z++;
	}


	printf("no of words in string = %d\n",z);

}