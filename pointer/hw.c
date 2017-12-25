#include <stdio.h>
int main(){
	char sname[] = "hongGiLdong";
	char*ps;
	supper(sname);
	printf("%s\n",sname);
}

void supper(char *ps){
	int i;
	int slen=strlen(ps);
	for (i=0;i<slen;i++,ps++)
		if ((*ps >'a') && (*ps < 'z'))	*ps-=32;
}
