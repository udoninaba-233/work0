#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<conio.h>

void color(short x) //�Զ��庯���ݲ����ı���ɫ   
{  
    if(x>=0 && x<=9999)													//������0-99�ķ�Χ��ɫ  
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);    //ֻ��һ���������ı�������ɫ   
    else																//Ĭ�ϵ���ɫ��ɫ  
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);  
} 


int main()
{	
int i=0;
char time0;

do{
	if(i<9999)
	i++;
	else
	i=i-9998;
	
	color(i);
	time0=time(NULL);
	printf("%d\n",time0);
	Sleep(25);
}while(1);
	return 0;
}
