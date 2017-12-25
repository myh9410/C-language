#include <stdio.h>
int main(){
	short x = 10, y= 6;
	
	printf(%d\n,x);	//0000000000001010
	printf(%d\n,y); //0000000000000110


	printf(%d\n,x&y);//0000000000000010
	printf(%d\n,x|y);//0000000000001110
	printf(%d\n,x^y);//0000000000001100
	printf(%d\n,~x);//1111111111110101
	printf(%d\n,~y);//1111111111111001
	
	return 0;



}
