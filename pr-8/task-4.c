#include<stdio.h>


int stringLength(const char *str){
    const char *ptr = str;

    
    while (*ptr != '\0') {
        ptr++; 
    }

    
    return (int)(ptr - str);
}

int main(){
    char inputString[100];

    printf("Enter  string: ");
    scanf("%s", inputString);

    int length = stringLength(inputString);

    printf("Length of string  %d\n", length);

    return 0;
}