//pointerex3 
#include <stdio.h>
int main(){
	int a = 100, b = 200, temp;
	int *p1, *p2, *p_temp;		//포인터 변수 
	p1 = &a;	//p1은 a를 지정
	p2 = &b;	//p2는 b를 지정 
	printf("a : %d\t	b : %d\n",a,b);
	printf("/////////////////////////////////////////");
	printf("\n>> a와 b에 저장된 값을 바꾸기 \n");
	temp = a;
	a = b;
	b = temp;
	printf("a : %d\t	b : %d\n",a,b);
	printf("p1 : %p\t	p2 : %p\n",p1,p2); 
	printf("p1 : %d\t	p2 : %d\n",*p1,*p2);
	a = 100, b = 200;
	printf("/////////////////////////////////////////");
	printf("\n >> p1과 p2가 가리키는 곳에 저장된 값을 직접 바꾸기 \n");
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
	printf("a : %d\t	b : %d\n",a,b);
	printf("p1 : %p\t	p2 : %p\n",p1,p2); 
	printf("p1 : %d\t	p2 : %d\n",*p1,*p2);
	a = 100, b = 200;
	printf("/////////////////////////////////////////");
	printf("\n>> 포인터 p1과 p2에 저장된 주소를 바꾸기 \n");
	p_temp = p1;
	p1 = p2;
	p2 = p_temp;
	printf("a : %d\t	b : %d\n",a,b);
	printf("p1 : %p\t	p2 : %p\n",p1,p2); 
	printf("p1 : %d\t	p2 : %d\n",*p1,*p2);
	return 0; 
}
