#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i,out;
	char num[4];
	
	for(i=1000 ; i<10000; i++)
	{
		itoa(i, num, 10);
		if(num[0]==num[3]&&num[1]==num[2])
			printf("%d\n",i);
	}
	
	return 0;
}
