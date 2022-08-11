#include<stdio.h>
#include<math.h>
bool ktSonguyento(int n){
	if(n<2){
		return false;
	}
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			dem++;
		}
	}
	if(dem==0){
		return true;
	}else{
		return false;
	}
}
int main(){
	int a;
	printf("Nhap a:",a);
	scanf("%d",&a);
	if(ktSonguyento(a)){
		printf("%d la so nguyen to",a);
	}else{
		printf("%d khong la so nguyen to",a);
	}
}
