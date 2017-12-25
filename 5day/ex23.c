#include <stdio.h>
int main(){
	int score;
//	
//	printf("Input a score number : ");
//	scanf("%d",&score);
//	if(score <0 || score >100){
//		printf("잘못된 입력입니다.\n");
//		return;		//프로그램 끝냄. 
//	}
//	if (score>=90){
//		printf("score 90~100\n");
//		printf("grade : A");
//	}else if(score >=80){
//		printf("score 80~89\n");
//		printf("grade : B");
//	}else if(score >=70){
//		printf("score 70~79\n");
//		printf("grade : C");
//	}else {
//		printf("score 0~69\n");
//		printf("grade : D");
//	}
	for(;;){ // 무한 반복(LOOP) while문은  while(1)이면 무한 반복 
	
		printf("Input a score number : (0~100,종료:-99)");
		scanf("%d",&score);
		
		//종료조건
		if(score==-99) break;
		
		if(score <0 || score>100){
			printf("잘못된 입력입니다.\n");
			continue;
		} 
		if (score>=90){
			printf("score 90~100\n");
			printf("grade : A");
		}else if(score >=80){
			printf("score 80~89\n");
			printf("grade : B");
		}else if(score >=70){
			printf("score 70~79\n");
			printf("grade : C");
		}else {
			printf("score 0~69\n");
			printf("grade : D");
		}
		
		
	}

		
		
}

