#include <stdio.h>
//ASCII ����2
int main()
{
	printf("%d\n",-2147483648LL);	//Long Long >> 8����Ʈ ���� ���ͷ�ǥ�� -- warning �����. 
	printf("%u\n",-2147483648);
	printf("%d\n",2147483648);		//overflow ���� ������ ���. 
	printf("%u\n",2147483648U);		//���ͷ��� ��Ȯ�ϰ� �������ָ� ������ �� �ߴ� Warning�� �����. 
//���ڿ�
	printf("%s","helloworld\n");    // %s ���� 
	
	return 0;

}
