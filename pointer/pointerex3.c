//pointerex3 
#include <stdio.h>
int main(){
	int a = 100, b = 200, temp;
	int *p1, *p2, *p_temp;		//������ ���� 
	p1 = &a;	//p1�� a�� ����
	p2 = &b;	//p2�� b�� ���� 
	printf("a : %d\t	b : %d\n",a,b);
	printf("/////////////////////////////////////////");
	printf("\n>> a�� b�� ����� ���� �ٲٱ� \n");
	temp = a;
	a = b;
	b = temp;
	printf("a : %d\t	b : %d\n",a,b);
	printf("p1 : %p\t	p2 : %p\n",p1,p2); 
	printf("p1 : %d\t	p2 : %d\n",*p1,*p2);
	a = 100, b = 200;
	printf("/////////////////////////////////////////");
	printf("\n >> p1�� p2�� ����Ű�� ���� ����� ���� ���� �ٲٱ� \n");
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("a : %d\t	b : %d\n",a,b);
	printf("p1 : %p\t	p2 : %p\n",p1,p2); 
	printf("p1 : %d\t	p2 : %d\n",*p1,*p2);
	a = 100, b = 200;
	printf("/////////////////////////////////////////");
	printf("\n>> ������ p1�� p2�� ����� �ּҸ� �ٲٱ� \n");
	p_temp = p1;
	p1 = p2;
	p2 = p_temp;
	printf("a : %d\t	b : %d\n",a,b);
	printf("p1 : %p\t	p2 : %p\n",p1,p2); 
	printf("p1 : %d\t	p2 : %d\n",*p1,*p2);
	return 0; 
}
