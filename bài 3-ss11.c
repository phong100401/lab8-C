#include<stdio.h>
void main(){
	int X[5];
	int i=0;
	for(i=0;i<5;i++){
		printf("Nhap so: ");
		scanf("%d",&X[i]);
	}
	for(i=4;i>=0;i--){
		printf("%d\n",X[i]);
	}
}
