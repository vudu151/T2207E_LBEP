#include<stdio.h>
int main(){
	int n;
	int i;
	float S=0;
	do{
	printf("Nhap n:\n");
	scanf("%d",&n);
	if(n<1){
		printf("Vui long nhap n>=1");
	}
	}while(n<1);
	for(int i=1;i<=n;i++){
		S=S+1.0/i;
	}
	printf("Tong S=%f",S);
}
