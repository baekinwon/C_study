#include <stdio.h>
int main(){
	int i = 10,sum = 0;
	while(i>0){
		sum+=i;
		printf("i�� : %d, sum�� : %d\n",i,sum);
		i--;
	}
	printf("���� : %d",sum); 
	
	return 0;
}
