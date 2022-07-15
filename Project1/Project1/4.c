#include <stdio.h>
#include <windows.h>

/*4. 반환값은 없고 매개변수 char 2개에 의하여
	배경색과 화면색을 바꾸는 함수 구하시오.*/

void colorchange(char a, char b)
{
	printf("첫 번째 문자를 입력하시오.\n");
	rewind(stdin);
	a = getchar();
	rewind(stdin);
	printf("두 번째 문자를 입력하시오.\n");
	b = getchar();
	char cc[9] = "color ";
	cc[6] = a;
	cc[7] = b;
	cc[8] = NULL;
	system(cc);
}

int main()
{
	char a = 0, b = 0;
	colorchange(a, b);
	return 0;
}