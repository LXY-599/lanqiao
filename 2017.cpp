#include <stdio.h>
#include <math.h>

int n,a[900],b[900],c[900];

void func(int* a,int* b,int* c)
{
	int i,j,sum;
	for(i=0; i<n*n ;i++)
	{
		sum = 0;
		for(j=0; j<n ;j++)
		{
			sum += a[(i/n) * n + j] * b[i%n + j*n];
		}
		c[i] = sum;
//		printf("[%d]",c[i]);
	}
}

void print(int* p)
{
	int i;
	for(i=0; i<n*n ;i++)
		{
			printf("%d ",p[i]);
			if((i+1)%n==0) printf("\b\n");
		}
}
int main()
{
	int i,m;
	scanf("%d %d",&n,&m);
	for(i=0; i<n*n ;i++)
		scanf("%d",&a[i]);
		
	if(m==0)
	{
		for(i=0; i<n*n ;i++)
		{
			if(i == (i/n)*(n+1))
				printf("1 ");
			else printf("0 ");
			if((i+1)%n==0) printf("\b\n");
		}
	}
	if(m==1) print(a);
	if(m>1) 
	{
		func(a,a,c);
		for(i=3; i<=m ;i++)
		{
			if(i%2 == 0)
				func(a,b,c);
			else func(a,c,b);
		}
		if(m%2 == 0)
			print(c);
		else print(b);
	}
	return 0;
}
