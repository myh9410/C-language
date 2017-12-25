//pointerex2
//포인터와 간접참조 연산자(*) 
#include <stdio.h>
int main(){
	int a;		//a에 값을 직접 대입하지 않음. 
	int *pa;
	
	pa=&a;
	*pa=10;		// a= 10과 같은 결과 
	
	printf("%d\n",a);
	printf("%d\n",*pa);
	
	return 0;
	
}
