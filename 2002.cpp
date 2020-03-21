#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i;
	char num[5];
	for(i = 0; i < 32; i++)
	{
		itoa(i, num, 2);
		printf("%05d\n",atoi(num));
	}
	return 0;
}
