#include <stdio.h>
int main(){

//※for문 
//	int i;						  
//	
//	for(i=0;i<100;i++){
//		sum+=i
//		printf("%d : %d",i,sum);
//	
//	}
//	printf("1부터 100까지의 합은 %d",sum);
//	return 0;

//※while문 
//	int sum=0,i=0;		//초기식 
//	while (i<=100){		//조건식 
//		sum +=i;
//		printf("%d : %d\n",i,sum);
//		i++;			//증감식 
//	} 

//※do while문 
	int sum=0,i=0;		
	do{					//조건 검사를 반복명령 실행 후 한다. 
		sum +=i;
		printf("%d : %d\n",i,sum);
		i++;			
	}while (i<=100);	//최소 1번 반복명령실행. 
	
	
	
	
}
