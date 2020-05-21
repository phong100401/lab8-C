#include<stdio.h>
#include<string.h>
#include<conio.h>
void main(){
	int i,n=0;
	int item;
	char x[10] [12];
	char temp[12];
	printf("Nhap chuoi \n\n");
	printf("'END' khi qua\n");
	do{
		printf("chuoi %d\n",n+1);
		scanf("%s",x[n]);
	}while(strcmp(x[n++],"END"));
	n=n-1;
	for(item=0;item<n-1;++item){
		for(i=item+1;i<n;++i){
			if(strcmp(x[item],x[i])>0){
				strcpy(temp,x[item]);
				strcpy(x[item],x[i]);
				strcpy(x[i],temp);
			}
		}
	}
	printf("Cac dong chuoi: \n");
	for(i=0;i<n;i++){
		printf("Chuoi %d la %s \n",i+1,x[i]);
	}
	
}
