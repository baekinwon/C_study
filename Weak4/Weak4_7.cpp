#include <stdio.h>
int main(){
	int z = 2,q=5;
	for(int i = 0;i<5;i++){
		for(int x = q-2;x>=0;x--){
			printf(" ");
		}
		q-=1;
		if(i==0){
				printf("*\n");
				continue;
			}
		for(int j = 0;j<i+z;j++){
			    printf("*");
		}
		z+=1;
		printf("\n");
	}
	
	return 0;
}
