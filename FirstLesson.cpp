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
//     //setw() -->����ո񡪡���˳�򡪡�Ĭ��ʹ�ÿո� 
//     //              -->��֮ǰʹ��setfill��ʹ�������ַ�
//     //setfill()-->����ַ������������е��ַ����
//     cout << "setfill �� setw ��ʹ��:" << endl
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

    //setprecision()-->���þ���
    float f = 17/7.0;
    cout << " setprecision ��ʹ�ã�" << endl;
    cout << setw(1) << " ���ԭʼֵ��" << f << endl;
    cout << " ����Ϊ0��ֵ��" << setprecision(0) << f << endl; //����Ϊ��ʱ���ԭֵ
    cout << " ����Ϊ1��ֵ��" << setprecision(1) << f << endl;
    cout << " ����Ϊ2��ֵ��" << setprecision(2) << f << endl;
    cout << " ����Ϊ3��ֵ��" << setprecision(3) << f << endl;
    cout << " ����Ϊ4��ֵ��" << setprecision(4) << f << endl;
    cout << " ����Ϊ5��ֵ��" << setprecision(5) << f << endl;
    system("Pause");
    return 0;
}