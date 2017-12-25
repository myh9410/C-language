/*포인터 = 메모리 내의 주소 
**변수의 메모리 주소 저장하는 변수**
변수
	- 메모리 상의 저장 공간
	- 지금까지는 위치(주소)를 다루지 않고 사용.
	
위치값 - 주소
	- 주소 사용하기 위한 조건
		>> 주소 구하는 주소 연산자
		>> 주소를 저장한느 포인터 변수 
		
주소 연산자		

포인터 			char *p1;
				int *p2;
				double *p3;
*/
#include <stdio.h>
int main(){
	//기본 데이터형 변수 
	int a=10;
	double b=3.14;
	char c='A';
	
	//포인터 변수 - 메모리 참조주소를 저장. 
	int *pa;		//*이 int*로 붙나 int *로 붙나 상관 없음 
	double* pb; 
	char *pc;
	
	pa = &a;	pb = &b;	pc = &c;	//a,b,c변수의 메모리 주소를 포인터 변수에 저장. 
	printf("%d\t %p\t %d바이트\n",a,&a,(int)sizeof(a));
	printf("%d\t %p\t %d바이트\n",*pa,pa,(int)sizeof(*pa));
	printf("\n");

	printf("%f\t %p\t %d바이트\n",b,&b,(int)sizeof(b));
	printf("%f\t %p\t %d바이트\n",*pb,pb,(int)sizeof(*pb));
	printf("\n");	
	
	printf("%c\t %p\t %d바이트\n",c,&c,(int)sizeof(c));
	printf("%c\t %p\t %d바이트\n",*pc,pc,(int)sizeof(*pc));
	printf("\n");
	
	printf("%d\n",*pa-1);		//결과 : 9		연산순서 : * >> -1 
	printf("%p\n",pa-1);		//결과 : 3		주소값에서 1을 뺀것의 값을 가져옴.		//주소출력 : %p		16진수16자리로 -> 64비트 
	printf("%p\n",pb-1);		//포인터변수 연산결과는 가리키는 데이터형에 따라 결정. 
	printf("%p\n",pc-1);		//	int형은 4바이트씩 double형은 8바이트씩 .... 
	return 0;	//응용프로그램의 정상종료 
}
