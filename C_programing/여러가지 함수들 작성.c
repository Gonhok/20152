#include <stdio.h>
int factorial(int n);			//��, n�� 0�̻��� ���� ����
int power(int x, int y);		//��, y�� 0�̻��� ���� ����
int fib(int n);					//��, n�� ����� ����

int main(void)
{
	int a, b;
	printf("%-6s = %5d\n", "5!",factorial(5));
	printf("%-6s = %5d\n", "2����",  power(2, 11));
	printf("%-6s = %5d\n", "fib(5)",  fib(5));
	
	/* �Է°� ����
	
	//����ڷ� ���� �Է� �޾� �� ����ϱ�
	
	//���丮�� ���
	printf("\n\n");
	
	while(1)
	{
		printf("���丮���� ����մϴ�:      !\b\b\b\b\b\b");
		scanf("%d", &a);
		if(a>=0) break;
		puts("���丮�� ����� 0�̻��� ���� �����մϴ�. ");
	}
	printf("%d! = %d\n", a, factorial(a));
	
	
	//���� ���
	printf("\n�������\n");
	
	while(1)
	{
		printf("��: ");
		scanf("%d", &a);
		printf("����: ");
		scanf("%d", &b);
		if(b>=0) break;
		puts("������ 0�̻��� ���� �����մϴ�. ");
	}
	printf("%d�� %d������ %d�Դϴ�.\n", a, b, power(a, b));
	
	//�Ǻ���ġ ������ n��° ��
	printf("\n�Ǻ���ġ ������ n��° ��\n");
	
	while(1)
	{
		printf("   ��° ��\r");
		scanf("%d", &a);
		if(a>0) break;
		puts("���� ����� �Է��ϼ���.");
	}
	printf("�Ǻ���ġ ������ %d��° ���� %d�Դϴ�.\n", a, fib(a));
	
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