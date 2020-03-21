#include <stdio.h> 

void func(int n)
{
	int i;
	for(i=1; i<=n ;i++)
	{
		printf("sin(%d",i);
		if(i != n)
			if(i%2) printf("-");
			else printf("+");
	}

	for(; i>1 ;i--)
		printf(")");
}

int main()
{
	int i,num;
	scanf("%d",&num);
	for(i=0; i < num-1 ;i++)
		printf("(");
	for(i=1; i<=num ;i++)
	{
		func(i);
		printf("+%d",num + 1 - i);
		if(i != num) printf(")");
	}
	printf("\n");
	return 0;
}
