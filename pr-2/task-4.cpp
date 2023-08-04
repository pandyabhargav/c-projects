#include<stdio.h>
main(){
	
	char  day;
	printf("enter a fist letter of day ");
	scanf("%c", &day);	
	
	switch(day){
    	
        	case 'M':
            case 'm':
                printf("Monday");
                break;
                
            case 'T':
            case 't':
                printf("Tuesday");
                printf("Thursday");
                break;
                
            case 'w':
            case 'W':
                printf("Wednesday");
                break;
                
           	case 'F':
            case 'f':
                printf("Friday");
                break;
                
            case 's':
           	case 'S':
                printf("Saturday");
                printf("Sunday");
                break; 
                
            default :
                printf("Invalid Input");
                break;
    }
       
}
    