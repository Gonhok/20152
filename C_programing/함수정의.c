#include <stdio.h>

//int Division(int a, int b);	//�� ����ϴ� �Լ��� ���
double Division(int a, int b);	//�Ҽ������� ����ϴ� �Լ��� ��� 
int Absolute(int a);
int Big(int a, int b);


int main(void)
{	
	int a = -10, b = 4;
	
	printf("%d/%d = %.2f\n", a, b, Division(a, b));
	printf("|%d| = %d\n", a, Absolute(a));
	printf("%d�� %d �� ū �� : %d\n", a, b, Big(a, b));
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
