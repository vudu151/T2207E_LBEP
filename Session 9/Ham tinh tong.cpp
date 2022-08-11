#include<stdio.h>
int tinhtong(int a,int b){
	int c=a+b;
	return c;
}
int main(){
	int x=10, y=20;
	int z;
	z= tinhtong(x,y);
	printf("Ket qua: %d",z);
}
