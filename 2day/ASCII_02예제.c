#include <stdio.h>
//ASCII 예제2
int main()
{
	printf("%d\n",-2147483648);
	printf("%u\n",-2147483648);
	printf("%d\n",2147483648);		//overflow 값의 범위를 벗어남. 
	printf("%u\n",2147483648);
//문자열
	printf("%s","helloworld\n");    // %s 생략 
	
	return 0;

}
