/*#include <stdio.h>
#include <windows.h>
#include <math.h>

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

void main() {
	// 3.1.1 Сделать меню для управления
	printf("main() start\n");

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int n;

	do {
		printf("\n");
		printf("\n");
		printf("Выберите нужную вам операцию:\n");
		printf("1: Вывести числа от 1 до 10\n");
		printf("2: Вывести числа от 10 до 1\n");
		printf("3: Вывести 5 первых нечетных чисел начиная с 1\n");
		printf("11: Вывести числа с 100 до 10 с шагом 10\n");
		printf("12: Вывести числа с 1000 до 100 с шагом 100\n");
		printf("13*: Вывести рост суммы на счете\n");
		printf("20: Вывести числа от 1000 до 0\n");
		printf("21*: Вывести факториал числа \n");
		printf("22*: Вывести числа фибоначи \n");
		printf("23**: Вывести множители числа \n");
		printf("24: IF GOTO \n");
		printf("25: IF GOTO (2) \n");
		printf("\n");
		printf("0: Выйти из программы\n");

		scanf_s("%d", &n);

		switch (n) {
		default:
			printf("Неверное число");
			break;

		case 1:
			print1_10();
			break;

		case 2:
			print10_1();
			break;

		case 3:
			print50dds();
			break;
// 3.1.2 числа с 100 до 10
		case 11:
			print100_10();
			break;
// 3.1.3 числа с 1000 до 100
		case 12:
			print1000_100();
			break;
// 3.1.4* рост суммы на счете
		case 13:
			RostSum();
			break;
// 3.1.5 числа с 1000 до 0
		case 20:
			z315();
			break;
// 3.1.6* факториал числа
		case 21:
			z316();
			break;
// 3.1.7* числа фибоначи
		case 22:
			z317();
			break;
// 3.1.8** Простые множители числа
		case 23:
			z318();
			break;
// 3.1.9 IF GOTO
		case 24:
			z319();
			break;
// 3.1.10 IF GOTO (2)
		case 25:
			z3110();
			break;
		}

	} while (n != 0);

	printf("\nmain() finish\n");


}*/
#include <stdio.h>
#include <windows.h>
#include <math.h>

void z321() {
	int N;
	int M;
	int i = 1;
	int j = 1;
	scanf_s("%d %d", &N, &M);
	while (i <= N) {
		while (j <= M) {
			printf("%d%d ", i, j);
			j = j + 1;
		}
		i = i + 1;
		j = 1;
		printf("\n");
	}
}

void z322(){
	int i = 1;
	int j = 1;
	int s;
	while (i <= 10) {
		while (j <= 10) {
			s = i * j;
			if (s > 9) {
				printf("%d ", s);
			}
			else {
				printf(" %d ", s);
			}
			
			j = j + 1;
		}
		j = 1;
		printf("\n");
		i = i + 1;
	}
}
void z323() {
	int i;
	int j;
	int h;
	scanf_s("%d", &i);
	printf("\n");
	j = i;
	h = i;
	while (j > 0) {
		while (h != i + 1) {
			printf("%d ", h);
			h = h + 1;
		}
		printf("\n");
		j = j - 1;
		h = j;
	}
}
void z324() {
	int i;
	int j = 0;
	int g = 1;
	int h;
	int f = 0;
	int w;
	scanf_s("%d", &i);
	h = i;
	while (j < i) {
		w = h;
		while (f != i) {
			if (g < h) {
				printf("  ");
				g = g + 1;
				f = f + 1;
			}
			else {
				printf(" %d", w);
				w = w + 1;
			
				f = f + 1;
			}
		}
		h = h - 1;
		g = 1;
		f = 0;
		j = j + 1;
		printf("\n");
	}
	h = 1;
	w = h + 1;
	f = 1;
	while (h < i) {
		printf(" ");
		while (w <= i){
			if (f < w && g == 1) {
				printf("  ");
				f = f + 1;
			}
			else {
				printf("%d ", w);
				w = w + 1;
				g = 0;
			}
		}
		printf("\n");
		f = 1;
		h = h + 1;
		w = h + 1;
		g = 1;
	}
}
void main() {
	// 3.2.0 Сделать меню для управления 
	printf("main() start\n");

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int n;

	do {
		printf("\n");
		printf("\n");
		printf("Выберите нужную вам операцию:\n");
		printf("1: Zad 321\n");
		printf("2: Zad 322\n");
		printf("3: Zad 323\n");
		printf("4: Zad 324*\n");


printf("\n");
		printf("0: Выйти из программы\n");

		scanf_s("%d", &n);

		switch (n) {
		default:
			printf("Неверное число");
			break;

		case 1:
			z321();
			break;
		case 2:
			z322();
			break;
		case 3:
			z323();
			break;
		case 4:
			z324();
			break;
		}

	} while (n != 0);

	printf("\nmain() finish\n");


}
