#include <stdio.h>

char numchar[10][5] = {"ling","yi","er","san","si",
						"wu","liu","qi","ba","jiu"};
char unit[5][5] = {"shi","bai","qian","wan","yi"};
char innum[10];
char* out[25];
int flag = 0;
void fun(int num,int lingflag)
{
	if(num/1000)
	{
		out[flag] = numchar[num/1000];
		out[flag+1] = unit[2];
		flag += 2;
	}else if(lingflag)
	{
		out[flag] = numchar[0];
		flag++;
	}
	if((num%1000)/100)
	{
		out[flag] = numchar[(num%1000)/100];
		out[flag+1] = unit[1];
		flag += 2;
	}else if(num/1000)
	{
		out[flag] = numchar[0];
		flag++;
	}
	if((num%100)/10)
	{
		
		out[flag] = numchar[(num%100)/10];
		if(!lingflag && (num%100)/10 == 1)
			flag--;
		out[flag+1] = unit[0];
		flag += 2;
	}else if((num%1000)/100)
	{
		out[flag] = numchar[0];
		flag++;
	}
	if(num%10)
	{
		out[flag] = numchar[num%10];
		flag++;
	}	
	if(out[flag-1] == numchar[0]) flag--;
}
int main()
{
	int i,num,reg;
	scanf("%d",&num);

	if((reg = num/100000000) != 0)
	{
		fun(reg,0);
		out[flag] = unit[4];
		flag++;
	}
	if((reg = (num%100000000)/10000) != 0)
	{
		fun(reg,num/100000000);
		out[flag] = unit[3];
		flag++;
	}
	fun(num%10000,num/10000);
	for(i=0; i<flag; i++)
		printf("%s ",out[i]);
	return 0;
}
