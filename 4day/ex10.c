#include <stdio.h>
int main(){
	double n1, n2; double result; 
	
	printf("실수 n1을 입력하세요.--->"); 	scanf("%lf",&n1);
	printf("실수 n2을 입력하세요.--->"); 	scanf("%lf",&n2);
	
	result = n1 + n2;
	printf("%lf + %lf = %lf\n",n1,n2,result);
	result = n1 - n2;
	printf("%lf - %lf = %lf\n",n1,n2,result);
	result = n1 * n2;
	printf("%lf * %lf = %lf\n",n1,n2,result);
	result = n1 / n2;
	printf("%lf / %lf = %lf\n",n1,n2,result);
	//result = n1 % n2;					//실수 데이터에 대한 나머지 연산불가 
	//printf("%lf %% %lf = %lf\n",n1,n2,result);
}
