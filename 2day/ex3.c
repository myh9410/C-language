#include <stdio.h>
int main()
{
//%%써야 %로 인식
	printf("실수 형식1 %%f : %f\n", 1.236120);		//소수점 이하 6째자리까지 인식 
	printf("실수 형식2 %%e : %e\n", 123.6120);		//%e 지수형 
	printf("실수 형식3 %%g : %g\n", 1.236120);		//데이터에 따라 결과가 달라질 수 있음 
	printf("실수 형식4 %%.2f : %.2f\n", 1.236120);	//소수점 2째자리까지만(3째에서 반올림) 
	
	return 0;	
}
