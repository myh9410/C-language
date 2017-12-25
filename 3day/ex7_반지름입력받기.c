/*ex7_.c
3.1415원주율 값을 기호상수 PI로 수정 */
#include <stdio.h>
int main()
{
	double radius;	 
	double area;
	const double PI = 3.1415;	//심볼릭상수 사용. 
	
	printf("반지름을 입력해주세요 : ");
	scanf("%lf",&radius); 
//	area = radius*radius*3.1415;
	area = radius*radius*PI;
	printf("반지름 : %lf, 원의 넓의 : %lf \n", radius, area);
	
}
