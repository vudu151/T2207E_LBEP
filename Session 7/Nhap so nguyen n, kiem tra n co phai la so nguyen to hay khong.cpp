#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap n:\n");
	scanf("%d",&n);
	if(n<2){
		printf("%d khong la so nguyen to",n);
	}
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			count++;
		}
	}
	if(count==0){
		printf("%d la so nguuyen to",n);
	}else{
		printf("%d khong la so nguyen to",n);
	}
}
