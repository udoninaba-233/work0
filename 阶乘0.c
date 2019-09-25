//输出一个数字的阶乘及过程 
#include<stdio.h>
#include<math.h>

int main()
{
	int i,n,result;
	result=1;
	
do
{
printf("please input a number and press enter\n\n");
scanf("%d",&n);
if (n<=0)
	printf("invalid number");
else
	{
			for(i = 1; i <= n; i++)
			{
			result = result * i;
			printf ("%d\n\n",result);
			}
	}
}
while(1);

	return 0;
}
