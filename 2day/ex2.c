#include <stdio.h>
int main()
{
	printf("%d\n", 28);
	printf("%d\n", 0734);	//0	시작	8진수 -> 10진수     7*64+3*8+4*1
	printf("%d\n",0xAF);	//0x시작	16진수 -> 10진수   "A"*256+1*16+"C"*1 
	printf("0x%X\n",2588);  //10진수 -> 16진수   
	return 0;
}
