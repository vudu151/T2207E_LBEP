#include<stdio.h>
int main(){
	int n;
	printf("Nhap so nam muon gui\n");
	scanf("%d",&n);
	int TK=4000;
	int y=0;
	while (y<n){
		int L;
		L=TK*8/100;
		TK+=L;
		y++;
	}
	printf("So tien thu duoc la %d \n",TK);
}
