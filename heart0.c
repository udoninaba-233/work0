// ���ν���ʽx^2 = 1 - (y - x^(2/3))^2;
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h> 
 
int main()
{
//�رհ�ť��Ч�� 
	HWND hwnd = GetConsoleWindow();
    LONG Style;                              //���ڷ��
    Style = GetWindowLong(hwnd, GWL_STYLE);  // �õ����ڷ��   
    Style = Style & ~WS_CAPTION;             //ȥ��������
    SetWindowLong(hwnd, GWL_STYLE, Style);   //Ϊ���������µķ��
   
    printf("����һ����ֻ�ܼ�����ȥ��\nҪôֻ�ܷ����Ҳ���www\n���������������������ʲô\n\n\n");
    getch();
    
    
 //���λ�ͼ����   
	double x, y;
    double e = 1/3.0, step = 0.025;
    for (y= 1.6; y > -1; y -= step * 6)
    {
        for (x= -1; x <= 1; x += step)
        {
            if (1 - pow(y-pow(pow(x, 2), e), 2) > x*x)
                {
				printf("o");
				Sleep(50);
				}//�����ڲ������� 
            else
                printf(" ");//ÿ�н������� 
        }
        printf("\n\n");//�ֶ��޸��м�� 
    }
    return 0;
}
