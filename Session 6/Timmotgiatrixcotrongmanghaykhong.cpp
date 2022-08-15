#include<stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang n=");
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap mang n:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}if(n<2){
		printf("%d khong la so nguyen to",n);
	}
	int count=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			count++;
		}
	}	
	bool t=false;
	for(int i=0;i<n;i++){
		if (x==arr[i]){
			t= true;
			break;
		}
	}
	if(t){
		printf("Da tim thay gia tri x");
	}else{
		printf("Khong co so nguyen to");
	}
}
