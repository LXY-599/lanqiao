#include<stdio.h>
int main()
{
	char zm[26];
	int len,num,i,j;
	scanf("%d%d",&num ,&len);
	if(len>0&&num>0&&len<27&&num<27)
	{
		for(i = 0; i < 26; i++)
			zm[i] = 'A' + i;
		for(i = 0; i < num; i++)
		{
			for(j = 0; j < i && j < len; j++)
				putchar(zm[i-j]);
			while(j < len)
				putchar(zm[j++ -i]);
			putchar('\n');
		}
	}
	return 0; 
} 
/*
int main()
{
	char zm[26];
	int len,num,i,j;
	scanf("%d%d",&num ,&len);
	if(len>0&&num>0&&len<27&&num<27)
	{
		for(i = 0; i < len; i++)
			zm[i] = 'A' + i;
		for(i = 0; i < num; i++)
		{
			for(j = 0; j < i%len; j++)
				putchar(zm[len-i%len+j]);
			while(j < len)
				putchar(zm[j++ -i%len]);
			putchar('\n');
		}
	}
	return 0; 
} 
*/ 
