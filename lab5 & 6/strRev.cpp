#include<stdio.h>
#include<string.h>


int main()
{
	char s[10];
	char b[10];
	int y=0,x;
	printf("enter the source string:\n ");
	scanf ("%s",s);//ram
	x =strlen(s)-1;//3-1
	printf("string index:%d",x);//2
	while(x>=0)
	{
		b[y]=s[x];
		x--;
		y++;
		
	}
	b[y]='\0';
	printf("New Reverse String:%s",b);
	return 0;
}

