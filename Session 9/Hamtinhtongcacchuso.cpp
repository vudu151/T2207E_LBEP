#include<stdio.h>
int tinhTongcacchuso(int n){
	int S=0;
	int sodu;
	for(;n!=0;){
		sodu=n%10;
		S+=sodu;
		n/=10;
	}
	return S;
}
int main(){
	int n; 
	printf("Nhap n:");
	scanf("%d",&n);
	int S;
	S=tinhTongcacchuso(n);
	printf("Tong cac chu so cua %d la: %d",n,S);
}
