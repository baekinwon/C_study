#include <stdio.h>
int main(){
	for(int i =1;i<=100;i++){
		for(int j = 1;j<=100;j++){
			printf("%d * %d = %d\n",i,j,i*j);
			if(j==9){
				if(i==9){
					goto end;
				}
				else{
					goto next;
				}
			}
		}
		next:
			printf("\n");
	}
	end:
		printf("\n");
	
	
	return 0;
}
