#include <stdio.h>
	//�迭
	/*����
		�ʿ伺
				���� ������ ���� ���� ���� ���� ������
				������ �������� ����ϴ� ���.
				�ϳ��� ���������� ����� �� ������ ������ ���� �Ѵ�.
		ex) 7������ ������ �����ϱ� ���� ���� 7���� ����ϴ� ���,
		int a,b,c,d,e,f,g;	-->   int arr[7];�� ��Ÿ�� �� ����. 
	char�� �迭
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
		printf("%c",str1[i]);	//str2,str3,str4 ��� ���� ������� ����� �� ����. 
		
	printf("%c\n",str1);		//�迭�̸��� �迭�� �����ּҸ� ���´�.	 
	printf("%s\n",str2);		//�迭�̸��� ����Ͽ� �޸��ּҷ� ����.	
	printf("%s\n",str3);
	printf("%s\n",str4);
	
	printf("Input your name : >");
	scanf("%s",str2);		//�迭 �̸� ��ü�� �ּ��̹Ƿ� &��ȣ ������� �ʴ´�. 
	
	printf("\nyour name is: %s",str2);	/�б�
	 
	
	
	
	 
}
