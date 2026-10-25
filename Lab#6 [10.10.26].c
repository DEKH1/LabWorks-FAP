#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#include <math.h>
#define NUM_ELEMENTS 20

int arr[NUM_ELEMENTS];
int Elm;
void inputElements() {
	printf("Введите длину массива:");
	scanf_s("%d", &Elm);
	printf("\n");
	printf("Введите элементы массива:\n");
	for (int i = 0; i < Elm; i++) {
		scanf_s("%d", &arr[i]);
	}
}

void X10() {
	for (int i = 0; i < NUM_ELEMENTS; i++) {
		if (arr[i] % 2 == 1) {
			arr[i] = arr[i] * 10;
		}
	}
}

void Xm1() {
	for (int i = 0; i < NUM_ELEMENTS; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] = arr[i] * (-1);
		}
	}
}

void Les4() {
	for (int i = 0; i < NUM_ELEMENTS; i++) {
		if (arr[i] < 4) {
			arr[i] = 4;
		}
	}
}

void printAllElements() {
	int i = 0;
	while (i < Elm) {
		printf("%d ", arr[i]);
		i++;
	}
	printf("\n");
}

int MinElement() {
	int min = 2147483647;
	for (int i = 0; i < Elm; i++) {
		if (arr[i] < min) {
			min = arr[i];
		}
	}
	return min;
}

int MaxElement() {
	int max = 0;
	for (int i = 0; i < Elm; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
	}
	return max;
}

void More10() {
	int k = 0;
	for (int i = 0; i < Elm; i++) {
		if (arr[i] > 10) {
			k = k + 1;
		}
	}
	printf("%d", k);
}

void X2LElment() {
	for (int i = Elm - 1; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			arr[i] = arr[i] * 2;
			break;
		}
	}
}

int LeftMin() {
	for (int i = 0; i < Elm; i++) {
		if (arr[i] == MinElement()) {
			return i;
		}
	}
}

int LeftMin0() {
	int min = LeftMin();
	for (int i = 0; i < min; i++) {
		if (arr[i] % 2 == 0) {
			arr[i] = 0;
		}
	}
}

void X10RMin() {
	for (int i = Elm - 1; i >= 0; i--) {
		if (arr[i] != MinElement()) {
			if (arr[i] % 2 == 1) {
				arr[i] = arr[i] * 10;
				continue;
			}
		}
		if (arr[i] == MinElement()) {
			break;
		}
	}
}

void MAXtoMIN() {
	int min = MinElement();
	int max = MaxElement();

	for (int i = 0; i < Elm; i++) {
		if (arr[i] == min) {
			arr[i] = max;
			continue;
		}
		if (arr[i] == max) {
			arr[i] = min;
			continue;
		}
	}
}

void X10MINMAX() {
	int min = LeftMin();
	int max = MaxElement();
	for (int i = min + 1; i < Elm; i++) {
		if (arr[i] != max) {
			arr[i] = arr[i] * 10;
			continue;
		}
		if (arr[i] == max) {
			break;
		}
	}
}

void X100() {
	int k = 0;
	for (int i = Elm - 1; i >= 1; i--) {
		if (k == 0) {
			if (arr[i] % 2 == 0) {
				k = 1;
				continue;
			}
		}
		if (k == 1) {
			arr[i] = arr[i] * 100;
		}
	}
}

void DeleteElement() {
	int index;
	printf("Введите индекс удаляемого элемента:");
	scanf_s("%d", &index);

	for (int i = index - 1; i < Elm; i++) {
		arr[i] = arr[i + 1];
	}
	Elm = Elm - 1;
}

void AddElement() {
	int index;
	int Element;
	printf("Введите индекс куда вставить элемент:");
	scanf_s("%d", &index);
	printf("Введите элемент:");
	scanf_s("%d", &Element);

	Elm = Elm + 1;

	for (int i = Elm; i >= index - 1; i--) {
		arr[i] = arr[i - 1];
	}
	arr[index - 1] = Element;
}

void DeleteMin() {
	int min = MinElement();

	for (int i = Elm - 1; i >= 0; i--) {
		if (arr[i] == min) {
			for (int j = i; j < Elm; j++) {
				arr[j] = arr[j + 1];
			}
			Elm = Elm - 1;
		}
	}
}

void Add0toMin() {
	int min = MinElement();

	for (int i = Elm - 1; i >= 0; i--) {
		if (arr[i] == min) {
			for (int j = Elm; j > i; j--) {
				arr[j] = arr[j - 1];
			}
			arr[i] = 0;
			Elm = Elm + 1;
		}
	}
}

void DeleteChet() {

	for (int i = Elm - 1; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			for (int j = i; j < Elm; j++) {
				arr[j] = arr[j + 1];
			}
			Elm = Elm - 1;
		}
	}
}

