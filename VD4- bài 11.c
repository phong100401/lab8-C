#include<stdio.h>
void main(){
	char ary[5];
	int i;
	printf("Nhap chuoi: ");
	scanf("%s",ary);
	printf("Chuoi la %s \n\n",ary);
	for(i=0;i<5;i++){
		printf("\t%d",ary[i]);
	}
}
