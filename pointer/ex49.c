#include <stdio.h>
char cupper(char v);
void pupper(char *v);
int main(void){
	char c1='a';
	
	printf("�ҹ���%c --> �빮��%c\n",c1,c1-32);
	//ASCII�ڵ尪 �ҹ���=�빮��+32
	printf("�ҹ���%c --> �빮��%c\n",c1,cupper(c1));
	
	//c1�� ����� �ҹ��ڸ� �빮�ڷ� ��ȯ�Ͽ� �����ϴ� �Լ�pupper()�� ����� ȣ��. 
	printf("�ҹ���%c -->",c1);
	pupper(&c1);
	printf("�빮��%c -->",c1);
	return 0; 
}

char cupper(char v){
	return v-32;
}

void pupper(char *v){
	*v=*v-32;
	
} 
