#include <stdio.h>
#include <math.h>
#include <windows.h>
#define PI 3.1415
#define PK(r) (PI * r * r)
#define DO(r) (2 * PI * r)
#define PP(a, b) (a * b)
#define PT(a, b) (a * b / 2)
#define OK(a) (a * a * a)
#define OP(a, b, c) (a * b * c)
#define PPK(a) (6 * a * a)
#define PTr(a, b, h) ((a + b) / h)
#define GPT(a, b) (sqrt(a * a + b * b))
#define PPr(a, b) (2 * (a + b))
#define PR(d1, d2) ((d1 * d2) / 2)
#define OC(r, h) (PI * r * r * h)
#define PPS(r) (4 * PI * r * r)
#define OKo(r, h) ((1.0/3.0) * PI * r * r * h)
#define PrTr(a, b, c) (a + b + c)
#define DyMm(num) (num / 25.4)
#define DEKHI(rd) (rd * 180 / PI)

int Prime(int numb);

#define Z432(num1, num2) \
do { \
	printf("Введите начало отрезка:"); \
	scanf_s("%d", &num1); \
	printf("Введите конец отрезка:"); \
	scanf_s("%d", &num2); \
	while (num1 <= num2) { \
		if (Prime(num1)) { \
			printf("%d ", num1); \
		} \
		num1 = num1 + 1; \
	} \
} while(0)

void z42() {
	float w;
	float a = 1;
	float b = 2;
	float c = 3;
	float h = 4;
	float r = 5;

	w = PK(r);
	printf("1: %.2f\n", w);
	w = DO(r);
	printf("2: %.2f\n", w);
	w = PP(a, b);
	printf("3: %.2f\n", w);
	w = PT(a, b);
	printf("4: %.2f\n", w);
	w = OK(a);
	printf("5: %.2f\n", w);
	w = OP(a, b, c);
	printf("6: %.2f\n", w);
	w = PPK(a);
	printf("7: %.2f\n", w);
	w = PTr(a, b, h);
	printf("8: %.2f\n", w);
	w = GPT(a, b);
	printf("9: %.2f\n", w);
	w = PPr(a, b);
	printf("10: %.2f\n", w);
	w = PR(a, b);
	printf("11: %.2f\n", w);
	w = OC(r, h);
	printf("12: %.2f\n", w);
	w = PPS(r);
	printf("13: %.2f\n", w);
	w = OKo(r, h);
	printf("14: %.2f\n", w);
	w = PrTr(a, b, c);
	printf("15: %.2f\n", w);
	w = DyMm(228);
	printf("422: %f\n", w);
	w = DEKHI(3);
	printf("423: %f\n", w);
}
float Skidka(float numb) {
	numb = numb * 0.87;
	return numb;
}
//-----------------------------------
int Prime(int numb) {
	int i = 2;
	while (i < sqrt(numb) + 1) {
		if (numb % i == 0) {
			return 0;
		}
		else {
			i = i + 1;
		}
	}
	return 1;
}
//-----------------------------------
int SumDig(int number) {
	int i = 0;
	while (number > 0) {
		i = i + (number % 10);
		number = number / 10;
	}
	return i;
}
//-----------------------------------
int VYear(int number) {
	if (number % 400 == 0) {
		return 1;
	}
	if (number % 100 == 0) {
		return 0;
	}
	if (number % 4 == 0) {
		return 1;
	}
	return 0;
}
//-----------------------------------
void z411() {
	int num1, num2;
	printf("Введите начало отрезка:");
	scanf_s("%d", &num1);
	printf("Введите конец отрезка:");
	scanf_s("%d", &num2);

	while (num1 <= num2) {
		if (VYear(num1)) {
			printf("%d ", num1);
		}
		num1 = num1 + 1;
	}
}
//-----------------------------------
void z412() {
	int num1, num2;
	printf("Введите начало отрезка:");
	scanf_s("%d", &num1);
	printf("Введите конец отрезка:");
	scanf_s("%d", &num2);

	while (num1 <= num2) {
		if (Prime(num1)) {
			printf("%d ", num1);
		}
		num1 = num1 + 1;
	}
}
//-----------------------------------
void z413() {
	int num1, num2;
	printf("Введите первое число:");
	scanf_s("%d", &num1);
	printf("Введите второе число:");
	scanf_s("%d", &num2);

	while (num1 <= num2) {
		int i;
		i = SumDig(num1);
		printf("Сумма цифр (%d) = %d \n", num1, i);
		num1 = num1 + 1;
	}
}
//-----------------------------------
void z414() {
	int v;
	printf("\n\n Saisissez votre excès de vitesse (en km/h):");
	scanf_s("%d", &v);

	if (v >= 1 && v <= 10) {
		printf("Le montant de l'amende est de: 64 €");
	}
	if (v > 30) {
		printf("Suspension de permis (!)");
	}
	if (v >= 11 && v <= 30) {
		v = v - 10;
		v = v * 12;
		v = v + 64;
		printf("Le montant de l'amende est de: %d €", v);
	}
}
//-----------------------------------
void z415() {
	float num1, num2;
	num2 = 0;
	printf("Введите цену товара или 0 для завершения \n");
	do {
		scanf_s("%f", &num1);
		num2 = num2 + num1;
	} while (num1 != 0);
	num1 = num2;
	printf("Цена всех товаров без учета скидки в 13 процентов: %f \n", num1);
	num2 = Skidka(num2);
	printf("Цена всех товаров с учетом скидки в 13 процентов: %f \n", num2);
}
//-----------------------------------
void z416() {
	float num1, ndfl;
	scanf_s("%f", &num1);

	if (num1 <= 22000) {
		printf("НДФЛ: 0");
	}

	if (num1 > 22000 && num1 <= 32000) {
		ndfl = (num1 - 22000) * 0.2;
		printf("НДФЛ: %f", ndfl);
	}

	if (num1 > 32000 && num1 <= 42000) {
		ndfl = 2000 + (num1 - 32000) * 0.25;
		printf("НДФЛ: %f", ndfl);
	}

	if (num1 > 42000 && num1 <= 72000) {
		ndfl = 2500 + 2000 + (num1 - 42000) * 0.3;
		printf("НДФЛ: %f", ndfl);
	}

	if (num1 > 72000) {
		ndfl = 9000 + 2500 + 2000 + (num1 - 72000) * 0.35;
		printf("НДФЛ: %f", ndfl);
	}
}
void print1_10() {
	int a = 1;
	do {
		printf("%d", a);
		a = a + 1;
	} while (a <= 10);
}

