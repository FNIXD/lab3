#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define D 2.54
#define M 2.32
#define S 7.46


int main()
{
	setlocale(LC_CTYPE, "RUS");

	task();
	main1();
	main2();

	return 0;
}


int task()
{
	int num, num2;
	puts("введите число:");
	scanf_s("%d", &num);
	printf("Введено число %d\n", num);
	scanf_s("%d", &num2);
	printf("введено число %d\n", num2);
	printf("%d %d %d %d %d\n\n\n", num + num2, num - num2, num * num2, num / num2, num2 % num);
}
int main1()
{
	
	int dym;
	float result;

	puts("Ведите число для расчета:");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d дюймов = %.10f сантиметров\n", dym, result);
	printf("%d испанских дюймов = %.10f сантиметров\n", dym, M * dym);
	printf("%d cтаролитовских дюймов = %.10f сантиметров\n\n\n", dym, S * dym);

	return 0;
}

int main2()
{
	float num1, num2, num3;

	puts("Введите первое число");
	scanf("%f", &num1);
	puts("Введите  второе число");
	scanf("%f", &num2);
	puts("Введите  третье число");
	scanf("%f", &num3);

	printf("________________________________________________\n |      a * b    |     a + b     |     a - b     | \n________________________________________________\n | %5.1f * %5.1f | %5.1f + %5.1f | %5.1f - %5.1f | \n------------------------------------------------ \n | %13.1f | %13.1f | %13.1f | ", num1, num2, num1, num2, num1, num2, num1 * num2 / num3, num1 + num2, num1 - num2);
	return 1;







}