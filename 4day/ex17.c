#include <stdio.h>
int main(){
	int i;
	int sum=0;
	
	//for(i=x;i<=y;i++) //�ʱⰪ�� ���ǽĿ� ���� Ȱ�밡��. 
	for(i=1;i<=100;i++){
		sum+=i;
		printf("%d %d\n",i,sum);
	} 
		
	printf("1���� 100������ ���� %d \n",sum);
	return 0;		
}
