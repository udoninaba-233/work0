
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
 
int main()
{
    int num,i;
    srand(time(0)); //��ʱ�亯�����뵽���������������
    printf("A set of random numbers:\n");
    for(i = 0; i < 10; i++)
	{
        num = rand()%100;
        printf("%d ",num);
    }
    putchar('\n');
    return 0;
}
