#include <stdio.h>

//1. ���� a�� b�� c�� ���� �Է¹ް�, 
// a���� b������ ���� ���ϵ�, 
// c�� ��� �κ��� �����ϰ� ���� ���� ��.
//�� ���� main�� ��ȯ�ϴ� �Լ� �ۼ��ϱ�
//(���ϰڴٸ� �׳� main�� ���� ¥����)

int sum_a_to_b(int a, int b, int c)
{
	int sum = 0;
	for (; a <= b; a++)
	{
		if (a % c != 0)
			sum += a;
	}
	printf("%d", sum);
}

int main()
{
	int a1, b1, c1;
	printf("a,b,c ���� �Է��ϼ���.");
	scanf_s("%d %d %d", &a1, &b1, &c1);
	sum_a_to_b(a1, b1, c1);
	return 0;
}