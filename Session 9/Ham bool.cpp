#include<stdio.h>
bool ktSoDuong(int n){        //Ham bool kiem tra dung hoac sai
	if(n>0){
		return true;
	}else{
		return false;
	}
}
int main(){
	if(ktSoDuong(21)){
		printf("21 la so duong\n");
	}
	if(ktSoDuong(-3)){
		printf("-3 la so duong\n");
	}else{
		printf("-3 la so am\n");
	}
}