void print10_1() {
	int a = 10;
	do {
		printf("%d", a);
		a = a - 1;
	} while (a >= 1);
}

void print50dds() {
	int a = 1;
	int i = 1;
	do {
		printf("%d", a);
		a = a + 2;
		i = i + 1;
	} while (i <= 5);
}

void print100_10() {
	int a = 100;
	while (a >= 10) {
		printf("%d", a);
		a = a - 10;
	}
}

void print1000_100() {
	int a = 1000;
	while (a >= 100) {
		printf("%d", a);
		a = a - 100;
	}
}

void RostSum() {
	float a = 10000;
	float c = 10;
	int i = 1;
	printf("%f процент. %f сумма\n", c, a);
	while (i <= 10) {
		printf("%d год. Сумма %f\n", i, a);
		a = a + a * (c / 100);
		i = i + 1;

	}

}

void z315() {
	int a = 1000;
	while (a >= 0) {
		printf("%d ", a);
		a = a - 10;
	}
}

void z316() {
	int N;
	int s = 1;
	int i = 1;
	scanf_s("%d", &N);
	while (i != N) {
		i = i + 1;
		s = s * i;
		printf("%d ", s);

	}

}

void z317() {
	int N;
	scanf_s("%d", &N);

	int i = 1;
	int a1 = 0;
	int a2 = 1;
	int s = 0;

	if (N == 1) {
		printf("%d ", a1);
	}
	if (N != 1) {
		printf("%d %d ", a1, a2);
	}

	while (i <= N - 2) {
		i = i + 1;
		s = a1 + a2;
		a1 = a2;
		a2 = s;
		printf("%d ", s);
	}

}

void z318() {
	int N;
	int i = 1;
	scanf_s("%d", &N);

	while (i <= N) {
		if (N % i == 0) {
			printf("%d ", i);
		}
		i = i + 1;
	}

}
void z319() {
	int N;
	int i = 1;
	scanf_s("%d", &N);

pon:
	if (i <= N) {
		if (N % i == 0) {
			printf("%d ", i);
		}
		i = i + 1;
		goto pon;
	}

}

