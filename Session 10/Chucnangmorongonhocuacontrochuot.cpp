#include<stdio.h>
#include<stdlib.h>
int main(){
	int *p;
	p=(int *)malloc(10* sizeof(int));  //int p[10]
	for(int i=0;i<10;i++){
		scanf("%d",&p[i]);
	}
	p= (int*)realloc(p,20*sizeof(int));
	for(int i=10;i<20;i++){
		scanf("%d",&p[i]);
	}
	// gia su sau doan code nay con rat nhieu code can chay
	free(p);  // p= (int *)realloc(p,0*sizeof(int));
}
