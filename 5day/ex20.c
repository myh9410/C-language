#include <stdio.h>
int main(){
	int sum = 0; 
	int val = 1;
//	while (val != 0){
//		printf("�հ踦 ���� ������ �Է��ϼ���.(���� : 0) -->");
//		scanf("%d",&val);
//		sum+=val;
//	}
	
	do{
		printf("�հ踦 ���� ������ �Է��ϼ���.(���� : 0) -->");
		scanf("%d",&val);
		sum+=val;

	}while(val !=0);
	printf("�հ� sum = %d",sum); 
}
