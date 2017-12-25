/*ex9.c
*int, double형 데이터 입력 
*/
#include <stdio.h>
int main()
{
	int age;
	double height;
	
	printf("나이를 입력하세요.");
	scanf("%d",&age);
	printf("키를 입력하세요.");
	scanf("%lf",&height);
	 
	printf("나이 : %d. 키 : %f.\n",age, height);
	
	return 0;
}
