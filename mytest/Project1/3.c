#include <stdio.h>
//3. �������� 2�ܺ��� 9�ܱ��� ����غ�����.

int main()
{
	int t;
	int i;
	for (t = 2; t < 10; t++)
	{
		for (i = 1; i < 10; i++)
		{
			printf("%dx%d=%d\n", t, i, t * i);
		}
	}
	return 0;
}