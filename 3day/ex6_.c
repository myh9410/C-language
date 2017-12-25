/* ex6_.c
 변수 i를 int, unsigned int로 하여 실행결과
 차이점을 확인 */
 
#include <stdio.h>
int main()
{
	//int i;
	unsigned int i;
	i = 1500000000U + 1500000000U;
	printf("i : %u\n", i);

//	int i;
//	//unsigned int i;
//	i = 1500000000 + 1500000000;	//overflow 
//	printf("i : %d\n", i);
		
	
	
	
 } 
