#include<stdio.h>
#include<string.h>
int main(){
    char arrs[5][20];   // Day la mang hai chieu
    printf("Nhap 5 chuoi: \n");
	for(int i=0;i<5;i++){
		scanf("%s",arrs[i]);
	}
	int max=0;
	char stringHigh[200];
	strcpy(stringHigh,"");
	for(int i=0;i<5;i++){
		if(strlen(arrs[i])> max){
			max = strlen(stringHigh);
			strcpy(stringHigh,arrs[i]);
		}
	}
	for(int i=0;i<5;i++){
		if(strlen(arrs[i]) == max){
			strcat(stringHigh,arrs[i]);
			strcat(stringHigh,"-");
		}
	}
	printf("Chuoi dai nhat la : %s",stringHigh);
}
