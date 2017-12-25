#include <stdio.h>
//ASCII 예제2
int main()
{
	printf("%d\n",-2147483648LL);	//Long Long >> 8바이트 정수 리터럴표시 -- warning 사라짐. 
	printf("%u\n",-2147483648);
	printf("%d\n",2147483648);		//overflow 값의 범위를 벗어남. 
	printf("%u\n",2147483648U);		//리터럴을 정확하게 지정해주면 컴파일 시 뜨는 Warning이 사라짐. 
//문자열
	printf("%s","helloworld\n");    // %s 생략 
	
	return 0;

}
