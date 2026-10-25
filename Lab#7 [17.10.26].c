#include <stdio.h>
#include <Windows.h>
#include <ctype.h>

int mydigit(char i) {
	if (i <= '9' && i >= '0') {
		return 1;
	}
	return 0;
}

void z711() {
	printf("Введите символ: ");
	char i = getchar();

	for (int j = i; j <= i + 20; j++) {
		printf("%c (%d)\n", j, j);
	}
}

void z712() {
	printf("Введите символ: ");
	char i = getchar();

	for (int j = i; j >= i - 30; j--) {
		printf("%c (%d)\n", j, j);
	}
}

int z713() {
	printf("Введите строку: ");
	char i[80];
	int k = 0;
	fgets(i, sizeof(i), stdin);

	for (int j = 0; i[j] != '\0'; j++) {
		if (i[j] == ' ') {
			k = k + 1;
		}
	}
	printf("%d", k);
	return k;
}

void z714() {
	printf("Введите строку: ");
	char i[80];
	fgets(i, sizeof(i), stdin);

	for (int j = 0; i[j] != '\0'; j++) {
		if (i[j] == ' ') {
			i[j] = '#';
		}
	}
	printf("Строка: %s", i);
}

void z7151() {
	printf("Введите строку: ");
	char i[80];
	fgets(i, sizeof(i), stdin);

	for (int j = 0; i[j] != '\0'; j++) {
		if (isdigit((unsigned char)i[j])) {
			i[j] = '$';
		}
	}
	printf("Строка: %s", i);
}

void z7152() {
	printf("Введите строку: ");
	char i[80];
	fgets(i, sizeof(i), stdin);

	for (int j = 0; i[j] != '\0'; j++) {
		if (mydigit((unsigned char)i[j])) {
			i[j] = '$';
		}
	}
	printf("Строка: %s", i);
}

void z716() {
	printf("Введите строку: ");
	char i[80];
	fgets(i, sizeof(i), stdin);

	for (int j = 0; i[j] != '\0'; j++) {
		i[j] = toupper(i[j]);
	}
	printf("Строка: %s", i);
}

int z717() {
	printf("Введите строку: ");
	char i[80];
	fgets(i, sizeof(i), stdin);

	for (int j = 0; i[j] != '\0'; j++) {
		if (i[j] == '+' || i[j] == '-' || i[j] == '*' || i[j] == '/') {
			i[j] = '_';
		}
	}
	printf("Строка: %s", i);
}

int strlen_my1(char s[]) {
	int k = 0;
	for (int i = 0; s[i] != '\0'; i++) {
		k = k + 1;
	}
	return k - 1;
}

int strlen_my2(char s[]) {
	char* p = s;
	while (*p++);
	return p - s - 1;
}

int strcmp_my1(char s1[], char s2[]) {
	int i = 0;
	while (s1[i] == s2[i]) {
		if (s1[i] == '\0') {
			return 0;
		}
		i++;
	}
	if (s1[i] > s2[i]) {
		return 1;
	}
	else {
		return -1;
	}
}

int strcmp_my2(char s1[], char s2[]) {
	while (*s1 == *s2) {
		if (*s1 == '\0') {
			return 0;
		}
		s1++;
		s2++;
	}
	if (*s1 > *s2) {
		return 1;
	}
	else {
		return -1;
	}
}

void strpy_my(char s1[], char s2[], int max) {
	char k = 1;
	for (int i = 0; i != max; i++) {
		if (k) {
			s2[i] = s1[i];
		}
		if (s1[i] == '\0') {
			k = 0;
		}
		if (i + 1 == max) {
			s2[i] = '\0';
		}
	}
}

void strcat_my(char s1[], char s2[], int max) {
	int k = 0;
	for (int i = 0; i < max; i++) {
		if (k == 0) {
			if (s1[i] == '\n' || s1[i] == '\0') {
				k = 1;
			}
		}
		if (k) {
			s1[i] = s2[k - 1];
			k++;
			if (s1[i] == '\0') {
				s1[i + 1] = '\0';
				k = 0;
			}
		}
		if (i + 1 == max) {
			s1[i] = '\0';
			k = 0;
		}
	}
}

char* strchr_my1(char s1[], char k) {
	for (int i = 0; s1[i] != '\0'; i++) {
		if (s1[i] == k) {
			return &s1[i];
		}
	}
	return 0;
}

char* strchr_my2(char s1[], char k) {
	while (*s1 != '\0'){
		if (*s1 == k) {
			return s1;
		}
		s1++;
	}
	return 0;
}

void CreateNewString(char s[]) {
	int k = 0;
	for (int i = 1; s[i] != '\0'; i++) {
		if (k == 0) {
			if (isalpha(s[i - 1])) {
				k = 1;
			}
		}
		if (k) {
			s[k - 1] = s[i];
			k++;
		}
	}
	if (k != 0) {
		s[k - 1] = '\0';
	}
	if (k == 0) {
		for (int i = 0; s[i] != '\0'; i++) {
			s[i] = ' ';
		}
		s[0] = '@';
		s[1] = '\0';
	}
}

