#include <stdio.h>

int comp(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else //else �����ص� �Ǵµ� �ǹ̴� �� �ٸ���.
     	return b;
}
//void Ÿ���� ������ ��� �ȴ�.
//�������� ��ų ���� return;
//���ô� �����ڷῡ.

int main()
{
	int a = 0;
	int b = 0;
	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &a);
	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &b);
	printf("%d",comp(a, b)); //��ȯ�� Ȯ�ι�?
}