/*ex7.c
3.1415������ ���� ��ȣ��� PI�� ���� */
#include <stdio.h>
int main()
{
	double radius = 3;	//�ʱⰪ 3 //������ ����ȯ(�ڵ�����ȯ)
	double area;		//�ʱ�ȭ ���� ---> �ڵ����� �ʱⰪ 0����, �ʱ�ȭ�� ����. 
	const double PI = 3.1415;	//�ɺ������ ���. 
	
	area = radius*radius*3.1415;
	area = radius*radius*PI;
	printf("������ : %lf, ���� ���� : %lf \n", radius, area);
	//%lf�� double�� ���Ĺ���, ����� %f�� ���̰� ���� �Է½ÿ��� �ʿ�. 
	return 0;
}
