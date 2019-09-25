#include<stdio.h>
int main()
{
int a;
printf("请输入一个整数并按下回车，你将得到它sign函数值\n"); 
scanf("%d",&a);
if (a>0){ 
	printf("sign（%d）=1",a);} 
else
	if (a<0)
		printf("sign(%d)=-1",a);
	else printf("sign(%d)=0",a);
		
return 0;
}
