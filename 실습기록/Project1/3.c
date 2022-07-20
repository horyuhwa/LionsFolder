#include <stdio.h>

int main()
{
	char a;
	double b;
	printf("학점을 입력하세요.");
	scanf_s("%lf", &b);
	if (b < 0)
		a = '-';
		//printf("'-'");
	else if (b < 2.0)
		a = 'C';
		//printf("'C'");
	else if (b < 4.0)
		a = 'B';
		//printf("'B'");
	else if (b < 4.5)
		a = 'A';
		//printf("'A'");
	else if (b == 4.5)
		a = 'S';
		//printf("'S'");

	printf("%c", a);
	return 0;
}