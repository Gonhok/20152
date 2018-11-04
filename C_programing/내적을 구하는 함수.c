#include <stdio.h>

double InnerProduct(double a[ ], int dim_a, double b[ ], int size_b);

int main(void)
{
	double a[ ] = {-1.0, 0.56, 1.7};
	double b[ ] = {0.9, -0.7, 5.6};
	printf("Inner Product = %f\n", InnerProduct(a, 3, b, 3));
	return 0;
}

double InnerProduct(double a[ ], int size_a, double b[ ], int size_b)
{
	// fill here
	double ip = 0;
	int i;
	
	if(size_a!=size_b) puts("내적 계산 불가");
	else
	{
		for(i=0; i<size_a; i++)
		{
			ip += a[i]*b[i];
		}
	}
	
	return ip;
}
