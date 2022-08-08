#include<stdio.h>
int main(){
	int n;
	int max=0;
	int sodu;
	printf("Nhap n:");
	scanf("%d",&n);
	for(;n!=0;){
		sodu=n%10;
		max=sodu;
		n/=10;
	}
	printf("Chu so lon nhat la %d",max);
}
