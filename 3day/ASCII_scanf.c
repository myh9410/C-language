#include <stdio.h>
int main()
{
	char val; 
	printf("값을 입력해주세요 : "); 
	scanf("%c",&val);
	printf("%c의 ASCII값    10진수 : %d, 16진수 : 0x%x \n",val,val,val);
	return 0;
}
