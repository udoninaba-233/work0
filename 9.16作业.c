#include <stdio.h>
int main()
{
	int a,b;
printf("请输入一个整数并按下回车，你将得到它的绝对值\n"); 
scanf("%d",&a);
	if (a>0)
{	b=a;
	printf("|%d|=%d",b,a);}
	else
{
	b=-a;
	printf("|%d|=%d",a,b);}
return 0;

 } 
