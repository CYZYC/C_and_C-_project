#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <string.h>
using namespace std;
int main()
{
    srand((unsigned)time(NULL));
    // int food;
    string meal1, meal2, meal3;
    meal1 = "rice";
    meal2 = "noodles";
    meal3 = "dumplings";
    int food=rand()%3 + 1;
    while(food)
    {
        switch (food)
        {
            case 1:
                cout << meal1 << endl;
                break;
            case 2:
                cout << meal2 << endl;
                break;
            case 3:
                cout << meal3 << endl;
                break;
            default:
                cout << "I don't know." << endl;
                break;
        }
        break;
    }
    system("pause");
    return 0;
}
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    cout << "please input:";
    int F, C;
    cin >> F;
    C = (F - 32) * (5.0/9);
    cout << "output:" << C << endl;
    system("pause");
    return 0;
}
