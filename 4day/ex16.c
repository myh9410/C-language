#include <stdio.h>
int main(){
	int i,j;
	
	for (i=0;i<=5;i++){	//for(�ʱⰪ;���ǽ�;������)
		printf("i = %d\n",i);
		for (j=0;j<=3;j++){	//for���ȿ� ��ɹ��� �����̸� {,}���� ����. 
			printf("hello world %d %d \n",i,j);
		}
		printf("========================\n");//j=4�϶� 
	}
	printf("hello world end %d %d \n",i,j);//i=6�϶� 
	return 0;
}

