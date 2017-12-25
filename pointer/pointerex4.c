//pointerex4.c
#include <stdio.h>

void swap(int,int);
void pswap(int*,int*);
int main(){
	
	int a=10,b=20;
	
	printf("a = %d,	b=%d\n",a,b); 
	swap(a,b);	//swap�Լ� ȣ�� 
	printf("swap() ������\n");
	printf("a = %d,	b=%d\n",a,b);
	
	pswap(&a,&b);	//swap�Լ� ȣ�� 
	printf("pswap() ������\n");
	printf("a = %d,	b=%d\n",a,b);
	
	return 0;
}

void swap(int n1, int n2){	//�Ű������� ���� �����ϴ� call by value 
	int temp;				//main()�� a,b�� n1,n2�� �ٸ� ������ ���� �Ѱ���.
	temp=n1;				//����� n1,n2���� �ٲ�
	n1=n2;
	n2=temp;
	
}

void pswap(int *p1, int *p2){	//�Ű������� �ּҸ� �������� call by reference 
	int temp;					//ȣ���� main()�� �Լ� pswap()������ 
								//�޸� ������ ���� 
	temp = *p1;
	*p1=*p2;
	*p2=temp;
	*p2=999;					//������ ���� ���� : �Լ����� �ּҸ� �Ѱ��ְ�����鼭 ���� �������ֱ� ����. 
}