void CreateNewString2(char s[]) {
	int k = 0;
	int i = 0;
	char* s1 = s;
	for (s = s + 1; *s != '\0'; s++) {
		i++;

		if (k == 0) {
			if (isalpha(*(s - 1))) {
				k = 1;
			}
		}
		if (k) {
			*(s - i + (k - 1)) = *s;
			k++;
		}
	}
	if (k != 0) {
		*(s1 + k - 1) = '\0';
	}
	if (k == 0) {
		*s1 = '@';
		*(s1 + 1) = '\0';
	}
}

int main() {

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int n;

	do {
		printf("\n\n= = = = = = = = = = = = = = = = =\n");
		printf("Выберите нужную вам операцию:\n\n");

		printf("1: Символы от CH до CH+20 \n");
		printf("2: Символы от CH до CH-30 \n");
		printf("3: Подсчет пробелов в строке\n");
		printf("4: Замена пробелов на решетки\n");
		printf("5: Замена цифр на баксы (1)\n");
		printf("6: Замена цифр на баксы (2)\n");
		printf("7: Замена маленьких латинских букв на большие\n");
		printf("8: Замена арифметических операций на подчеркивание\n");

		printf("\n");

		printf("9: Длина строки (1)\n");
		printf("10: Длина строки (2)\n");
		printf("11: Сравнение двух строк (1)\n");
		printf("12: Сравнение двух строк (2)\n");
		printf("13: Копирование строк\n");
		printf("14: Строка 1 + Строка 2\n");
		printf("15: Поиск символа (1)\n");
		printf("16: Поиск символа (2)\n");
		printf("17: CreateNewString (1)\n");
		printf("18: CreateNewString (2)\n");


		printf("\n0: Выйти из программы\n");
		printf("= = = = = = = = = = = = = = = = =\n\n");

		scanf_s("%d", &n);
		getchar();

		switch (n) {

		default:
			printf("Неверное число");
			break;

		case 1:
			z711();
			break;

		case 2:
			z712();
			break;

		case 3:
			z713();
			break;

		case 4:
			z714();
			break;

		case 5:
			z7151();
			break;

		case 6:
			z7152();
			break;

		case 7:
			z716();
			break;

		case 8:
			z717();
			break;

		case 9: {
			printf("Введите строку: ");
			char i[80];
			fgets(i, sizeof(i), stdin);
			printf("Длина строки: %d", strlen_my1(i));
			break;
		}

		case 10: {
			printf("Введите строку: ");
			char i[80];
			fgets(i, sizeof(i), stdin);
			printf("Длина строки: %d", strlen_my2(i));
			break;
		}

		case 11: {

			printf("Введите строку 1: ");
			char i[80];
			fgets(i, sizeof(i), stdin);
			printf("Введите строку 2: ");
			char j[80];
			fgets(j, sizeof(j), stdin);

			if (strcmp_my1(i, j) == 0) {
				printf("Строки одинаковы!");
			}
			if (strcmp_my1(i, j) == 1) {
				printf("Первая строка больше второй!");
			}
			if (strcmp_my1(i, j) == -1) {
				printf("Вторая строка больше первой!");
			}
			break;
		}

		case 12: {

			printf("Введите строку 1: ");
			char i[80];
			fgets(i, sizeof(i), stdin);
			printf("Введите строку 2: ");
			char j[80];
			fgets(j, sizeof(j), stdin);

			if (strcmp_my2(i, j) == 0) {
				printf("Строки одинаковы!");
			}
			if (strcmp_my2(i, j) == 1) {
				printf("Первая строка больше второй!");
			}
			if (strcmp_my2(i, j) == -1) {
				printf("Вторая строка больше первой!");
			}
			break;
		}

		case 13: {

			printf("Введите строку 1: ");
			char i[80];
			fgets(i, sizeof(i), stdin);
			printf("Введите строку 2: ");
			char j[80];
			fgets(j, sizeof(j), stdin);

			strpy_my(i, j, sizeof(j));

			printf("Cтрока 2: %s", j);
			break;
		}
		case 14: {

			printf("Введите строку 1: ");
			char i[80];
			fgets(i, sizeof(i), stdin);
			printf("Введите строку 2: ");
			char j[80];
			fgets(j, sizeof(j), stdin);

			strcat_my(i, j, sizeof(i));

			printf("Cтрока 1: %s", i);
			break;
		}

		case 15: {

			printf("Введите строку: ");
			char i[80];
			fgets(i, sizeof(i), stdin);
			printf("Введите символ: ");
			char j = getchar();
			getchar();

			printf("Адрес: %p", strchr_my1(i, j));
			break;
		}

		case 16: {

			printf("Введите строку: ");
			char i[80];
			fgets(i, sizeof(i), stdin);
			printf("Введите символ: ");
			char j = getchar();
			getchar();

			printf("Адрес: %p", strchr_my2(i, j));
			break;
		}

		case 17: {

			printf("Введите строку: ");
			char i[80];
			fgets(i, sizeof(i), stdin);

			CreateNewString(i);

			printf("Строка новая: %s", i);
			break;
		}

		case 18: {

			printf("Введите строку: ");
			char i[80];
			fgets(i, sizeof(i), stdin);

			CreateNewString2(i);

			printf("Строка новая: %s", i);
			break;
		}

		}
	} while (n != 0);
	return 0;
}