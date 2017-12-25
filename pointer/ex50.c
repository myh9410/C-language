//ex50.c
#include <stdio.h> 
int imax(int v[]);
int pmax(int *pv);
int imin (int v[]);
int pmin (int *pv);
void pset99(int *pv);
void pset(int *pv,int v);

int main(void){
	int arr[10] = {10,20,30,40,150,60,70,80,90,100};
	int *parr;
	int i;
	parr = arr;	//배열에서 배열 이름은 그 자체가 주소!	parr != &arr 
	
	for(i=0;i<10;i++){
		printf("%d	%p\t",arr[i],arr+i);
		printf("%d\t%p\n",*(parr+i),parr+i);//*parr+i	->	*하고나서+연산. 
		
	}
	printf("최대값 : %d\t",imax(arr)); 
	printf("최대값 : %d\n",pmax(arr)); 
	//arr에 저장된 주소 --> pmax()함수 매개변수 pv에 저장 
	printf("최소값 : %d\t",imin(arr));
	printf("최소값 : %d\n",pmin(arr));
	
	
	//call by reference (주소를 매개변수로 전달), 배열의 모든값을 99로
	//pset99()함수 
	pset99(arr);	//호출 
	for(i=0;i<10;i++)
		printf("%d	\t",arr[i]);
	printf("\n");
	pset(arr,111);	//arr배열값을 모두 999로 	정의 
	for(i=0;i<10;i++)
		printf("%d	\t",*parr++);
//printf("%d  \t",*(parr+i));
	return 0;
}
void pset99(int *pv){
	int i;
	for(i=0;i<10;i++){
		*pv =99;
		pv++;
	}
		
}
void pset(int *pv,int v){
	int i;
	for(i=0;i<10;i++){
		*pv =v;
		pv++;
	}
}

int imax(int v[10]){	//배열의 값을 복사, call by value 
	int max=0,i;
	for(i=0;i<10;i++)
		if (v[i]>max) max=v[i];
		
	return max;
	
}

int pmax(int *pv){		//배열의 주소를 main()함수에서 받아 pv에 저장. 
	int max=0,i;
	for (i=0;i<10;i++){
		//if(*(pv+i)>max) max=*(pv+i);
		if(*pv>max) max=*pv;
		pv++; 					//if(*(pv+i)>max) max=*(pv+i);와 결과값 같음. 
	}
	return max;
}

int imin (int v[10]){
	int min=999,i;
	for(i=0;i<10;i++)
		if (v[i]<min) min=v[i];
		
	return min;
}

int pmin (int *pv){
	int min=999,i;
	for (i=0;i<10;i++){
		if (*(pv+i)<min) min=*(pv+i);
	}
	return min;
}




