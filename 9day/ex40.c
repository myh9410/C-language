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
		sname[0] "abcdef" ���ڿ��� ���� �ּҸ� ����
		sname[1] "qwert" ���ڿ��� ���� �ּҸ� ����
		sname[2] "qwerty" ���ڿ��� ���� �ּҸ� ����
		sname[3] "zxcvb" ���ڿ��� ���� �ּҸ� ����
		sname[4] "wasdx" ���ڿ��� ���� �ּҸ� ����
	 */
	printf("%c\n",sname[2][3]);
	return 0;
}