void DoublChet() {

	for (int i = Elm - 1; i >= 0; i--) {
		if (arr[i] % 2 == 0) {
			for (int j = Elm; j > i; j--) {
				arr[j] = arr[j - 1];
			}
			Elm = Elm + 1;
		}
	}
}

void AddMinSt() {
	int min = MinElement();
	for (int i = Elm; i >= 0; i--) {
		arr[i] = arr[i - 1];
	}
	arr[0] = min;
	Elm = Elm + 1;
}

void Delete4() {
	for (int i = Elm - 1; i >= 0; i--) {
		if (arr[i] < 4) {
			for (int j = i; j < Elm; j++) {
				arr[j] = arr[j + 1];
			}
			Elm = Elm - 1;
		}
	}
}

void LastAdd0() {
	for (int i = Elm - 1; i >= 0; i--) {
		if (arr[i] % 4 == 0) {
			for (int j = Elm; j > i; j--) {
				arr[j] = arr[j - 1];
			}
			arr[i + 1] = 0;
			Elm = Elm + 1;
			break;
		}
	}
}

int main() {

	FILE* logi;

	logi = fopen("C:\\Users\\user\\Desktop\\Laba8\\lab6logs.txt", "r+");

	if (logi == NULL) {
		printf("file not found");
		return 1;
	}

	printf("main() start\n");

	SetConsoleCP(65001);
	SetConsoleOutputCP(65001);

	int n;
	int min;
	int left;

	do {
		printf("\n\nВыберите нужную вам операцию:\n\n");
		printf("-2: Загрузить последний сохраненый массив\n");
		printf("-1: Сохранить массив\n\n");

		printf("1: Ввести массив с клавиатуры\n");
		printf("2: Х10 для нечетных элементов\n");
		printf("3: Найти минимальный элемент\n");
		printf("4: Найти кол-во элементов больше 10\n");
		printf("5: Умножить на два последний четный элемент\n");
		printf("6: Кол-во элементов левее минимального\n");
		printf("7: X10 для нечетных элементов правее минимального\n");
		printf("8: Поменять местами MAX и MIN\n");
		printf("9: X-1 для четных элементов\n");
		printf("10: Числа меньше 4 становятся 4\n");
		printf("11: Четные левее мин заменить на 0\n");
		printf("12: X10 для чисел между МАКС и МИН\n");  
		printf("13: X100 для чисел между первым и последним четным\n");
		printf("\n");
		printf("14: Удалить заданый элемент\n");
		printf("15: Добавить заданый элемент\n");
		printf("16: Удалить минимальный элемент\n");
		printf("17: Добавить 0 перед Min элементом\n");
		printf("18: Удалить все четные элементы\n");
		printf("19: Продублировать все четные элементы\n");
		printf("20: Добавить в начало элемент, равный минимальному\n");
		printf("21: Удалить все элементы меньше 4\n");
		printf("22: Поставить 0 после ласт элемента кратного 4\n");

		printf("\n0: Выйти из программы\n");

		scanf_s("%d", &n);

		switch (n) {
		default:
			printf("Неверное число");
			break;

		case -1: {
			fprintf(logi, "%d ", Elm);

			for (int i = 0; i < Elm; i++) {
				fprintf(logi, "%d ", arr[i]);
			}
			rewind(logi);
			break;
		}

		case -2: {
			fscanf(logi, "%d", &Elm);

			for (int i = 0; i < Elm; i++) {
				fscanf_s(logi, "%d", &arr[i]);
			}
			rewind(logi);
			break;
		}

		case 1:
			inputElements();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;


		case 2:
			X10();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;


		case 3:{
			min = MinElement();

			printf("Min элемент: %d", min);
			printf("\n");

			break;
		}

		case 4:
			printf("Колво жлементов больше 10: ");
			More10();
			printf("\n");

			break;

		case 5:
			X2LElment();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 6:
			left = LeftMin();

			printf("Кол-во: %d", left);
			printf("\n");

			break;

		case 7:
			X10RMin();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 8:
			MAXtoMIN();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 9:
			Xm1();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 10:
			Les4();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 11:
			LeftMin0();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 12:
			X10MINMAX();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 13:
			X100();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 14:
			DeleteElement();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 15:
			AddElement();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 16:
			DeleteMin();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 17:
			Add0toMin();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 18:
			DeleteChet();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 19:
			DoublChet();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 20:
			AddMinSt();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 21:
			Delete4();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		case 22:
			LastAdd0();

			printf("Массив:");
			printAllElements();
			printf("\n");

			break;

		}
	} while (n != 0);
	fclose(logi);
}