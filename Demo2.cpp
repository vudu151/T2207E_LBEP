#include<stdio.h>
int main(){
	// input num
	int num;
	printf("Vui long nhap num=");
	scanf("%d",&num);
	// r = num mod 2
	int r;
	r = num % 2;
	// hinh thoi r=0
	if(r ==0){
		// chay vao day neu Yes
		printf("Number is Even");
	}else{
		// chay vao day neu No
		printf("Number is Odd");
	}
}
