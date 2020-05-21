#include<stdio.h>
void main(){
	int n;
	int num[100];
	int l;
	int desnum[100],k;
	int i,j,temp;
	printf("Nhap tong so diem : \n");
	scanf("%d",&n);
	for(l=0;l<n;l++){
		printf("Nhap diem hoc sinh %d : \n",l+1);
		scanf("%d",&num[1]);
	}
	for(k=0;k<n;k++){
		desnum[k]=num[k];
		for(i=0;i<n-1;i++){
			for(j=i+1;j<n;j++){
				if(desnum[i]<desnum[j]){
					temp=desnum[i];
					desnum[i]=desnum[j];
					desnum[j]=temp;
				}
			}
		}
		for(i=0;i<n;i++){
			printf("number [%d] la %d\n",i,desnum[i]);
		}
}
}
