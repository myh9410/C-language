#include <stdio.h>
int main(){

//��for�� 
//	int i;						  
//	
//	for(i=0;i<100;i++){
//		sum+=i
//		printf("%d : %d",i,sum);
//	
//	}
//	printf("1���� 100������ ���� %d",sum);
//	return 0;

//��while�� 
//	int sum=0,i=0;		//�ʱ�� 
//	while (i<=100){		//���ǽ� 
//		sum +=i;
//		printf("%d : %d\n",i,sum);
//		i++;			//������ 
//	} 

//��do while�� 
	int sum=0,i=0;		
	do{					//���� �˻縦 �ݺ���� ���� �� �Ѵ�. 
		sum +=i;
		printf("%d : %d\n",i,sum);
		i++;			
	}while (i<=100);	//�ּ� 1�� �ݺ���ɽ���. 
	
	
	
	
}
