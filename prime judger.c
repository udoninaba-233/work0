//��һ����Χ�ڵ�����
#include<stdio.h>
#include<math.h>

int main()
{
	int start,stop,count;
	count=2;
	
	printf("�˳����������һ����Χ�ڵ����������Σ�\n\n\n"); 
	printf("��������ʼ���ֲ����»س�\n"); 
	scanf("%d",&start);
	printf("��������ֹ����\n");
	scanf("%d",&stop);
	printf("\n\n\n");
	
	do				//��һ�ж����������Ƿ��з�0���䱾������� 
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
	
	printf("����Ϊ�˷�Χ������������");
		
return 0;
 } 
