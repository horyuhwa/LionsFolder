#include <stdio.h>

int main()
{
	//�簢�� 5���� �Է¹޾ƶ�.
	//������ ���� ���� ���� ����
	//�迭�� ���ʴ�� ä���־��
	//�� �߿� ���� ū ���� ã�ƶ�
	//�� �迭�� ���� ���θ� ���.
	int rec[5];
	int a; //width
	int b; //height
	for (int i = 1; i <= 5; i++)
	{
		printf("�簢���� ���� ���θ� �Է��ϼ���.");
		scanf_s("%d %d", &a, &b);
		rec[i - 1] = a * b;
	}
	printf("%d %d %d %d %d\n",
		rec[0], rec[1], rec[2], rec[3], rec[4]);

	int MAX = rec[0];
	for (int i = 1; i < 5; i++)
	{
		if (rec[0] > rec[i])
		{
			printf("�ִ���� %d\n", rec[0]);
			printf("�ִ� ������ ���� ���ΰ� = %d %d\n"
				, rec[0] / b, rec[0] / a);
			break;
		}
	}
	return 0;
}