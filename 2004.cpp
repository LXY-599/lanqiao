#include<stdio.h>
int main()
{
	int num,i,min,max,innum;
	long long sum = 0;
	scanf("%d",&num);
	scanf("%d",&innum);
	sum=min=max=innum;
	for(i=1; i<num; i++)
	{
		scanf("%d",&innum);
		sum += innum;
		if(innum>max) max = innum;
		if(innum<min) min = innum;
	}
	printf("%d\n%d\n%d",max,min,sum);
	return 0;
}
