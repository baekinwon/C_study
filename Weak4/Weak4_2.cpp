#include <stdio.h>
int main(){
	int number;
	
	printf("¹Ýº¹ÇÒ È½¼ö : \n");
	scanf("%d",&number);
	
	for(int i = 1;i<=number;i++){
		if(i%2!=0){
			printf("¹Ýº¹ È½¼ö(È¦¼ö¹øÂ°):%d\n",i);
		}
	}
	
	return 0;
}
