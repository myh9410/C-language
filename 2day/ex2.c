#include <stdio.h>
int main()
{
	printf("%d\n", 28);
	printf("%d\n", 0734);	//0	����	8���� -> 10����     7*64+3*8+4*1
	printf("%d\n",0xAF);	//0x����	16���� -> 10����   "A"*256+1*16+"C"*1 
	printf("0x%X\n",2588);  //10���� -> 16����   
	return 0;
}
