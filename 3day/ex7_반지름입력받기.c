/*ex7_.c
3.1415������ ���� ��ȣ��� PI�� ���� */
#include <stdio.h>
int main()
{
	double radius;	 
	double area;
	const double PI = 3.1415;	//�ɺ������ ���. 
	
	printf("�������� �Է����ּ��� : ");
	scanf("%lf",&radius); 
//	area = radius*radius*3.1415;
	area = radius*radius*PI;
	printf("������ : %lf, ���� ���� : %lf \n", radius, area);
	
}
