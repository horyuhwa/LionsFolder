#include <stdio.h>
/*1. ������ 2���� ����غ�����.
2x1=2
2x2=4
...
2x9=18
*/

int main()
{
	int i;
	for (i = 1; i < 10; i++)
	{
		printf("2x%d=%d\n", i, 2 * i);
	}
	return 0;
}