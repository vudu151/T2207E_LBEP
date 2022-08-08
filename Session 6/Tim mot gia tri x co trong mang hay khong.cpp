#include<stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang n=");
	scanf("%d",&n);
	
	int arr[n];
	printf("Nhap mang n:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int x;
	printf("Nhap so x can tim:");
	scanf("%d",&x);
	
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
		printf("Khong tim thay gia tri x");
	}
}
