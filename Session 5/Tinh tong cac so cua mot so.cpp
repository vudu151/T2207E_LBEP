#include<stdio.h>
int main(){
	int n;
	int S=0;
	int sodu;
	printf("Nhap n:");
	scanf("%d",&n);
	for(;n!=0;){
		sodu=n%10;
		S+=sodu;
		n/=10;
	}
	printf("Tong cac chu so la %d",S);
}
