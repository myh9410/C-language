/*ex9.c
*int, double�� ������ �Է� 
*/
#include <stdio.h>
int main()
{
	int age;
	double height;
	
	printf("���̸� �Է��ϼ���.");
	scanf("%d",&age);
	printf("Ű�� �Է��ϼ���.");
	scanf("%lf",&height);
	 
	printf("���� : %d. Ű : %f.\n",age, height);
	
	return 0;
}
