//pointerex4.c
#include <stdio.h>

void swap(int,int);
void pswap(int*,int*);
int main(){
	
	int a=10,b=20;
	
	printf("a = %d,	b=%d\n",a,b); 
	swap(a,b);	//swap함수 호출 
	printf("swap() 실행결과\n");
	printf("a = %d,	b=%d\n",a,b);
	
	pswap(&a,&b);	//swap함수 호출 
	printf("pswap() 실행결과\n");
	printf("a = %d,	b=%d\n",a,b);
	
	return 0;
}

void swap(int n1, int n2){	//매개변수가 값을 복사하는 call by value 
	int temp;				//main()의 a,b는 n1,n2와 다른 기억장소 값만 넘겨줌.
	temp=n1;				//결과는 n1,n2값만 바뀜
	n1=n2;
	n2=temp;
	
}

void pswap(int *p1, int *p2){	//매개변수가 주소를 가져오는 call by reference 
	int temp;					//호출한 main()과 함수 pswap()사이의 
								//메모리 공간을 공유 
	temp = *p1;
	*p1=*p2;
	*p2=temp;
	*p2=999;					//포인터 쓰는 목적 : 함수끼리 주소를 넘겨주고받으면서 값을 공유해주기 위함. 
}

