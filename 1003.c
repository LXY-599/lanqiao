#include<stdio.h>

int main()
{
	long long num;
	scanf("%d",&num);
	printf("%I64d",num + num*(num-1)/2);
	return 0;
}

 
 
