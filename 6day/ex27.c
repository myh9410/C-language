#include <stdio.h>
int main(){
	
	
	int arr[5] = {0,10,20,30,40,50,60}; 
	int i;
	int score[10];
/*
	printf("%d\n",arr[0]);
	printf("%d\n",arr[1]);
	printf("%d\n",arr[2]);
	printf("%d\n",arr[3]);
	printf("%d\n",arr[4]);	*/
	
	for (i=0;i<5;i++)
		printf("%d\n",arr[i]);
		
	for (i=0;i<10;i++)
		score[i] = i*11;
	
	for (i=0;i<10;i++)
		printf("%d\n",arr[i]);



}
