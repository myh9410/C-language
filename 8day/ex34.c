#include <stdio.h> 
int main(){
	int score[5][3] = {10,20,30,40,50,11,21,31,41,51,12,22,32,42,52};
	
	int i,j;
	int sum = 0;
	int n1=0,n2=0,n3=0;
	for(i=0; i<5; i++){
		sum = 0;
		for(j=0;j<3;j++){
			printf("[%d][%d] = %d\t",i,j,score[i][j]);
			sum +=score[i][j];
			n1 +=score[i][0];
			n2 +=score[i][1];
			n3 +=score[i][2];
		}
		printf("[%d] Çà ÇÕ°è = %d \n",i,sum);
		
	}
		
}
