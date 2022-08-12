#include<stdio.h>
bool ktTamGiac(int a,int b, int c){           //Ham bool kiem tra dung hoac sai
	if(a>b-c && b>c-a && c>a-b){             //Cach 2 : Bo tu dong 2 den 6 thay bang: return a>b-c && b>c-a && c>a-b;
		return true;
	}else{
		return false;
	}
}
int main(){
	int x=3,y=4,z=5;
	if(ktTamGiac){
		printf("Day la 3 canh cua tam giac\n");
	}else{
		printf("Day khong la 3 canh cua tam giac\n");
	}
}
