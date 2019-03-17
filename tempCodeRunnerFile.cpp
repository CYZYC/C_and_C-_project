/* #include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
	int A, B, sum = 0, i, j;
	cin >> A >> B;
	if (A >= -100 && A <= B && B <= 100) 
	{
		for(i = A, j = A; i <= B; i++)
		{
			sum += i;
			cout << setw(5) << A;
			A = A + 1;
			if(((i - j + 1) % 5) == 0) // j为初始值，此处不能为A，A值已改
			{
				cout << endl;
			}
			else if(i == B)
			{
				cout << endl;
			}
			else
			{
				continue;
			}
		}
		cout << "Sum = " << sum << endl;
	}
	system("pause");
	return 0;
} */



/* #include <iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
int main()
{
	int A, i, j, k, num, flag=0; 
	cin >> A;
	if(A <= 6 && A > 0)
	{
		for(i = A; i < A + 4; i++)
		{
			for(j = A;j < A + 4; j++)
			{
				if(i != j)
				{
					for(k = A;k < A + 4; k++)
					{
						if (k != i && k != j) 
						{
							num = i*100 + j*10 + k;
							cout << num;
							flag++;
							if(flag%6 != 0)
							cout << " ";
						}
					}
				}
			}
			cout << endl;
		}
	}
	system("pause");
	return 0;
} */


