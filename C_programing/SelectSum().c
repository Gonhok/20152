#include <stdio.h>

int SelectSum(int a[ ], int Size);

int main(void)
{
	int a[ ] = {20, 10, 5, 8, 28};
	printf("SelectSum(a) = %d\n", SelectSum(a, 5));
	return 0;
}

int SelectSum(int a[ ], int Size)
{
	int i, sum = 0;
	for(i=0; i<Size; i++)
	{
		if(a[i]>10) sum += a[i];
	}
	return sum;
}
