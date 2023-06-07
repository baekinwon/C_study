#include <stdio.h>
//int main(){
//	int i = 1,sum=0;
//	do{
//		sum+=i;
//		i++;
//	}while(i<=10);
//	
//	printf("%d",sum);
//	
//	return 0;
//}

int main(){
	int i = 1,sum=0;
	do{
		sum+=i*i;
		printf("i = %d, i^2 = %d, sum = %d\n",i,i*i,sum);
		i++;
	}while(i<=10);
	
	printf("รัวี: %d",sum);
	
	return 0;
}
