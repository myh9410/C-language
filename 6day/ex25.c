#include <stdio.h>
int main(){
	int n1,n2,n3;
	int max;
	
	printf("Input a number1 : ");
	scanf("%d",&n1);
	printf("Input a number2 : ");
	scanf("%d",&n2);
	printf("Input a number3 : ");
	scanf("%d",&n3);
	
	if(n1>n2){
	
		max = n1;
		if(n1>n3)
			max = n1;
		else if (n3>n1)
			max = n3;
		else
			max = n1;
	}
	else if(n2>n1){
	
		max = n2;
		if(n2>n3)
			max = n2;
		else if (n3>n2)
			max = n3;
		else
			max = n2;
	}
	else
		max = n1;
		if(n1>n3)
			max = n1;
		else if (n3>n1)
			max = n3;
		else
			max = n1;	
	printf("%d, %d, %d �ִ밪 max = %d\n",n1,n2,n3,max);

}
