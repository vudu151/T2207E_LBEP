#include<stdio.h>
#include<string.h>
int MaxOfArray(int arr[],int n){
	int high = arr[0];
	for( int i=0;i<n;i++){
		if(arr[i]>arr[0]){
			high = arr[i];
		}
	}
	return high;
}
