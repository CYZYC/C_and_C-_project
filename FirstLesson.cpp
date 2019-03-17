/***************************
This is the first lesson for trial.
Date:2019/3/4
***************************/
# include <iostream>
# include <stdlib.h>
# include <iomanip>
using namespace std;
int main()
{
//     //setw() -->输出空格——按顺序——默认使用空格 
//     //              -->在之前使用setfill可使用其他字符
//     //setfill()-->填充字符——以括号中的字符填充
//     cout << "setfill 与 setw 的使用:" << endl
//          << setfill('*')
//          << setw(2) << '\n'
//          << setw(3) << '\n'
//          << setw(4) << '\n'
//          << setw(5) << '\n'
//          << setw(6) << '\n'
//          << setw(7) << '\n';
//     cout << setfill('*') << setw(8) << '\n' 
//          << '8' << endl 
//          << setw(8) << 'a' << endl;
//          system("Pause");

    //setprecision()-->设置精度
    float f = 17/7.0;
    cout << " setprecision 的使用：" << endl;
    cout << setw(1) << " 输出原始值：" << f << endl;
    cout << " 精度为0的值：" << setprecision(0) << f << endl; //精度为零时输出原值
    cout << " 精度为1的值：" << setprecision(1) << f << endl;
    cout << " 精度为2的值：" << setprecision(2) << f << endl;
    cout << " 精度为3的值：" << setprecision(3) << f << endl;
    cout << " 精度为4的值：" << setprecision(4) << f << endl;
    cout << " 精度为5的值：" << setprecision(5) << f << endl;
    system("Pause");
    return 0;
}