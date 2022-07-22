#include <stdio.h>

int g = 0;
static int s1 = 0;

void upNum(int a, int b)
{
	static int s2 = 0;
	a++;
	b++;
	s2++;
	g++;
	printf("%d %d %d %d\n", a, b, g, s2);
}

int main()
{
	int num = 10;
	if ( num > 0)
	{
		int n = 100;
		upNum(num, n);
		upNum(num, n);
		upNum(num, n);
		printf("n=%d, num=%d\n", n, num);
	}
	g++;
	printf("g=%d\n", g);
	return 0;
}