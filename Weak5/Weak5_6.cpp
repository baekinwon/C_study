#include <stdio.h>
//int main(){
//	int sum= 0;
//	
//	for(int i=1;i<=10;i++){
//		if(i%2==0)continue;
//		sum+=i;
//	}
//	
//	printf("1���� 10���� Ȧ���� ���� %d��.\n",sum);
//	
//	return 0;
//}

int main(){
	int sum= 0;
	
	for(int i=1;i<=10;i++){
		if(i%2!=0)continue;
		sum+=i;
	}
	
	printf("1���� 10���� ¦���� ���� %d��.\n",sum);
	
	return 0;
}
