#include<stdio.h>
int main(){
	int n,t;
	do{
		printf("Nhap ngay:\n");
		scanf("%d",&n);
		printf("Nhap thang:\n");
		scanf("%d",&t);
	}while (n<=0 || n>31 || t<=0 ||t>12 ) ;
	printf("Ban da nhap sai ngay thang, vui long nhap lai !");
	switch(t){
		case 1: printf("Ngay thu n:",n);break;
		case 2: printf("Ngay thu n:",n+31);break;
		case 3: printf("Ngay thu n:",n+31+28);break;
		case 4: printf("Ngay thu n",n+31+28+31);break;
	}
}
