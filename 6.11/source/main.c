#include <stdio.h> 
#include <stdlib.h> 
#define SIZE 10

int main()
{
	int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
	int hold;
	int i;
	int c,d=1;
	int e = 0;
	printf("Data items in original order\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	


	for (d = 1; d < SIZE; ++d)
	{

		for (i = 0; i < SIZE - 1; ++i)
		{

			if (a[i + 1] < a[i])
			{
				hold = a[i];
				a[i] = a[i + 1];
				a[i + 1] = hold;
				e = e + 1;
			}
		}
		if (d*e != 0)
		printf("\n在%d回合，比較了%d次", d, e);
		e = 0;
	}


	printf("\n");
	printf("Data items in final order\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%4d", a[i]);
	}
	printf("\n");
	system("pause");
	return 0;
}