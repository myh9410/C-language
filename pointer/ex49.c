#include <stdio.h>
char cupper(char v);
void pupper(char *v);
int main(void){
	char c1='a';
	
	printf("소문자%c --> 대문자%c\n",c1,c1-32);
	//ASCII코드값 소문자=대문자+32
	printf("소문자%c --> 대문자%c\n",c1,cupper(c1));
	
	//c1에 저장된 소문자를 대문자로 변환하여 저장하는 함수pupper()를 만들어 호출. 
	printf("소문자%c -->",c1);
	pupper(&c1);
	printf("대문자%c -->",c1);
	return 0; 
}

char cupper(char v){
	return v-32;
}

void pupper(char *v){
	*v=*v-32;
	
} 
