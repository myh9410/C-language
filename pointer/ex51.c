//ex51.c
#include <stdio.h>
void supper(char* ps);
int main(){
	char sname[] = "hongGiLdong";
	
	//sname[]�迭�� ���ڿ��� �빮�ڷ� �����Ͽ� sname[]�� ����
	//supper(char*) 
	supper(sname);		//sname[] �迭�� �ּҰ��� supper()�Լ��� ����. 
	printf("%s\n",sname);
}

void supper(char* ps){	//���ڿ� ���� strlen(ps)- �ݺ�Ƚ�� 
	int i=0;
	for (i=0;i<strlen(sname[]);i++){
		*ps-=32;
		ps++;
	}
}
