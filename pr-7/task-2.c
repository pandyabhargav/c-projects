#include<stdio.h>

int calLength(char str[]){

    int length = 0;

    while (str[length] != '\0'){
        length++;
    }

    return length;
}

main(){

    char str[100];

    printf("Enter a string = ");
    scanf("%s",str);

    int length = calLength(str);

    printf("Length of the string: %d\n",length);

}