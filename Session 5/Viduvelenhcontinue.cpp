#include<stdio.h>
int main(){
	for(int i=1;i<=10;i++){
		printf("Bat dau quet tang :%d\n",i);
		if(i==5){
			continue;
		}
		printf("Da quet xong tang tang: %d\n",i);
	}
}
