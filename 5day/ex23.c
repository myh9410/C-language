#include <stdio.h>
int main(){
	int score;
//	
//	printf("Input a score number : ");
//	scanf("%d",&score);
//	if(score <0 || score >100){
//		printf("�߸��� �Է��Դϴ�.\n");
//		return;		//���α׷� ����. 
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
	for(;;){ // ���� �ݺ�(LOOP) while����  while(1)�̸� ���� �ݺ� 
	
		printf("Input a score number : (0~100,����:-99)");
		scanf("%d",&score);
		
		//��������
		if(score==-99) break;
		
		if(score <0 || score>100){
			printf("�߸��� �Է��Դϴ�.\n");
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

