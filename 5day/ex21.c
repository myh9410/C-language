#include <stdio.h>
int main(){
	int i=60;
	
//	if (i%2==0){
//		printf("짝수입니다.\n");		//조건식이 참일 때 
//	}else{
//		printf("홀수입니다.\n");		//조건식이 거짓일 때 
//	}
//}

//	if (i%5==0){
//		printf("5의 배수입니다.\n");
//	}
	if (i%3==0){
		printf("3의 배수입니다.\n");
	}if (i%4==0){
		printf("4의 배수입니다.\n");
	}if (i%5==0){
		printf("5의 배수입니다.\n");
	}if(i%3 != 0 && i%4 != 0 && i%5 != 0){
		printf("해당되지 않습니다.");
	}
}

