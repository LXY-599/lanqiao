#include<stdio.h>
int main()
{
	int i,n,num[1000],a,out = -1;
	scanf("%d",&n);
	for(i=0 ; i<n; i++)
	{
		scanf("%d",&num[i]);
	}

	scanf("%d",&a);
	for(i=0 ; i<n; i++)
	{
		if(num[i] == a)
		{
			out = i+1;
			break;
		}
	}
	printf("%d",out);
	return 0;
}
