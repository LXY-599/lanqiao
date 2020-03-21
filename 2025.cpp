#include <stdio.h>

int matrix[200][200];
int x_axis = 0, y_axis = 0;

int main()
{
	int i,j,m,n;
	scanf("%d %d",&m,&n);
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			scanf("%d",&matrix[i][j]);
	while(1)
	{
		for(i=x_axis/2; i<m-x_axis/2; i++)
		{
			printf("%d ",matrix[i][y_axis/2]);
		}y_axis++;
		if(x_axis/2>=m-x_axis/2) break;
		for(i=y_axis/2+1; i<n-y_axis/2; i++)
		{
			printf("%d ",matrix[m-1-x_axis/2][i]);
		}x_axis++;
		if(y_axis/2+1>=n-y_axis/2) break;
		for(i=m-2-x_axis/2; i>x_axis/2-1; i--)
		{
			printf("%d ",matrix[i][n-1-y_axis/2]);
		}y_axis++;
		if(m-2-x_axis/2 <= x_axis/2-1) break;
		for(i=n-1-y_axis/2; i>y_axis/2-1; i--)
		{
			printf("%d ",matrix[x_axis/2][i]);
		}x_axis++;
		if(n-1-y_axis/2 <= y_axis/2-1) break;
	}
	return 0;
} 
