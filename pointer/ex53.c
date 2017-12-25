#include <stdio.h>
int main(){
	char src[] = "hongGiLdong";
	char dest[20];
	//문자열 복사함수, void mystrcpy(char* , char*) 
			
			//pd ->주소, *pd -> 그 주소에 들어갈 또는 들어있는 데이터 
	
		//src주소, dest주소를 매개변수로 받아서 ps의 데이터를 pd로 저장시킴.
								//ps,pd포인터는 다음 데이터를 가리키도록 증가시킴.	dest[20]의 포인터 변수 : pd	
								//													src[]의 포인터 변수 ps
	mystrcpy(src,dest);	//매개변수로 받음. 
	
	printf("%s\n",dest);
	
	
}

void mystrcpy(char*mps,char*mpd){
	int i;
	int slen = strlen(mps);
	for (i=0;i<slen;i++,mps++,mpd++)
		*mpd = *mps; 
}
