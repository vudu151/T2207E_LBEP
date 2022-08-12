#include<stdio.h>
int main(){
	int arr[5]={23,90,9,25,16};
	for(int i=0;i<4;i++){                   //i: so lan duyet
		for(int j=0;j<5-i-1;j++){          // j là vi tri
			if (arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d  ",arr[i]);
    }
}
