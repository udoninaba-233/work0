#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,x1,x2;
	int casee;
	printf("此程序可用于一般形式的二次函数求解\n");
	do{
	printf("请指明二次函数形式，输入相应选项并按回车\n");
	printf("1\n ax^2+bx+c=0\n 2\n ax^2=+c=0\n");
	scanf("%d",&casee);
if (casee==1) 
	{
	printf("请输入二次项系数\n");
	scanf("%lf",&a);
		if(a=0.0)
			printf("系数非法\n");
		else{
			printf("请输入一次项系数\n");
			scanf("%lf",&b);
			printf("请输入零次项系数\n");
			scanf("%lf",&c);
				if((b*b-4*a*c)<=0.0)
				{
					printf("函数无实数解\n");}
				else{
					x1=(-b+sqrt(b*b-4*a*c))/(2*a);
					x2=(-b-sqrt(b*b-4*a*c))/(2*a);
					printf("solve1:%f solve2:%f\n",x1,x2);
				}
	}
}
else
	if(casee==2)
		{
		x1=sqrt(-c/a);
		printf("solve:%f\n",x1);
		} 

	else
		printf("程序无法解决此问题\n");
}while(1);

return 0;
}
