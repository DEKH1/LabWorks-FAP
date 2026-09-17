#include <stdio.h>
#include <windows.h>
#include <math.h>
void main() {

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	/*
	// 2.1.1 Какое число больше?

	int a, b, max, min;

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
	
	// 2.1.2 Максимум из 3 чисел
	
	int a1, a2, a3, maxf;

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
	
	// 2.1.3 Тепло-холодно
	
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
	
	// 2.1.4* Максимум 5 чисел

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
	
	// 2.1.5 Тепло-холодно (Зима)

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
	
	// 2.1.6 Дорого-дешево (Шаурма)
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
	
	// 2.1.7* Разгон автомобиля до 100км/ч
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
	
	// 2.2.1 Ряд натуральных чисел

	int i, N;
	scanf_s("%d", &N);
	i = 1;

	do {
		printf("%d\n", i);
		i = i + 1;
	} while (i - 1 != N);
	
	// 2.2.2 Степени двойки
	
	int j, N;

	j = 0;

	do {
		N = pow(2, j);
		printf("%d\n", N);
		j = j + 1;
	} while (j <= 5);
	
	// 2.2.3* Деньги на счете (сложные проценты)
	
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
	*/
	
	// 2.2.7* Студент Вася откладывает деньги 

	int S, t;

	S = 0;
	t = 0;

	do {
		t = t + 1;
		S = S + 1000;
		printf("%d-й месяц. Накопленная сумма: %d рублей\n", t, S);
	} while (t <= 35);
	
	

}