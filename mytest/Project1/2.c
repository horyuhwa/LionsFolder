#include <stdio.h>

/*2. ������ n���� ����غ�����.
�Է� : 3
3x1=3
3x2=6
...
3x9=27*/

int main()
{
	int n;
	printf("���ϴ� ���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &n);

	int i;
	for (i = 1; i < 10; i++)
	{
		printf("%dx%d=%d\n",n, i, n * i);
	}
	return 0;
}