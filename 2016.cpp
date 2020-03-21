#include <stdio.h>
#include <math.h>

int func(int a)
{
	int i;
		
	for(i=2; i<=sqrt(a); i++)
		if(a % i == 0)
			return i;
	return 0;
}

int main()
{
	int i,a,b,count,flag;
	scanf("%d %d",&a,&b);
	
	for(; a<=b ;a++)
	{
		flag = a;
		printf("%d=",a);
		if(a < 4) printf("%d\n",a);
		else 
		{
			while((count = func(flag)) != 0)
			{
				printf("%d*",count);
				flag = flag/count;
			}
			printf("%d\n",flag);
		}
	}
	return 0;
}
