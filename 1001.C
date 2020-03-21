#include<stdio.h>

int main()
{
    int num;
    int F_num = 1,F_fnum1 = 1,F_fnum2 = 1;
    scanf("%d",&num);
    while (num-- > 2)
    {
        F_fnum1 = F_fnum2;
        F_fnum2 = F_num;
        F_num = (F_fnum1 + F_fnum2)%10007;
    }
    printf("%d",F_num);
    return 0;
}
