#include <stdio.h>

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
	/*int i = 1;
	int sum = 0;

	for (; i < 100; i++)
	{
		sum += i;
		printf("%d%c", i, '+');
	}
	printf("%d=%d", 100, 1050);
	return 5050;*/



	/*6. a���� b���� ���ϴ� �Լ��� �����
		1x2x......xb = ��� ����ϰ� ��ȯ�� �ִ� �Լ� �����
		����
		1x2x3x4x5
		total = 120*/

	int a, b;
	printf("ù ��° ���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &a);
	printf("�� ��° ���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &b);
	int sum = multi(a, b);
	printf("Total=%d", sum);

}