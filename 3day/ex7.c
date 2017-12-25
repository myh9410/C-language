/*ex7.c
3.1415원주율 값을 기호상수 PI로 수정 */
#include <stdio.h>
int main()
{
	double radius = 3;	//초기값 3 //묵시적 형변환(자동형변환)
	double area;		//초기화 안함 ---> 자동으로 초기값 0저장, 초기화는 권장. 
	const double PI = 3.1415;	//심볼릭상수 사용. 
	
	area = radius*radius*3.1415;
	area = radius*radius*PI;
	printf("반지름 : %lf, 원의 넓의 : %lf \n", radius, area);
	//%lf는 double형 형식문자, 출력은 %f와 차이가 없고 입력시에는 필요. 
	return 0;
}
