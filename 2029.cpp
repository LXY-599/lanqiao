#include <stdio.h>

char add1[100],add2[100],sum[101];

void fucsum(int max,char* maxadd,int min,char *minadd)
{
	int m;
	int flag = 0,l = max;
	while(min>=0)
	{
		m = maxadd[max] + minadd[min] + flag - 96;
//		printf("%d,%d,%d,%d\n",m,maxadd[max],minadd[min],flag);
		sum[max] = m%10;
		flag = m/10;
		max--;min--;
	}
	while(max>=0)
	{
		m = maxadd[max] + flag -48;
//		printf("%d,%d,%d,%d\n",m,maxadd[max],flag);
		sum[max] = m%10;
		flag = m/10;
		max--;
	}
	if(flag) printf("1");
	for(m=0 ;m<=l ;m++)
		printf("%d",sum[m]);
}

int main()
{
	int len1=0,len2=0,flag=0;
	gets(add1);
	gets(add2);
	
	while(add1[len1] != '\0') len1++;
	while(add2[len2] != '\0') len2++;
//	printf("%s [%d]\n",add1,len1);
//	printf("%s [%d]\n",add2,len2);
	len1 > len2? fucsum(len1-1,add1,len2-1,add2) : fucsum(len2-1,add2,len1-1,add1);
		
	return 0;
}
