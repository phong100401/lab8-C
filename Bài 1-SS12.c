#include<stdio.h>
void main(){
	int ary[5];
	int max=0;
	int min=0;
	int i;
	for(i=0;i<5;i++){
		printf("Nhap so %d: ",i+1);
		scanf("%d",&ary[i]);
		if(i==0){
			max=ary[0];
			min=ary[0];
		}
		if(max>ary[i]) max=ary[i];
		if(min<ary[i]) min=ary[i];
	}
	printf("max=%d\n",max);
	printf("min=%d\n",min);
}
