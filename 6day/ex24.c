#include <stdio.h>
int main(){
	char c1;
	
	printf("문자 1개를 입력하세요 :");
	scanf("%c",&c1);
	
	if(c1 >='A' && c1<='Z')
		printf("대문자 입니다.\n"); 
	else if(c1 >='a' && c1<='z')
		printf("소문자 입니다.\n");
	else if(c1 >='0' && c1<='9')
		printf("숫자 입니다.\n");
	else
		printf("기타 문자입니다.\n");

}
