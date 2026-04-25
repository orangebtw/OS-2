#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char** argv) {
	if (argc < 2)
		return 1;

	char* op = argv[1];

	float result = 0.0f;

	if (strcmp(op, "add") == 0) {
		if (argc < 4) {
			printf("Введите числа!\n");
			return 1;
		}

		char* end;
		float a = strtof(argv[2], &end);
		if (end == argv[2]) {
			printf("Ошибка: не удалось считать \"%s\"\n", argv[2]);
			return 1;
		}
		
		float b = strtof(argv[3], &end);
		if (end == argv[3]) {
			printf("Ошибка: не удалось считать \"%s\"\n", argv[3]);
			return 1;
		}

		result = a + b;
	} else if (strcmp(op, "div") == 0) {
		if (argc < 4) {
			printf("Введите числа!\n");
			return 1;
		}

		char* end;
		float a = strtof(argv[2], &end);
		if (end == argv[2]) {
			printf("Ошибка: не удалось считать \"%s\"\n", argv[2]);
			return 1;
		}
		
		float b = strtof(argv[3], &end);
		if (end == argv[3]) {
			printf("Ошибка: не удалось считать \"%s\"\n", argv[3]);
			return 1;
		}

		result = a / b;
	} else if (strcmp(op, "mul") == 0) {
		if (argc < 4) {
			printf("Введите числа!\n");
			return 1;
		}

		char* end;
		float a = strtof(argv[2], &end);
		if (end == argv[2]) {
			printf("Ошибка: не удалось считать \"%s\"\n", argv[2]);
			return 1;
		}
		
		float b = strtof(argv[3], &end);
		if (end == argv[3]) {
			printf("Ошибка: не удалось считать \"%s\"\n", argv[3]);
			return 1;
		}

		result = a * b;
	} else if (strcmp(op, "sub") == 0) {
		if (argc < 4) {
			printf("Введите числа!\n");
			return 1;
		}

		char* end;
		float a = strtof(argv[2], &end);
		if (end == argv[2]) {
			printf("Ошибка: не удалось считать \"%s\"\n", argv[2]);
			return 1;
		}
		
		float b = strtof(argv[3], &end);
		if (end == argv[3]) {
			printf("Ошибка: не удалось считать \"%s\"\n", argv[3]);
			return 1;
		}

		result = a - b;
	} else {
		printf("Неизвестная операция: %s\n", op);
		return 1;
	}
	
	printf("Результат: %f\n", result);

	return 0;
}
