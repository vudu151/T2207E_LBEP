#include <stdio.h>
int main (){
	int a,b,c;
	printf("Nhap a:\n");
	scanf("%d",&a);
	printf("Nhap b:\n");
	scanf("%d",&b);
	printf("Nhap c:\n");
	scanf("%d",&c);
	int max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	printf("So lon nhat la : %d",max);
}
