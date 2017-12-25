#include <stdio.h>
int main(){
	int sel;
	
	printf("--------------------\n");
	printf("1 : 일요일\n");
	printf("2 : 월요일\n");
	printf("3 : 화요일\n");
	printf("4 : 수요일\n");
	printf("5 : 목요일\n");
	printf("6 : 금요일\n");
	printf("7 : 토요일\n");
	printf("--------------------\n");
	printf("선택하세요.(1~7)\n");
	scanf("%d",&sel);
	
	switch(sel)
	{
		case 1:
			printf("Sunday\n");
			break;	//경우에 따라서는 다음 case 명령을 실행할때
					//break를 사용하지 않는다. 
			 
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
