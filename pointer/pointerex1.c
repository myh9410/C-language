/*������ = �޸� ���� �ּ� 
**������ �޸� �ּ� �����ϴ� ����**
����
	- �޸� ���� ���� ����
	- ���ݱ����� ��ġ(�ּ�)�� �ٷ��� �ʰ� ���.
	
��ġ�� - �ּ�
	- �ּ� ����ϱ� ���� ����
		>> �ּ� ���ϴ� �ּ� ������
		>> �ּҸ� �����Ѵ� ������ ���� 
		
�ּ� ������		

������ 			char *p1;
				int *p2;
				double *p3;
*/
#include <stdio.h>
int main(){
	//�⺻ �������� ���� 
	int a=10;
	double b=3.14;
	char c='A';
	
	//������ ���� - �޸� �����ּҸ� ����. 
	int *pa;		//*�� int*�� �ٳ� int *�� �ٳ� ��� ���� 
	double* pb; 
	char *pc;
	
	pa = &a;	pb = &b;	pc = &c;	//a,b,c������ �޸� �ּҸ� ������ ������ ����. 
	printf("%d\t %p\t %d����Ʈ\n",a,&a,(int)sizeof(a));
	printf("%d\t %p\t %d����Ʈ\n",*pa,pa,(int)sizeof(*pa));
	printf("\n");

	printf("%f\t %p\t %d����Ʈ\n",b,&b,(int)sizeof(b));
	printf("%f\t %p\t %d����Ʈ\n",*pb,pb,(int)sizeof(*pb));
	printf("\n");	
	
	printf("%c\t %p\t %d����Ʈ\n",c,&c,(int)sizeof(c));
	printf("%c\t %p\t %d����Ʈ\n",*pc,pc,(int)sizeof(*pc));
	printf("\n");
	
	printf("%d\n",*pa-1);		//��� : 9		������� : * >> -1 
	printf("%p\n",pa-1);		//��� : 3		�ּҰ����� 1�� ������ ���� ������.		//�ּ���� : %p		16����16�ڸ��� -> 64��Ʈ 
	printf("%p\n",pb-1);		//�����ͺ��� �������� ����Ű�� ���������� ���� ����. 
	printf("%p\n",pc-1);		//	int���� 4����Ʈ�� double���� 8����Ʈ�� .... 
	return 0;	//�������α׷��� �������� 
}
