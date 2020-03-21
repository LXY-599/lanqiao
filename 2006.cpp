#include<stdio.h>
int main()
{
	int i,j,n,out[34][34];
	
	scanf("%d",&n);
	if(0<n && n<35)
		for(i=0 ; i<n; i++)
		{
			for(j=0; j<i+1; j++)
			{
				if(i-1<0 ||j-1<0 ||j==i)
					out[i][j] = 1;
				else
					out[i][j] = out[i-1][j] + out[i-1][j-1];
				printf("%d ",out[i][j]);
			}
			putchar('\n');
		}
	
	return 0;
}
