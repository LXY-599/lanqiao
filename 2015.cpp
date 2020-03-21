#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int i=0,len1=0,flag=2;
	char str1[10],str2[10];
	gets(str1);
	gets(str2);

	while(str2[i] != '\0') 
	{
		if(str1[i] == '\0')
		{
			flag = 1;
			break;
		}
		if(str1[i] != str2[i])
			if(abs(str1[i]-str2[i])=='a'-'A')
				flag = 3;
			else
				flag = 4;	
		i++;				
	} 
	if(str1[i] != '\0')
	{
		flag = 1;
	}
	printf("%d",flag);
	return 0;
} 
