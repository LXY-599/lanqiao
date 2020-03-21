#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int i,j,k,n,t,q;
//	char (*c)[100000] = new char [100][100000];
	char (*c)[150000] = (char(*)[150000])malloc(sizeof(char) * 100*150000); 
	scanf("%d",&n);//可输入n个，至多10个
	getchar();//将\n吸收到，以免对数据造成影响 
	for(i=0;i<n;i++)
	{
//		char *a = new char [100000];
//		char *b = new char [400000];
		char *a = (char*)malloc(sizeof(char) *100000); 
		char *b = (char*)malloc(sizeof(char) *400000); 
		k=4;//为后面补位做铺垫 
		gets(a);
		q=0;

		for(j=0;a[j]!='\0';j++,k+=4)
		{	
			switch(a[j])
			{
				case '0':strcpy(&b[k],"0000");break;
				case '1':strcpy(&b[k],"0001");break;
				case '2':strcpy(&b[k],"0010");break;
				case '3':strcpy(&b[k],"0011");break;
				case '4':strcpy(&b[k],"0100");break;
				case '5':strcpy(&b[k],"0101");break;
				case '6':strcpy(&b[k],"0110");break;
				case '7':strcpy(&b[k],"0111");break;
				case '8':strcpy(&b[k],"1000");break;
				case '9':strcpy(&b[k],"1001");break;
				case 'A':strcpy(&b[k],"1010");break;
				case 'B':strcpy(&b[k],"1011");break;
				case 'C':strcpy(&b[k],"1100");break;
				case 'D':strcpy(&b[k],"1101");break;
				case 'E':strcpy(&b[k],"1110");break;
				case 'F':strcpy(&b[k],"1111");break;
				default:break;
			} 
		}
//		printf("%s\n",&b[4]);
		if(j*4%3==1)
		{
			b[3]='0';
			b[2]='0';
			j=2;//补位，使二进数能被3整除 
		}
		else if(j*4%3==2) 
		{
			b[3]='0';
			j=3;
		}
		else j=4;
		for(;j<k;j+=3)
		{
			t=(b[j]-'0')*4+(b[j+1]-'0')*2+(b[j+2]-'0')*1;
			if(t==0&&(j==2||j==3||j==4));//第一位是0的话不用输出 
			else 
			{
				c[i][q]=t+'0';q++;
			}
		}
//		delete [] a;
//		delete [] b;
		free(a);
		a = NULL;
		free(b);
		b = NULL;
	}
	for(i=0;i<n;i++) 
	    puts(c[i]);

//	delete [] c;
	free(c);
	c = NULL;
	return 0;
} 
