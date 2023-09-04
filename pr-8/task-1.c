#include<stdio.h>


void swap(int *n1, int *n2){
    int t = *n1;
    *n1 = *n2;
    *n2 = t;
}

main(){
    int n1, n2;

    printf("Enter numbers: ");
    scanf("%d %d", &n1, &n2);

    printf("Before swapping: n1 = %d, n2 = %d\n", n1, n2);

    
    swap(&n1, &n2);

    printf("After swapping: n1 = %d, n2 = %d\n", n1, n2);

    
}