#include<stdio.h>
#include<math.h>
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
	int y;
	int min;
	int A;
	printf("Nhap gia tri cua x:");
	scanf("%d",&x);
	for(int i=0;i<n;i++){
		min=abs(x-arr[0]);
		A=abs(x-arr[i]);
		if(min>A){
			min=A;
			y=arr[i];
		}
	}
	printf("Gia tri gan x nhat la: %d", y);
}
