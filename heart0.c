// 心形解析式x^2 = 1 - (y - x^(2/3))^2;
#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h> 
 
int main()
{
//关闭按钮无效化 
	HWND hwnd = GetConsoleWindow();
    LONG Style;                              //窗口风格
    Style = GetWindowLong(hwnd, GWL_STYLE);  // 得到窗口风格   
    Style = Style & ~WS_CAPTION;             //去掉标题栏
    SetWindowLong(hwnd, GWL_STYLE, Style);   //为窗口设置新的风格
   
    printf("到这一步就只能继续下去了\n要么只能放着我不管www\n按下任意键来看看下面有什么\n\n\n");
    getch();
    
    
 //心形绘图部分   
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
				}//函数内部填充符号 
            else
                printf(" ");//每行进行留白 
        }
        printf("\n\n");//手动修改行间距 
    }
    return 0;
}
