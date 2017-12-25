//ex51.c
#include <stdio.h>
void supper(char* ps);
int main(){
	char sname[] = "hongGiLdong";
	
	//sname[]배열의 문자열을 대문자로 변경하여 sname[]에 저장
	//supper(char*) 
	supper(sname);		//sname[] 배열의 주소값을 supper()함수로 전달. 
	printf("%s\n",sname);
}

void supper(char* ps){	//문자열 길이 strlen(ps)- 반복횟수 
	int i=0;
	for (i=0;i<strlen(sname[]);i++){
		*ps-=32;
		ps++;
	}
}
