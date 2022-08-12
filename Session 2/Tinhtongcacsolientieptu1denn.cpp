#include<stdio.h>
int main(){
	int n;
	printf("Nhap gia tri n=",n);
	scanf("%d",&n);
	int S=0;
	int i=0;
	while(i<=n){
		S=S+i;
		i=i+1;
	}
	printf("Tong S=%d",S);
}
