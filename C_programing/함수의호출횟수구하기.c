#include <stdio.h>
int factorial(int n);
int gcount;	//�������� ����

int main(void)
{
   int fact_num;
   gcount = 0;	//main() ���� �ʱ�ȭ
   
   fact_num = factorial(10);
   
   printf("10 factorial = %d\n", fact_num);
   
   printf("factorial() ȣ�� Ƚ�� = %d\n", gcount);		//main() ���� ȣ�� Ƚ�� ���
   
   return 0;
}

int factorial(int n)
{
   gcount++;	//factorial() �� �θ� ������ �������� �ϳ��� ����
   if (n <= 1) return (1);
   else return (n * factorial(n-1));
}
