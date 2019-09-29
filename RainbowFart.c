#include<stdio.h>
#include<time.h>
#include<windows.h>
#include<conio.h>

void color(short x) //自定义函根据参数改变颜色   
{  
    if(x>=0 && x<=9999)													//参数在0-99的范围颜色  
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), x);    //只有一个参数，改变字体颜色   
    else																//默认的颜色白色  
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
