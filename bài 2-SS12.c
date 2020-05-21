#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
void main(){
	char str[MAX_SIZE];
	int i,len,nguyenam,phuam;
	printf("Nhap ky tu: ");
	gets(str);
	nguyenam=0;
	phuam=0;
	len=strlen(str);
	for(i=0;i<len;i++){
		if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')){
			if(str[i]=='a'||str[i]=='i'||str[i]=='u'||str[i]=='e'||str[i]=='o'||
			str[i]=='A'||str[i]=='I'||str[i]=='U'||str[i]=='E'||str[i]=='O')
			nguyenam++;
		    else
		    phuam++;
		}
	}
	printf("So nguyen am la %d\n",nguyenam);
	printf("So phu am la %d\n",phuam);
}
