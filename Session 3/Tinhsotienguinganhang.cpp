#include<stdio.h>
int main(){
	int TK=4000;
	int y=0;
	while (y<4){
		int L;
		L=TK*8/100;
		TK+=L;
		y++;
	}
	printf("So tien thu duoc la %d \n",TK);
}
