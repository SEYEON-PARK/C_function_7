#include <stdio.h>

int sum(int A)
{
	int S = 0;

	while (A >= 1)
	{
		S += A;
		A--;
	}

	return S;
}

int main(void)
{
	int a, result;

	printf("���� ���� �� ���� �Է��Ͻÿ�. : ");
	scanf_s("%d", &a);

	result = sum(a);

	printf("1���� �Է��Ͻ� ���������� ������ ��� ���ϸ� %d�Դϴ�.\n", result);

	return 0;
}