#include <stdio.h>
int main(){
	char src[] = "hongGiLdong";
	char dest[20];
	//���ڿ� �����Լ�, void mystrcpy(char* , char*) 
			
			//pd ->�ּ�, *pd -> �� �ּҿ� �� �Ǵ� ����ִ� ������ 
	
		//src�ּ�, dest�ּҸ� �Ű������� �޾Ƽ� ps�� �����͸� pd�� �����Ŵ.
								//ps,pd�����ʹ� ���� �����͸� ����Ű���� ������Ŵ.	dest[20]�� ������ ���� : pd	
								//													src[]�� ������ ���� ps
	mystrcpy(src,dest);	//�Ű������� ����. 
	
	printf("%s\n",dest);
	
	
}

void mystrcpy(char*mps,char*mpd){
	int i;
	int slen = strlen(mps);
	for (i=0;i<slen;i++,mps++,mpd++)
		*mpd = *mps; 
}
