#include <stdio.h> 
#include <string.h>

char buff[5000];
char out[5000];

int main()
{
	int i,num;
	scanf("%d",&num);
	sprintf(out,"%s%c%s","",'A',"");
	for(i=1; i <num ;i++)
	{
		sprintf(buff,"%s%c%s",out,'A'+i,out);
		strcpy(out,buff);
	}
	printf("%s\n",out);
	return 0;
}
