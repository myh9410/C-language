#include <stdio.h>
	//배열
	/*개요
		필요성
				같은 데이터 형을 갖는 여러 개의 변수를
				동일한 목적으로 사용하는 경우.
				하나의 변수명으로 입출력 및 기억장소 관리를 쉽게 한다.
		ex) 7과목의 성적을 저장하기 위해 변수 7개를 사용하는 대신,
		int a,b,c,d,e,f,g;	-->   int arr[7];로 나타낼 수 있음. 
	char형 배열
		char str[4]	str[0] = a,	str[1] = b,	str[2] = c,	str[3] = \0(null)*/
int main(){
	//(1)
	char str1[4];
	str1[0] = 'a';
	str1[1] = 'b';
	str1[2] = 'c';
	str1[3] = '\0';
	//(2)
	char str2[4] = "abc";
	//(3)
	char str3[4] = {'a','b','c','\0'};
	
	//(4)
	char str4[] = {'a','b','c','\0'};
	
	int i;
	for(i=0;i<4;i++)
		printf("%c",str1[i]);	//str2,str3,str4 모두 같은 방법으로 출력할 수 있음. 
		
	printf("%c\n",str1);		//배열이름은 배열의 시작주소를 갖는다.	 
	printf("%s\n",str2);		//배열이름을 사용하여 메모리주소로 접근.	
	printf("%s\n",str3);
	printf("%s\n",str4);
	
	printf("Input your name : >");
	scanf("%s",str2);		//배열 이름 자체가 주소이므로 &기호 사용하지 않는다. 
	
	printf("\nyour name is: %s",str2);	/읽기
	 
	
	
	
	 
}
