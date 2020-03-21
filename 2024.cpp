#include <stdio.h>

int main()
{
	int v1,v2,t,s,l,flag = 0;
	int time = 0,tl = 0,rl = 0;
	scanf("%d %d %d %d %d",&v1,&v2,&t,&s,&l);
	while(tl<l&&rl<l)
	{
		
		if(flag == 0) rl += v1;
		else flag--;
		tl += v2;
		if(rl-tl >= t && flag == 0) flag = s;
		time++;
	}
	
	printf("%c\n%d",tl>rl?'T':tl==rl?'D':'R',time);
	return 0;
}

