#include <stdio.h>

/*���� 2���� ���� �ٲ��ִ� �Լ� �����
int a = 3, int b = 5;
=> a�� 5�� ���� b�� 3 ���� �ϱ�*/

void swap(int* a, int* b)
{

	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() 
{
	int num1;
	int num2;
	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &num1);
	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &num2);
	printf("���� ���� a:%d, b:%d\n", num1, num2);
	swap(&num1, &num2);
	printf("\n");
	printf("\n");
	printf("\n");
	printf("�ٲ� ���� a:%d, b:%d\n", num1, num2);
	return 0;
}