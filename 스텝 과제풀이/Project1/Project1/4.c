#include <stdio.h>
#include <windows.h>

/*4. ��ȯ���� ���� �Ű����� char 2���� ���Ͽ�
	������ ȭ����� �ٲٴ� �Լ� ���Ͻÿ�.*/

void colorchange(char a, char b)
{
	printf("ù ��° ���ڸ� �Է��Ͻÿ�.\n");
	rewind(stdin);
	a = getchar();
	rewind(stdin);
	printf("�� ��° ���ڸ� �Է��Ͻÿ�.\n");
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