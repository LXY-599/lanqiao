#include <stdio.h> 

int list[20][20];

int main()
{
	int i,j,num,flag;
	unsigned int buff[20] = {0};
	scanf("%d",&num);
	for(i=0; i <num ;i++)
		for(j=0; j <num ;j++)
			scanf("%d",&list[i][j]);
	for(i=0; i <num ;i++)
	{
		flag = 0;
		for(j=0; j <num ;j++)
			if(list[i][j])
			{
				flag++;
				buff[i] |= 1<<j;
			} 
		if(flag<=num/2) buff[i] = 0;
	}
	for(i=0; i <num ;i++)
	{
		flag = 0;
		if(!buff[i]) continue;
		for(j=0; j <num ;j++)
			if(list[i][j] && j != i)
				if(buff[i] ^ buff[j])
				{
					flag = 1;
					break;
			 	}
		if(!flag) break;
	}

	for(j=0; j <num ;j++)
		if(list[i][j])
			printf("%d ",j+1);

	return 0;
}
