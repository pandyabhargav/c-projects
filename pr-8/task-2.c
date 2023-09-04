#include<stdio.h>

main() {
    int z;

  
    printf("Enter the number of elements in the array: ");
    scanf("%d", &z);

  
    int ar[z];

   
    int *p = ar; 
    printf("Enter %d elements:\n", z);

    for (int i = 0; i < z; i++) {
        scanf("%d", p + i); 
    }

   
    printf("Array elements are: ");
    for (int i = 0; i < z; i++) {
        printf("%d ", *(p + i)); 
    }
    printf("\n");

  
}