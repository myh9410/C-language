#include <stdio.h>
int main(){
	int i=0,cnt=0;
	int num[10];	//�ִ� 10��
	int max = 0;
	int min = 2147483647;
	/*
	printf("�Է¹��� ������ ���� => ");
	scanf("%d",&cnt);*/
	
	//for (i=0;i<cnt;i++){
	for(i=0;;i++){
	
		printf("number%d : ", i+1);
		scanf("%d", &num[i]);
		if (num[i]==0) break; 
		if (max < num[i])
			max = num[i];
		if (min > num[i])
			min = num[i];
		
		
		//if(num[i]==0) break;
	} 
	cnt = i; //�Է� for�� ����� i�� ���� �Էµ� ���� ���� 
	printf("�������� ����մϴ�.\n");
	for (i=cnt-1;i>=0;i--)
		printf("number%d : %d\n",i+1,num[i]);
		printf("�ִ밪�� %d �Դϴ�.\n",max);
		printf("�ּҰ��� %d �Դϴ�.\n",min);
}
