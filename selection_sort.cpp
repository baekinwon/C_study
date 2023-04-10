#include <stdio.h>
int main(){
	int a[]={54,34,41,89,67,16,52,23},temp,n=8;
	for(int i = 0;i<n;i++){
		for(int j = i+1;j<n;j++){
			if(a[i]>a[j]){
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
		for(int x = 0;x<n;x++){
		printf("%d ",a[x]);
	}
	printf("\n");
	}
	
}
	
