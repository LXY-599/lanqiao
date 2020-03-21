#include <stdio.h>
#define ABS(a)  (((a)>=0)?(a):-(a))
#define MAX(a,b)  (((a)>(b))?(a):(b))
#define MIN(a,b)  (((a)>(b))?(b):(a))

int main()
{
	int i,j,count=0;
	double area,m[2][4];
	double maxx1,maxy1,minx1,miny1;
	double maxx2,maxy2,minx2,miny2;
	for(i=0;i<2;i++)
		for(j=0;j<4;j++)
			scanf("%lf",&m[i][j]);
			
	maxx1 = MAX(m[0][0],m[0][2]);
	maxy1 = MAX(m[0][1],m[0][3]);
	minx1 = MIN(m[0][0],m[0][2]);
	miny1 = MIN(m[0][1],m[0][3]);
	maxx2 = MAX(m[1][0],m[1][2]);
	maxy2 = MAX(m[1][1],m[1][3]);
	minx2 = MIN(m[1][0],m[1][2]);
	miny2 = MIN(m[1][1],m[1][3]);
	
	if(maxx1<=minx2||minx1>=maxx2||maxy1<=miny2||miny1>=maxy2)
		area = 0;
	else area = ABS(MIN(maxx1,maxx2)-MAX(minx1,minx2))*ABS(MIN(maxy1,maxy2)-MAX(miny1,miny2));
	printf("%.2lf",area);
	return 0;
} 
