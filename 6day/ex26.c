#include <stdio.h>
int main(){
	int sel;
	
	printf("--------------------\n");
	printf("1 : �Ͽ���\n");
	printf("2 : ������\n");
	printf("3 : ȭ����\n");
	printf("4 : ������\n");
	printf("5 : �����\n");
	printf("6 : �ݿ���\n");
	printf("7 : �����\n");
	printf("--------------------\n");
	printf("�����ϼ���.(1~7)\n");
	scanf("%d",&sel);
	
	switch(sel)
	{
		case 1:
			printf("Sunday\n");
			break;	//��쿡 ���󼭴� ���� case ����� �����Ҷ�
					//break�� ������� �ʴ´�. 
			 
		case 2:
			printf("Monday\n");
			break;
		case 3:
			printf("Tuesday\n");
			break;
		case 4:
			printf("Wednesday\n");
			break;
		case 5:
			printf("Thursday\n");
			break;
		case 6:
			printf("Friday\n");
			break;
		case 7:
			printf("Saturday\n");
			break;
		default:
			printf("Invalid");
	}
	
	
	
	
	
	
	
	
	
}
