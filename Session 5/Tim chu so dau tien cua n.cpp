#include<stdio.h>
int main(){
	int n;
	int sodu;
	printf("Nhap n:");
	scanf("%d",&n);
	for(;n!=0;){
		sodu=n%10;
		n/=10;
	}
	printf("Chu so dau tien la %d",sodu);
}
