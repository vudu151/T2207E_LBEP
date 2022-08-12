#include<stdio.h>
int timUocchungmax(int a, int b){
	for(int i=a;i<=a;i--){
		if(a%i==0 && b%i==0){
			return i;
		}
	}
}
int main(){
	int a,b,i;
	printf("Nhap a:\n");
	scanf("%d",&a);
	printf("Nhap b:\n");
	scanf("%d",&b);
	i= timUocchungmax(a,b);
	printf("Uoc chung max cua %d va %d la: %d",a,b,i);
}
