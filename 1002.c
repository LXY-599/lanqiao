#include<stdio.h>
#include<math.h> 

int main()
{
    int r;
    scanf("%d",&r);
    if(r>0 && r<10001)
    	printf("%0.7lf",M_PI * r * r);
    return 0;
}
