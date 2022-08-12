#include<stdio.h>
int Timmaxtronghaiso(int a,int b){         //Ham int , double la ham kieu tinh toan
	if(a>b){
		return a;
	}else{
		return b;
	}
}
int main(){
	int x=10, y=20;
	int z;
	z=Timmaxtronghaiso(x,y);
	printf("Max la : %d",z);
}
