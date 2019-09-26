//奇数乘方和  1810 2nd
#include<stdio.h>

int main()
{do {
	int start,stop,count0,count1;
	count1=0;
	
	printf("请输入正奇数起始数字\n\n"); 
	scanf("%d",&start);
	printf("请输入正奇数结束数字\n\n");
	scanf("%d",&stop);

	if (start%2==0)
		{
			printf("你在想peach，本程序生气了！\n\n\n"); 
		} 
	else
	{
		do{
			count0=start;
			count1=count0*count0+count1;
			count0=count0+2;
			start=count0;
		}while(count0<=stop);
			printf("count1=%d\n\n\n\n",count1);
	}

	
	} while(1);
	return 0;	
} 
