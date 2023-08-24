#include<stdio.h>
main(){
int i,j,a[2][2],k;
printf("Enter the number :\n");
	for(i=0;i<5;i++){
		scanf("%d",&a[i][j]);
	}
	for(j=-0;j<5;j++){
		scanf("%d",&a[i][j]);
		if(k<a[i][j]){
			k=a[i][j];
		}
	
    }
	printf("The largest number is%d\n",k);
	
	getch();
}
