#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
int main() {
	setlocale(LC_ALL, "Russian");

	 int A, B;
	printf("Введите два числа A и B: ");
	scanf("%d %d", &A, &B);

	if ((A % 2 == 0 && B % 2 != 0) ||
	(A % 2 != 0 && B % 2 == 0)) {
	printf("Налево\n");
	}
	else {
	printf("Направление не налево\n");
	}

	return 0;
}