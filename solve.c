#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,x1,x2;
	int casee;
	printf("�˳��������һ����ʽ�Ķ��κ������\n");
	do{
	printf("��ָ�����κ�����ʽ��������Ӧѡ����س�\n");
	printf("1\n ax^2+bx+c=0\n 2\n ax^2=+c=0\n");
	scanf("%d",&casee);
if (casee==1) 
	{
	printf("�����������ϵ��\n");
	scanf("%lf",&a);
		if(a=0.0)
			printf("ϵ���Ƿ�\n");
		else{
			printf("������һ����ϵ��\n");
			scanf("%lf",&b);
			printf("�����������ϵ��\n");
			scanf("%lf",&c);
				if((b*b-4*a*c)<=0.0)
				{
					printf("������ʵ����\n");}
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
		printf("�����޷����������\n");
}while(1);

return 0;
}
