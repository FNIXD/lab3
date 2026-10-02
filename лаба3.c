#define _CRT_SECURE_NO_DEPRECATE
#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#define D 2.54
#define M 2.32



int main()
{
	setlocale(LC_CTYPE, "RUS");
	

	demon();
	android();
	dima();
	
	return 14;
}


int demon()
{
	int num, num2;
	puts("Введите первое число:");
	scanf_s("%d", &num);
	printf("Введено число %d\n", num);
	puts("Введите второе число:");
	scanf_s("%d", &num2);
	printf("Введено число %d\n", num2);
	printf("Сумма= %d Разность =%d Умножение =%d Делние= %d Остаток= %d\n\n\n", num + num2, num - num2, num * num2, num / num2, num2 % num);

	return 88;
}
int android()
{

	int dym;
	float result;

	puts("Ведите число для расчета:");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d дюймов = %.10f сантиметров\n", dym, result);
	printf("%d испанских дюймов = %.10f сантиметров\n", dym, M * dym);
	

	return 110;
}

int dima()
{
	int a, b;

	puts("Введите первое число");
	scanf("%d", &a);
	puts("Введите  второе число");
	scanf("%d", &b);
	
	printf("-------------------------------------------------\n|%10s	|%10s	|%10s	|\n", "a+b", "a+b", "a-b");
	printf("-------------------------------------------------\n|% 5d * % -7d|% 5d + % -7d|% 5d - % -7d|\n", a, b, a, b, a, b);
	printf("-------------------------------------------------\n|%10d	|%10d	|%10d	|\n", a*b, a+b, a-b);

	return 911;
	
}
