#include <stdio.h>
int main(){
	int i,arr[10]={11,22,33,44,55,66,77,88,99,101};
	int *pa;
	pa=arr;

	for (i=0;i<10;i++)
		printf("%d\t",*pa++);  //++연산 : 값? 주소?
		//printf("%d\t",*(pa++));	//++연산 : 주소? --> *pa;pa++;
		//printf("%d\t",*(++pa));	//주소
		//printf("%d\t",(*pa)++);	//주소, 전위
		//printf("%d\t",++*pa);		//값
		printf("%d\t",arr[i]);		//값, 전위
	for(i=0;i<10;i++)	//바로 위의 for문과 동일, 컴파일러는 배열명을 자동으로 포인터로 변환.
		printf("%d\t",*(arr+i));
		//printf("%d\t",*arr+i);
		//오류, 배열명은 포인터 변수처럼 값을 바꿀수는 없음. arr++ ==> arr=arr+1;

	for (i=0;i<10;i++)
		printf("%d\t",pa[i]);//pa는 포인터변수, 배열처럼 인덱스 표현이 가능, pa[i] --> *(pa+i)

	printf("배열 arr의 크기 : %d\n",sizeof(arr));	//arr이 차지하는 기억공간의 크기
	printf("포인터변수 pa의 크기 : %d\n",sizeof(pa));
	//포인터변수 pa는 주소(포인터)를 저장, 주소의 크기는 8바이트
	printf("배열 arr의 개수 : %d\n",sizeof(arr)/sizeof(arr[0]));	//배열의 개수 구하는 공식!

	return 0;
}

