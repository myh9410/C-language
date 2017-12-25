#include <stdio.h>
int main(){
	int sum = 0; 
	int val = 1;
//	while (val != 0){
//		printf("합계를 구할 정수를 입력하세요.(종료 : 0) -->");
//		scanf("%d",&val);
//		sum+=val;
//	}
	
	do{
		printf("합계를 구할 정수를 입력하세요.(종료 : 0) -->");
		scanf("%d",&val);
		sum+=val;

	}while(val !=0);
	printf("합계 sum = %d",sum); 
}
