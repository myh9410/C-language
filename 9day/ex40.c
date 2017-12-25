/*
 * ex40.c
 *
 *  Created on: 2017. 2. 20.
 *      Author: Administrator
 */
#include <stdio.h>
int main(){
	char sname[5][20] = {"abcdef","qwert","qwerty","zxcvb","wasdx"};
	int i;
	for(i=0;i<5;i++)
		printf("%s\n",sname[i]);
	/*
		sname[0] "abcdef" 문자열의 참조 주소를 저장
		sname[1] "qwert" 문자열의 참조 주소를 저장
		sname[2] "qwerty" 문자열의 참조 주소를 저장
		sname[3] "zxcvb" 문자열의 참조 주소를 저장
		sname[4] "wasdx" 문자열의 참조 주소를 저장
	 */
	printf("%c\n",sname[2][3]);
	return 0;
}

