// 文件数据的输入和读取方法，以及结构类型的赋值方法

/* #include <iostream>
#include <stdlib.h>
using namespace std;
struct item
{
    char name[20];
    int number;
}i = {"abc", 123}, j = {"nbm", 133}; // 初始化

int main()
{
    cout << i.name << "," << i.number << endl;
    cout << j.name << "," << j.number << endl;
    system("pause");
    return 0;
} */




/* #include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
struct item
{
    char name[20];
    int number;
};

int main()
{
    struct item i[2];  // 声明后再初始化
    strcpy(i[1].name, "abc");
    i[1].number = 12;
    cout << i[1].name << " " << i[1].number << endl;
    system("pause");
    return 0;
} */




/* // 将数据录入至文件
#include <iostream>
#include <stdlib.h>
#include <fstream>
using namespace std;
struct student
{
    char name[30];
    char sex;
    int age;
    long num;
}st[2];
int main()
{
    int i;
    
    // 结构类型可循环赋值
    for(i = 0; i < 2; i++)
    {
        cin >> st[i].name >> st[i].sex 
            >> st[i].age >> st[i].num;
    }
    // 循环输出
    for(i = 0; i < 2; i++)
    {
        cout << st[i].name << " " << st[i].sex << " " 
             << st[i].age << " " << st[i].num << endl;
    }

    // 循环输入至指定的.txt文件中，若直接输入结构类型st会以编码形式输入文件
    ofstream ofile("student.txt");
    for(i = 0; i < 2; i++)
    {
    ofile << st[i].name << " " << st[i].sex << " " 
          << st[i].age << " " << st[i].num << endl;
    }
    ofile.close();

    system("pause");
    return 0;
} */




/* // 从文件读取数据并输出
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include<cstring>
using namespace std;
    struct a
    {
        char name[20];
        char sex[10];
        int age;
        long int number;
    }a[2]; //可在此处赋值（初始化）
int main()
{
    // a[1] = {"bcd", 'n', 12, 23} --> 错误用法
    strcpy(a[1].name,"bcd"); // 正确赋值方法，尤其对于char类型
    
    // 或进行单个字符的赋值
    a[1].name[0] = 'b'; a[1].name[1] = 'c'; a[1].name[2] = 'd';
    a[1].sex[0] = 'n';

    // 貌似数字可直接用下面方式赋值
    a[1].age = 12;
    a[1].number = 23;

    // 从文件读取的方法
    ifstream ifile("student.txt");
    ifile >> a[0].name >> a[0].sex >> a[0].age >> a[0].number;
    cout << a[0].name << " " << a[0].sex << " " 
         << a[0].age << " " << a[0].number << endl;
    ifile.close();

    cout << a[1].name << " " << a[1].sex << " " 
         << a[1].age << " " << a[1].number << endl;
    system("pause");
    return 0;
}
 */