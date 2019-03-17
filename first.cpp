#include<stdio.h>
#include<cmath>
#include<stdlib.h>
int main()
{
	int i, j, k;
	int num = 0;
	int s;
	int a, z;
	printf("\n");
	for(i=1; i<5; i++)
	for(j=1; j<5; j++)
	for(k=1; k<5; k++)
	{
		if(i!=j && i!=k && j!=k)
		{
			num = num + 1;
			s = i*100 + j*10 + k;
			printf("%d\n", s);
			a = num % 8;
			if(a==0)
			{
				printf("\n");
			}
		}
	}
	printf("\n一共有%d个数\n", num);
	system("pause");
	return 0;
 } 
