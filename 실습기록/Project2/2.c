#include <stdio.h>
/*2. 1���� ���ؼ� 0 �̸��� ������ ���� 
�߸��� ���̶�� �޽��� ����ó�� �߰��Ѵ�.*/

int main()
{
	int age;
	printf("���̸� �Է��ϼ���.\n");
	scanf_s("%d", &age);
	if (age < 0)
		printf("�߸��Ǿ����ϴ�.\n");
	else if (age < 20 ? printf("����") : printf("����"));
	return 0;
}