#include <stdio.h>
int main(){
	int i;
	int sum=0;
	
	//for(i=x;i<=y;i++) //초기값과 조건식에 변수 활용가능. 
	for(i=1;i<=100;i++){
		sum+=i;
		printf("%d %d\n",i,sum);
	} 
		
	printf("1부터 100까지의 합은 %d \n",sum);
	return 0;		
}
