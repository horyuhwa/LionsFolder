#include <stdio.h>
/*1. ���̸� �Է��Ѵ�.
�׸��� 20�� �̸��̸� ����, 
20�� �̻��̸� �����̶�� ����Ѵ�.*/

int main()
{
	int age;
	printf("���̸� �Է��ϼ���.\n");
	scanf_s("%d", &age);
	if (age < 20 ? printf("����") : printf("����"));
	return 0;
}