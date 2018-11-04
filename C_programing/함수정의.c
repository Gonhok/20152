#include <stdio.h>

//int Division(int a, int b);	//몫만 계산하는 함수일 경우
double Division(int a, int b);	//소숫점까지 계산하는 함수일 경우 
int Absolute(int a);
int Big(int a, int b);


int main(void)
{	
	int a = -10, b = 4;
	
	printf("%d/%d = %.2f\n", a, b, Division(a, b));
	printf("|%d| = %d\n", a, Absolute(a));
	printf("%d과 %d 중 큰 값 : %d\n", a, b, Big(a, b));
	return 0;
}
/*
int Division(int a, int b)
{
	return a/b;		
}
*/

double Division(int a, int b)
{
	return (double)a/b;
} 

int Absolute(int a)
{
	if(a<0) return -a;
	else return a;
}

int Big(int a, int b)
{
	if(a>=b) return a;
	else return b;
}
