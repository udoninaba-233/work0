//求一定范围内的素数
#include<stdio.h>
#include<math.h>

int main()
{
	int start,stop,count;
	count=2;
	
	printf("此程序可用于求一定范围内的素数（整形）\n\n\n"); 
	printf("请输入起始数字并按下回车\n"); 
	scanf("%d",&start);
	printf("请输入终止数字\n");
	scanf("%d",&stop);
	printf("\n\n\n");
	
	do				//逐一判断输入数字是否有非0与其本身的因数 
	{	if(start%count==0)
		{
			start++;
		}
		else
		{
			printf("%d\n",start);
			start++;	
		}
		
		if(start==stop)
		break;
	}
	while(1);
	
	printf("以上为此范围内所有素数。");
		
return 0;
 } 
