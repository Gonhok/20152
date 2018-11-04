#include <stdio.h>
int factorial(int n);			//단, n은 0이상의 수로 제한
int power(int x, int y);		//단, y는 0이상의 수로 제한
int fib(int n);					//단, n은 양수로 제한

int main(void)
{
	int a, b;
	printf("%-6s = %5d\n", "5!",factorial(5));
	printf("%-6s = %5d\n", "2¹¹",  power(2, 11));
	printf("%-6s = %5d\n", "fib(5)",  fib(5));
	
	/* 입력값 제한
	
	//사용자로 부터 입력 받아 값 출력하기
	
	//팩토리얼 계산
	printf("\n\n");
	
	while(1)
	{
		printf("팩토리얼을 계산합니다:      !\b\b\b\b\b\b");
		scanf("%d", &a);
		if(a>=0) break;
		puts("팩토리얼 계산은 0이상의 수로 제한합니다. ");
	}
	printf("%d! = %d\n", a, factorial(a));
	
	
	//지수 계산
	printf("\n지수계산\n");
	
	while(1)
	{
		printf("밑: ");
		scanf("%d", &a);
		printf("지수: ");
		scanf("%d", &b);
		if(b>=0) break;
		puts("지수는 0이상의 수로 제한합니다. ");
	}
	printf("%d의 %d제곱은 %d입니다.\n", a, b, power(a, b));
	
	//피보나치 수열의 n번째 항
	printf("\n피보나치 수열의 n번째 항\n");
	
	while(1)
	{
		printf("   번째 항\r");
		scanf("%d", &a);
		if(a>0) break;
		puts("항은 양수로 입력하세요.");
	}
	printf("피보나치 수열의 %d번째 항은 %d입니다.\n", a, fib(a));
	
	*/
	
	return 0;
}


int factorial(int n)
{
	int i, factorial = 1;
	
	for(i=1; i<=n; i++)
	{
		factorial *= i;
	}
	
	return factorial;
}

int power(int x, int y)

{	
	if(y==0) return 1;
	else return x*power(x, y-1);
}

int fib(int n)
{
	if(n==0) return 0;
	else if(n==1) return 1;
	else if(n>1) return fib(n-1)+fib(n-2);
	else return -1;
}