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
} // 함수 sum 정의

int main(void)
{
	int a, result;

	printf("양의 정수 한 개를 입력하시오. : ");
	scanf_s("%d", &a); // 정수 입력받기

	result = sum(a);

	printf("1부터 입력하신 정수까지의 정수를 모두 더하면 %d입니다.\n", result); // 결과 출력하기

	return 0;
}
