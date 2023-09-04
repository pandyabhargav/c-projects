#include<stdio.h>


void reverseArray(int *arr, int size){
    int *start = arr; 
    int *end = arr + size - 1; 

    while (start < end){
     
        int temp = *start;
        *start = *end;
        *end = temp;

      
        start++;
        end--;
    }
}

main(){
    int z,i;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &z);

  
    int ar[z];

   
    int *p = ar; 
    printf("Enter %d elements:\n", z);

    for (int i = 0; i < z; i++){
        scanf("%d", p + i); 
    }

   
    reverseArray(ar, z);

  
    printf("Reversed array elements are: ");
    for (i = 0; i < z; i++){
        printf("%d ", *(p + i)); 
    }
    printf("\n");

}