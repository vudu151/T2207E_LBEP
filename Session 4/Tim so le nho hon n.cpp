#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so nguyen n=",n);
	scanf("%d",&n);
	int i=1;
	while (i<n){
		printf("So le nho hon %d la %d\n",n,i);
		i=i+2;
	}
}
