#include <stdio.h>
int main(){
	int number;
	
	printf("�ݺ��� Ƚ�� : \n");
	scanf("%d",&number);
	
	for(int i = 1;i<=number;i++){
		if(i%2!=0){
			printf("�ݺ� Ƚ��(Ȧ����°):%d\n",i);
		}
	}
	
	return 0;
}
