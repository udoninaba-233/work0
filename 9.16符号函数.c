#include<stdio.h>
int main()
{
int a;
printf("������һ�����������»س����㽫�õ���sign����ֵ\n"); 
scanf("%d",&a);
if (a>0){ 
	printf("sign��%d��=1",a);} 
else
	if (a<0)
		printf("sign(%d)=-1",a);
	else printf("sign(%d)=0",a);
		
return 0;
}
