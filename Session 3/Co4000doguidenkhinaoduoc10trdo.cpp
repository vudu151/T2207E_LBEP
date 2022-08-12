#include<stdio.h>
int main(){
	int n;
	int TK=4000;
	int y=0;
	while (TK<10000000){
		int L;
		L=TK*8/100;
		TK+=L;
		y++;
	}
	printf("So nam can gui la %d \n",y);
}
