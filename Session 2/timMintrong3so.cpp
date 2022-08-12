#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap a:");
	scanf("%d",&a);
	printf("Nhap b:");
	scanf("%d",&b);
	printf("Nhap c:");
	scanf("%d",&c);
	int min=a;
	if(b<min){
		min=b;
		if(c<min){
			min=c;
		}
	}
	printf("Min la : %d",min);
}
