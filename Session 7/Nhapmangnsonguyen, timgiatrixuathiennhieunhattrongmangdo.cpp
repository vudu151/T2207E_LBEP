#include<stdio.h>
int main(){
	int n;
	printf("Nhap kich thuoc mang n:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Nhap mang n:\n");
	for(int i=1;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int max=0;
	int dem=1;
	int phantu;
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]){
			dem++;
			if(dem>max){
				max=dem;
				phantu=arr[i];
			}
		}
	}
	printf("Phan tu %d xuat hien nhieu nhat la %d",phantu,max);
}
