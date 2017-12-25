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
	parr = arr;	//�迭���� �迭 �̸��� �� ��ü�� �ּ�!	parr != &arr 
	
	for(i=0;i<10;i++){
		printf("%d	%p\t",arr[i],arr+i);
		printf("%d\t%p\n",*(parr+i),parr+i);//*parr+i	->	*�ϰ���+����. 
		
	}
	printf("�ִ밪 : %d\t",imax(arr)); 
	printf("�ִ밪 : %d\n",pmax(arr)); 
	//arr�� ����� �ּ� --> pmax()�Լ� �Ű����� pv�� ���� 
	printf("�ּҰ� : %d\t",imin(arr));
	printf("�ּҰ� : %d\n",pmin(arr));
	
	
	//call by reference (�ּҸ� �Ű������� ����), �迭�� ��簪�� 99��
	//pset99()�Լ� 
	pset99(arr);	//ȣ�� 
	for(i=0;i<10;i++)
		printf("%d	\t",arr[i]);
	printf("\n");
	pset(arr,111);	//arr�迭���� ��� 999�� 	���� 
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

int imax(int v[10]){	//�迭�� ���� ����, call by value 
	int max=0,i;
	for(i=0;i<10;i++)
		if (v[i]>max) max=v[i];
		
	return max;
	
}

int pmax(int *pv){		//�迭�� �ּҸ� main()�Լ����� �޾� pv�� ����. 
	int max=0,i;
	for (i=0;i<10;i++){
		//if(*(pv+i)>max) max=*(pv+i);
		if(*pv>max) max=*pv;
		pv++; 					//if(*(pv+i)>max) max=*(pv+i);�� ����� ����. 
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




