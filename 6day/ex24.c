#include <stdio.h>
int main(){
	char c1;
	
	printf("���� 1���� �Է��ϼ��� :");
	scanf("%c",&c1);
	
	if(c1 >='A' && c1<='Z')
		printf("�빮�� �Դϴ�.\n"); 
	else if(c1 >='a' && c1<='z')
		printf("�ҹ��� �Դϴ�.\n");
	else if(c1 >='0' && c1<='9')
		printf("���� �Դϴ�.\n");
	else
		printf("��Ÿ �����Դϴ�.\n");

}
