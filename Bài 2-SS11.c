#include<stdio.h>
void main(){
	char X[100];
	int i=0;
	int j=0;
	printf("Nhap ky tu: ");
	scanf("%s",X);
	for(i;i<100;i++){
		if(X[i]=='a'||X[i]=='i'||X[i]=='u'||X[i]=='e'||X[i]=='o'){
			j++;
		}
	}
	printf("So nguyen am la %d",j);
}
