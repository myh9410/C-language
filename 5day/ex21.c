#include <stdio.h>
int main(){
	int i=60;
	
//	if (i%2==0){
//		printf("¦���Դϴ�.\n");		//���ǽ��� ���� �� 
//	}else{
//		printf("Ȧ���Դϴ�.\n");		//���ǽ��� ������ �� 
//	}
//}

//	if (i%5==0){
//		printf("5�� ����Դϴ�.\n");
//	}
	if (i%3==0){
		printf("3�� ����Դϴ�.\n");
	}if (i%4==0){
		printf("4�� ����Դϴ�.\n");
	}if (i%5==0){
		printf("5�� ����Դϴ�.\n");
	}if(i%3 != 0 && i%4 != 0 && i%5 != 0){
		printf("�ش���� �ʽ��ϴ�.");
	}
}
