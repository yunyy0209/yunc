#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void)
{
	int num1;
	int i;
	int j;
	printf("정수를 입력하세요:");
	scanf("%d", &num1);
	printf("%d\n", num1);
	for (i = 1;i <= num1;i++) {
		for (j = 2;j < i;j++) {
			if (i % j == 0)
				break;
		}
		if (j == i)
			printf("%3d", j);
	}
	return 0;
}