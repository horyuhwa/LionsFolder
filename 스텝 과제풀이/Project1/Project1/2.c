#include <stdio.h>

/*2. Sec(��) ���� �Է¹޾Ƽ�
	�ð��� h�� m�ʶ�� �� ����ϵ�,
	3600�̻��� ���� ������
	���� �޽����� ����Ѵ�.
	�׸��� m ���� ��ȯ�Ѵ�.*/

int clock(int s)
{
	if (s >= 3600)
		printf("ERROR.");
	else
		printf("%d�� %d�� �Դϴ�.\n", s / 60, s % 60);
	return s % 60;
}

int main()
{
	int s;
	scanf_s("%d", &s);
	clock(s);
	return 0;
}