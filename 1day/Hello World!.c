/*2017년 2월 8일 
C언어 - 이식성 좋음(어느 프로그램에서나 사용 가능), 함수단위의 프로그램 작성 
절차적 언어(객체지향 언어) 
gcc - linux unix에서 제공
IDE - 통합개발환경. 프로그램 안에서 컴파일, 실행 등 가능한 개발툴*/

#include <stdio.h> 	//std = standard io = input output
					//표준 입출력 헤더파일, 입출력 함수 정의, 헤더파일은 <>전처리기 사용 
int main(void)		//main()함수 : 응용프로그램 시작 함수 
{
	printf("Hello World! \n");
	return 0;		//함수 종료에 대한 결과값 전달 
// debug - 오류를 잡아주는 작업 
}
