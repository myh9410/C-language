//pointerex2
//�����Ϳ� �������� ������(*) 
#include <stdio.h>
int main(){
	int a;		//a�� ���� ���� �������� ����. 
	int *pa;
	
	pa=&a;
	*pa=10;		// a= 10�� ���� ��� 
	
	printf("%d\n",a);
	printf("%d\n",*pa);
	
	return 0;
	
}
