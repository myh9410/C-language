#include <stdio.h>
//ASCII ����2
int main()
{
	printf("%d\n",-2147483648);
	printf("%u\n",-2147483648);
	printf("%d\n",2147483648);		//overflow ���� ������ ���. 
	printf("%u\n",2147483648);
//���ڿ�
	printf("%s","helloworld\n");    // %s ���� 
	
	return 0;

}
