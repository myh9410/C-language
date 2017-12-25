#include <stdio.h>
int main(){
	int i=0,cnt=0;
	int num[10];	//최대 10개
	int max = 0;
	int min = 2147483647;
	/*
	printf("입력받을 숫자의 개수 => ");
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
	cnt = i; //입력 for문 종료시 i의 값은 입력된 정수 개수 
	printf("역순으로 출력합니다.\n");
	for (i=cnt-1;i>=0;i--)
		printf("number%d : %d\n",i+1,num[i]);
		printf("최대값은 %d 입니다.\n",max);
		printf("최소값은 %d 입니다.\n",min);
}
