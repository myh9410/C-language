#include <stdio.h> 
int main()
{
	char c1 = 'A', c2 = 'b', c3 = '1';
//	printf("%c %d \n",'A', 'A');
//	printf("%c %d \n",'b', 'b');
//	printf("%c %d \n",'1', '1');

	c1 = 'Z';
	printf("%c %d \n",c1,c1);
	c2=c2+3;	//�������� 1����Ʈ �������� �����ϹǷ� ������� ����. 
	printf("%c %d \n",c2,c2);
	printf("%c %d \n",c3,c3);

	return 0;
}
