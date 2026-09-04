#include <stdio.h>
#include <Windows.h>
#include <math.h>

void main()
{
	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	// Hello World 1.1.0

	printf("Hello World!");

	// Информация об ученике 1.1.1

	printf("\n");
	printf("Kandrashov\n");
	printf("Egor\n");
	printf("Evgenevich\n");
	printf("\n");
	printf("Group: ПИбд-13\n");
	printf("Предмет: Основы програмирования\n");
	printf("Лабараторная работа №1\n");

	//	Рисунок 1.1.4

	printf("              Kit   \n");
	printf("   _^___^_          \n");
	printf("  =|o - o|=         \n");
	printf("   |-----| _        \n");
	printf("   | w w |//        \n");
	printf("   -------/         \n");
	printf("     w w            \n");

	// Вычисление гипотенузы в прямоугольном треугольнике 1.2.5

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	float a, b, c;
	printf("Введите число А:");
	scanf_s("%f", &a);
	printf("\n");
	printf("Введите число B:");
	scanf_s("%f", &b);

	c = sqrt(a*a + b*b);

	printf("\n");
	printf("Гипотенуза треугольника: %f \n", c);
	
	// Вычисление фокусного расстояния 1.2.6

	float F, d, f;
	printf("Вычисление фокусного расстояния линзы\n");
	printf("Введите число d:");
	scanf_s("%f", &d);
	printf("\n");
	printf("Введите число f:");
	scanf_s("%f", &f);

	F = ((d * f) / (d + f));

	printf("\n");
	printf("Фокусное расстояние: %f \n", F);

	// Цена погашения ипотеки 1.2.7

	float Tl, s, t, p;
	printf("Цена погашения ипотеки\n");
	printf("Введите ставку по кредиту:");
	scanf_s("%f", &p);
	printf("\n");
	printf("Введите цену квартиры:");
	scanf_s("%f", &s);
	printf("\n");
	printf("Введите время на которое берете ипотеку:");
	scanf_s("%f", &t);
	printf("\n");

	Tl = s+(s * p/100 * t * 0.55);

	printf("\n");
	printf("Цена погашения: %f", Tl);

}