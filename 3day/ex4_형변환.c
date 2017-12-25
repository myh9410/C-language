#include <stdio.h> 
int main()
{
	char c1 = 'A', c2 = 'b', c3 = '1';
//	printf("%c %d \n",'A', 'A');
//	printf("%c %d \n",'b', 'b');
//	printf("%c %d \n",'1', '1');

	c1 = 'Z';
	printf("%c %d \n",c1,c1);
	c2=c2+3;	//문자형은 1바이트 정수형과 동일하므로 산술식이 가능. 
	printf("%c %d \n",c2,c2);
	printf("%c %d \n",c3,c3);

	return 0;
}
