#include <stdio.h>

/*3. ���ڸ� �Է��Ѵ�. 
��� , 0, ���� �� �ϳ��� ����Ѵ�.
hint) ���׿����ڴ� ��ø�� �ȴ�. 
(��ȣ�� ���� ���� �̿��ؼ� �õ��غ���)*/

int main()
{
	int num;
	printf("���ڸ� �Է��ϼ���.\n");
	scanf_s("%d", &num);
	if (num == 0 ? printf("0") : (num > 0 ? printf("���") : printf("����")));
	return 0;
}
