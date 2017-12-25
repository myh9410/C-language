#include <stdio.h>
int main(){
	int i,j;
	
	for (i=0;i<=5;i++){	//for(초기값;조건식;증감식)
		printf("i = %d\n",i);
		for (j=0;j<=3;j++){	//for문안에 명령문이 한줄이면 {,}생략 가능. 
			printf("hello world %d %d \n",i,j);
		}
		printf("========================\n");//j=4일때 
	}
	printf("hello world end %d %d \n",i,j);//i=6일때 
	return 0;
}

