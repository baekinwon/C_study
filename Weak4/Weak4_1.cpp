#include <stdio.h>
int main(){
	int sum = 0;
	for(int i = 1;i<=10;i++){
		sum+=i;
		printf("더할 값 : %d   합 : %d\n",i,sum);
	}
	
	printf("%d",sum);
	
	return 0;
}
