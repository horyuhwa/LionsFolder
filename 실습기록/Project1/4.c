#include <stdio.h>

int main()
{
	int a;
	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &a);
	switch (a % 3) 
	{
		case 0:
			printf("����\n");
			break;
		case 1:
			printf("����\n");
			break;
		case 2:
			printf("��\n");
			break;
		default:
			printf("�𸣰ڴ�.\n");
			break;
	}
	return 0;
}