#include<stdio.h>
int main(){
	int n;
	int i;
	long S=0;
	do{
		printf("Nhap so nguyen n lon hon 0 la");
		scanf("%d",&n);
		if(n<=0){
			printf("So n phai lon hon 0, vui long nhap lai");
		}
	}while(n<=0);
	printf("Cac uoc so cua %d la ",n);
	for(int n=1;i<=n;i++){
		if(n%i==0){
			printf("%4d",i);
			S=S+i;
		}
	}
	printf("Tong cac uoc cua %d la %ld",n,S);
}
