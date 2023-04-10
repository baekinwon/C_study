#include <stdio.h>
int main(){
	int a[]={5,2,8,1,9,7},temp,n=6;
	for(int i = 0;i<n-1;i++){
		for(int j = 1;j<n-i;j++){
			if(a[j-1]>a[j]){
				temp=a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
		for(int x = 0;x<n;x++){
		printf("%d ",a[x]);
	}
		printf("\n");
	}
	
}