void z3110() {
	int a = 1000;
a:
	if (a >= 100) {
		printf("%d ", a);
		a = a - 100;
		goto a;
	}
	printf("\n");
	int b = 100;
b:
	if (b >= 10) {
		printf("%d ", b);
		b = b - 10;
		goto b;
	}
}

int main() {

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int n;

	do {
		printf("\n");
		printf("\n");
		printf("Выберите нужную вам лабораторную работу:\n");
		printf("1: Лабораторная работа #1\n");
		printf("2: Лабораторная работа #2\n");
		printf("3: Лабораторная работа #3\n");
		printf("4: Лабораторная работа #4\n");
		printf("\n");
		printf("0: Выйти из программы\n");

		scanf_s("%d", &n);

		switch (n) {
		default:
			printf("Неверное число\n");
			break;

		case 0:
			printf("Выход из программы...\n");
			break;

		case 1: {
			int i;
			do {
				printf("\nЛабораторная работа #1. Введите номер задания:\n");
				scanf_s("%d", &i);
				switch (i) {
				default:
					printf("Неверное число\n");
					break;
				case 110:
					printf("Hello World!\n");
					break;
				case 111:
					printf("\nKandrashov\nEgor\nEvgenevich\n\n");
					printf("Group: ПИбд-13\n");
					printf("Предмет: Основы программирования\n");
					printf("Лабораторная работа №1\n");
					break;
				case 114:
					printf("              Kit   \n");
					printf("   _^___^_          \n");
					printf("  =|o - o|=         \n");
					printf("   |-----| _        \n");
					printf("   | w w |//        \n");
					printf("   -------/         \n");
					printf("     w w            \n");
					break;

				case 125: {
					float a, b, c;
					printf("Введите число А:");
					scanf_s("%f", &a);
					printf("Введите число B:");
					scanf_s("%f", &b);

					c = sqrt(a * a + b * b);

					printf("Гипотенуза треугольника: %f \n", c);
					break;
				}
				case 126: {
					float F, d, f;
					printf("Вычисление фокусного расстояния линзы\n");
					printf("Введите число d:");
					scanf_s("%f", &d);
					printf("Введите число f:");
					scanf_s("%f", &f);

					if (d + f != 0) {
						F = (d * f) / (d + f);
						printf("Фокусное расстояние: %f\n", F);
					}
					else {
						printf("Ошибка: деление на ноль!\n");
					}
					break;
				}
				case 127: {
					float Tl, s, t, p;
					printf("Цена погашения ипотеки\n");
					printf("Введите ставку по кредиту:");
					scanf_s("%f", &p);
					printf("Введите цену квартиры:");
					scanf_s("%f", &s);
					printf("Введите время на которое берете ипотеку:");
					scanf_s("%f", &t);

					Tl = s + (s * p / 100 * t * 0.55);

					printf("Цена погашения: %f\n", Tl);
					break;
				}
				}
			} while (i != 0);

			break;
		}

		case 2: {
			int i;
			do {
				printf("\nЛабораторная работа #2. Введите номер задания:\n");
				scanf_s("%d", &i);
				switch (i) {
				default:
					printf("Неверное число\n");
					break;
				case 211: {
					int a, b, max, min;
					printf("Введите два числа:\n");
					scanf_s("%d", &a);
					scanf_s("%d", &b);

					if (a > b) {
						max = a;
						min = b;
					}
					else {
						max = b;
						min = a;
					}
					printf("Max number: %d \n", max);
					printf("Min number: %d \n", min);
					break;
				}
				case 212: {
					int a1, a2, a3, maxf;
					printf("Введите три числа:\n");
					scanf_s("%d", &a1);
					scanf_s("%d", &a2);
					scanf_s("%d", &a3);

					if (a1 > a2) {
						maxf = a1;
					}
					else {
						maxf = a2;
					}

					if (a3 > maxf) {
						maxf = a3;
					}

					printf("Max number: %d \n", maxf);
					break;
				}
				case 213: {
					int t;

					scanf_s("%d", &t);

					if (t < 18) {
						printf("%d - holodno", t);
					}
					if (18 <= t && t < 22) {
						printf("%d - prohladno", t);
					}
					if (22 <= t && t < 26) {
						printf("%d - teplo", t);
					}
					if (26 <= t) {
						printf("%d - jarko", t);
					}
					break;
				}
				case 214: {
					int a, b, c, d, e, max;

					scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);

					max = a;
					if (b > max) {
						max = b;
					}
					if (c > max) {
						max = c;
					}
					if (d > max) {
						max = d;
					}
					if (e > max) {
						max = e;
					}
					printf("Max number: %d", max);
					break;
				}
				case 215: {
					int t;

					scanf_s("%d", &t);

					if (t < -25) {
						printf("%d - holodno", t);
					}
					if (-25 <= t && t < -15) {
						printf("%d - prohladno", t);
					}
					if (-15 <= t && t < -5) {
						printf("%d - teplo", t);
					}
					if (-5 <= t) {
						printf("%d - jarko", t);
					}
					break;
				}
				case 216: {
					int s;

					scanf_s("%d", &s);

					if (0 <= s && s < 100) {
						printf("%d - дешево", s);
					}
					if (100 <= s && s < 200) {
						printf("%d - нормально", s);
					}
					if (200 <= s && s < 300) {
						printf("%d - дорого", s);
					}
					if (300 <= s) {
						printf("%d - ужас дорого", s);
					}
					break;
				}
				case 217: {
					int s;

					printf("Введите время в секундах:");
					scanf_s("%d", &s);

					if (200 <= s) {
						printf("%d - очень медленно", s);
					}
					if (100 <= s && s < 200) {
						printf("%d - медленно", s);
					}
					if (50 <= s && s < 100) {
						printf("%d - нормально", s);
					}
					if (25 <= s && s < 50) {
						printf("%d - быстро", s);
					}
					if (5 <= s && s < 25) {
						printf("%d - очень быстро", s);
					}
					if (5 >= s) {
						printf("%d - мгновенно", s);
					}
					break;
				}
				case 221: {
					int i, N;
					scanf_s("%d", &N);
					i = 1;

					do {
						printf("%d\n", i);
						i = i + 1;
					} while (i - 1 != N);
					break;
				}
				case 222: {
					int j, N;

					j = 0;

					do {
						N = pow(2, j);
						printf("%d\n", N);
						j = j + 1;
					} while (j <= 5);
					break;
				}
				case 223: {
					float R, N, t, i;

					printf("Введите начальную сумму:");
					scanf_s("%f", &R);
					printf("\n");
					printf("Введите годовой процент:");
					scanf_s("%f", &N);
					printf("\n");
					printf("Введите время на которое ложите деньги:");
					scanf_s("%f", &t);
					printf("\n");

					N = N / 100;

					i = 1;

					do {
						R = R * N + R;
						i = i + 1;
						printf("%f - на %f год\n", R, i);
					} while (i <= t);
					break;
				}
				case 227: {
					int S, t;

					S = 0;
					t = 0;

					do {
						t = t + 1;
						S = S + 1000;
						printf("%d-й месяц. Накопленная сумма: %d рублей\n", t, S);
					} while (t <= 35);
					break;
				}
				}
			} while (i != 0);

			break; 
		}
		case 3: {
			int i;
			do {
				printf("\nЛабораторная работа #3. Введите номер задания:\n");
				scanf_s("%d", &i);
				switch (i) {
				default:
					printf("Неверное число\n");
					break;
				case 312:
					print100_10();
					break;
				case 313:
					print1000_100();
					break;
				case 314:
					RostSum();
					break;
				case 315:
					z315();
					break;
				case 316:
					z316();
					break;
				case 317:
					z317();
					break;
				case 318:
					z318();
					break;
				case 319:
					z319();
					break;
				case 3110:
					z3110();
					break;
				}
			} while (i != 0);

			break;
		}
		case 4: {
			int i;
			do {
				printf("\nЛабораторная работа #4. Введите номер задания:\n");
				scanf_s("%d", &i);
				switch (i) {
				default:
					printf("Неверное число\n");
					break;
				case 411:
					z411();
					break;
				case 412:
					z412();
					break;
				case 413:
					z413();
					break;
				case 414:
					z414();
					break;
				case 415:
					z415();
					break;
				case 416:
					z416();
					break;
				case 42:
					z42();
					break;
				case 432: {
					int a = 0;
					int b = 0;
					Z432(a, b);
					break;
				}
				}

			} while (i != 0);

			break;
		}
		}
	} while (n != 0);

	return 0;
}
