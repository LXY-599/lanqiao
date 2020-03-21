#include <stdio.h>
void fun(double* a,double* b)
{
	double n;
	n = *a;
	*a = *b;
	*b = n;
}
void func(double* m)
{
	if(m[0]>m[2]&&m[1]>m[3])
	{
		fun(&m[0],&m[2]);
		fun(&m[1],&m[3]);
	}
	else if(m[0]>m[2]&&m[1]<m[3])
		fun(&m[0],&m[2]);
	else if(m[0]<m[2]&&m[1]>m[3])
		fun(&m[1],&m[3]);
}

int main()
{
	int i,count=0;
	double area,m1[4],m2[4];
	for(i=0;i<4;i++)
		scanf("%lf",&m1[i]);
	for(i=0;i<4;i++)
		scanf("%lf",&m2[i]);
	func(m1);func(m2);
	if(m1[2]>=m2[0]&&m1[2]<=m2[2]&&m1[3]>=m2[1]&&m1[3]<=m2[3])//1
		count += 1;
	if(m1[0]>=m2[0]&&m1[0]<=m2[2]&&m1[1]<=m2[1]&&m1[1]<=m2[3])//2
		count += 2;
	if(m1[0]>=m2[0]&&m1[0]<=m2[2]&&m1[1]>=m2[1]&&m1[1]<=m2[3])//3
		count += 4;
	if(m1[2]>=m2[0]&&m1[2]<=m2[2]&&m1[3]>=m2[1]&&m1[3]>=m2[3])//4
		count += 8;
		
	switch(count)
	{
		case 0:{
			if(m2[2]>=m1[0]&&m2[2]<=m1[2]&&m2[3]>=m1[1]&&m2[3]<=m1[3])
				area = (m2[2]-m2[0])*(m2[3]-m2[1]);
			else if(m2[3]>=m1[3]&&m2[1]<=m1[1]&&m1[0]<=m2[0]&&m1[2]>=m2[2]) 
				area = (m2[2]-m2[0])*(m1[3]-m1[1]);
			else
				area = 0;
			break;
		}
		case 1:area = (m1[2]-m2[0])*(m1[3]-m2[1]);break;
		case 2:area = (m2[2]-m1[0])*(m1[3]-m2[1]);break;
		case 3:area = (m1[2]-m1[0])*(m1[3]-m2[1]);break;
		case 4:area = (m2[2]-m1[0])*(m2[3]-m1[1]);break;
		case 6:area = (m2[2]-m1[0])*(m1[3]-m1[1]);break;
		case 8:area = (m1[2]-m2[0])*(m2[3]-m1[1]);break;
		case 9:area = (m1[2]-m2[0])*(m1[3]-m1[1]);break;
		case 12:area = (m1[2]-m1[0])*(m2[3]-m1[1]);break;
		case 15:area = (m1[2]-m1[0])*(m1[3]-m1[1]);break;
		default:break;
	}
	
	printf("%.2lf",area);
	return 0;
} 
