#include <stdio.h>

/*6. a���� b���� ���ϴ� �Լ��� �����
		1x2x......xb = ��� ����ϰ� ��ȯ�� �ִ� �Լ� �����
		����
		1x2x3x4x5
		total = 120*/

int multi(int a, int b)
{
	int sum = 1;
	for (; a <= b; a++)
	{
		if (a < b)
		{
			sum *= a;
			printf("%dx", a);
		}
		else
			printf("%d.", b);
	}
return sum;
}


int main()
{
	int a, b;
	printf("ù ��° ���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &a);
	printf("�� ��° ���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &b);
	int sum = multi(a, b);
	printf("Total=%d", sum);
	return 0;
}