#include <stdio.h>
int main(){
	int num1,num2;
	
	printf("´õÇÒ ¼ö :");
	scanf("%d %d",&num1,&num2);
	
	for(int i = 1;i<=num1;i++){
		for(int j = 1;j<=num2;j++){
			if((i+j)<=10){
				printf("%d + %d = %d\n",j,i,i+j);
			}
		}
	} 
	
	return 0;
}
