#include <stdio.h>
//int main(){
//	int sum = 0,i=1;
//	
//	while(1){
//		sum+=i;
//		i++;
//		if(i>10){
//			goto plus;
//		}
//	}
//	plus:
//		printf("��:%d",sum);
//	
//	return 0;
//}

int main(){
	int sum = 0,i=1;
	
	while(1){
		sum+=i;
		i++;
		if(i>10){
			break;
		}
	}
	printf("��:%d",sum);
	
	return 0;
}
