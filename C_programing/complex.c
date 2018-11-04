#include <stdio.h>
#include <math.h>

typedef struct
{
	double real;
	double imag;
} complex;

void display(complex a)
{ printf("%.2f%+.2fi\n",a.real,a.imag); }

// arithmetic operators
void add(complex *c, complex *a, complex *b);  // c = a+b
void sub(complex *c, complex a, complex b);  // c = a-b
void mul(complex *c, complex *a, complex *b);  // c = a*b

int main(void)
{
	complex a = {10.0,0}, b = {4.0,-2.0}, c;

	add(&c,&a,&b); display(c);
	sub(&c,&a,&b); display(c);
	mul(&c,&a,&b); display(c);

	return 0;
}
