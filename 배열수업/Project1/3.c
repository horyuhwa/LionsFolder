#include <stdio.h>
#define MAX 1024 //��ũ�λ��
//���ú��� �� ���� ó����. �̰ɷδ� �迭ũ����� ����.

int main()
{
	int numbers[5]; //���Ƿ� �迭ũ�� ����.
	int mynumbers[MAX];
	//int num = 5;
	//int numbers2[num]; //������ �迭 ũ�� ������ ���Ѵ�. >> �޸� ������ �ٸ�
	//�������� �迭�� ���� ������ ������ (���ÿ���) num���� �Ҵ��ϴ� �� �Ұ���.
	//���� ���� �޸� ������ �ö� ���� �� ���� ����. �׷��� �Ҵ��ϴ� �� �Ұ�.

	int size = sizeof(numbers) / sizeof(int);

	for (int i = 0; i < size; i++) //���� �� ������ Ȯ���ϴ� ����. Ȥ�� ����׸��� Ȯ�ΰ���.
	{
		printf("%d��° ���� �Է�", i);
		scanf_s("%d", &numbers[i]);
	}
	//���� ù��° ���ڸ� ���� ũ�ٰ� ������.
	int max = numbers[0];
	int max_index = 0;
	for (int i = 0; i < size; i++)
	{
		if (max < numbers[i])
		{
			max = numbers[i];
			max_index = i; //����
		}
	}
	printf("�ִ��� [%d]�� �ֽ��ϴ�.\n", max_index + 1); // ������ 1�� �����ϰ� �ϴ� ��.
	return 0;
}