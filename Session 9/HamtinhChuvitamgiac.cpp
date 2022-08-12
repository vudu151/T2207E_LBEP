#include<stdio.h>
int tinhChuvi(int a, int b, int c){
	return a+b+c;
}
int main(){
	int a,b,c,C;
	printf("Nhap a:\n");
	scanf("%d",&a);
	printf("Nhap b:\n");
	scanf("%d",&b);
	printf("Nhap c:\n");
	scanf("%d",&c);
	if(a+b>c && b+c>a && a+c>b){
		int C=tinhChuvi(a,b,c);
		printf("Chu vi la: %d",C);
	}else{
		printf("Day khong phai la ba canh tam giac");
	}
}
