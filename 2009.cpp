#include<stdio.h>
#include<string.h>

int main()
{
	int i,j,k,n,nout = 0;
	char num5[5],num6[6],out[1000][7];
	
	scanf("%d",&n);
	if(n>0&&n<55)
		for(i='1' ; i<'0'+10; i++)
		{
			num6[0] = num6[5] = i;
			num5[0] = num5[4] = i;
			for(j='0' ; j<'0'+10; j++)
			{
				num6[1] = num6[4] = j;
				num5[1] = num5[3] = j;
				for(k='0' ; k<'0'+10; k++)
				{	
					num6[2] = num6[3] = k;
					num5[2] = k;
					if((int)(num5[0]+num5[1]+num5[2]+num5[3]+num5[4]) == n+240)
						printf("%s\n",num5);
					if((int)(num6[0]+num6[1]+num6[2]+num6[3]+num6[4]+num6[5]) == n+288)
						memcpy(out[nout++],num6,12);
				}
			}
		}
		for(i=0; i<nout; i++)
			printf("%s\n",&out[i]);

	return 0;
}
