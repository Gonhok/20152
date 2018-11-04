#include <stdio.h>
int factorial(int n);
int gcount;	//전역변수 선언

int main(void)
{
   int fact_num;
   gcount = 0;	//main() 에서 초기화
   
   fact_num = factorial(10);
   
   printf("10 factorial = %d\n", fact_num);
   
   printf("factorial() 호출 횟수 = %d\n", gcount);		//main() 에서 호출 횟수 출력
   
   return 0;
}

int factorial(int n)
{
   gcount++;	//factorial() 을 부를 때마다 전역변수 하나씩 증가
   if (n <= 1) return (1);
   else return (n * factorial(n-1));
}
