#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap so nguyen n=",n);
	scanf("%d",&n);
	int i=1;
	while(i<=n){
		if(n%i==0){
			printf("Uoc cua %d la %d\n",n,i);
		}else{
		}
		i=i+1;
	}
}
