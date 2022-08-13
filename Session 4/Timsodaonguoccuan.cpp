#include<stdio.h>
int main(){
	int n;
	int sodu;
	int sdn=0;
	printf("Nhap n: ");
	scanf("%d",&n);
	while (n>0){
	    sodu = n%10;
	    sdn = 10*sdn+sodu;
	    n/=10;
	}
	printf("So dao nguoc la: %d",sdn);
}
