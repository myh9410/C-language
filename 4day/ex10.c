#include <stdio.h>
int main(){
	double n1, n2; double result; 
	
	printf("�Ǽ� n1�� �Է��ϼ���.--->"); 	scanf("%lf",&n1);
	printf("�Ǽ� n2�� �Է��ϼ���.--->"); 	scanf("%lf",&n2);
	
	result = n1 + n2;
	printf("%lf + %lf = %lf\n",n1,n2,result);
	result = n1 - n2;
	printf("%lf - %lf = %lf\n",n1,n2,result);
	result = n1 * n2;
	printf("%lf * %lf = %lf\n",n1,n2,result);
	result = n1 / n2;
	printf("%lf / %lf = %lf\n",n1,n2,result);
	//result = n1 % n2;					//�Ǽ� �����Ϳ� ���� ������ ����Ұ� 
	//printf("%lf %% %lf = %lf\n",n1,n2,result);
}
