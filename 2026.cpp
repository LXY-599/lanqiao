#include <stdio.h>
char num[25][10] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"
			,"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen"
			,"nineteen","twenty","thirty","forty","fifty"};
int main()
{
	int h,m;
	scanf("%d %d",&h,&m);

	if(h<21)
	{
		if(m==0) printf("%s o'clock",num[h]);
		else if(m<21) printf("%s %s",num[h],num[m]);
		else printf("%s %s %s",num[h],num[18+m/10],num[m%10]);
	}
	else
	{
		if(m==0) printf("%s %s o'clock",num[20],num[h%10]);
		else if(m<21) printf("%s %s %s",num[20],num[h%10],num[m]);
		else printf("%s %s %s %s",num[20],num[h%10],num[18+m/10],num[m%10]);
	}
	return 0;
}
