#include <stdio.h>
int main(){
	int i,arr[10]={11,22,33,44,55,66,77,88,99,101};
	int *pa;
	pa=arr;

	for (i=0;i<10;i++)
		printf("%d\t",*pa++);  //++���� : ��? �ּ�?
		//printf("%d\t",*(pa++));	//++���� : �ּ�? --> *pa;pa++;
		//printf("%d\t",*(++pa));	//�ּ�
		//printf("%d\t",(*pa)++);	//�ּ�, ����
		//printf("%d\t",++*pa);		//��
		printf("%d\t",arr[i]);		//��, ����
	for(i=0;i<10;i++)	//�ٷ� ���� for���� ����, �����Ϸ��� �迭���� �ڵ����� �����ͷ� ��ȯ.
		printf("%d\t",*(arr+i));
		//printf("%d\t",*arr+i);
		//����, �迭���� ������ ����ó�� ���� �ٲܼ��� ����. arr++ ==> arr=arr+1;

	for (i=0;i<10;i++)
		printf("%d\t",pa[i]);//pa�� �����ͺ���, �迭ó�� �ε��� ǥ���� ����, pa[i] --> *(pa+i)

	printf("�迭 arr�� ũ�� : %d\n",sizeof(arr));	//arr�� �����ϴ� �������� ũ��
	printf("�����ͺ��� pa�� ũ�� : %d\n",sizeof(pa));
	//�����ͺ��� pa�� �ּ�(������)�� ����, �ּ��� ũ��� 8����Ʈ
	printf("�迭 arr�� ���� : %d\n",sizeof(arr)/sizeof(arr[0]));	//�迭�� ���� ���ϴ� ����!

	return 0;
}

