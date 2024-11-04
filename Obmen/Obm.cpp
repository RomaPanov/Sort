#include <iostream>
#include <locale.h>

int Obm(int* x, int n) {
	setlocale(LC_ALL, "RUS");
	std::cout << " Исходный массив\n ";
	int k1 = 0, k2 = 0, min, max;
	for (int i = 0; i < n; i++) {
		min = x[i];
		if (i < n) {
			max = x[i + 1];
			if (min <= max) {
				k1++;
			}
		}
		std::cout << x[i] << " | ";
	}
	for (int i = n - 1; i >= 0; i--) {
		min = x[i];
		if (i > 0) {
			max = x[i - 1];
			if (min <= max) {
				k2++;
			}
		}
	}
	if ((k1 != n - 1) && (k2 != n - 1)) {
		int j, a;
		for (int i = 0; i < n - 1; i++) {
			j = i + 1;
			std::cout << "\n Проход " << i + 1;
			int p = 0;
			for (int k = j; k < n; k++) {
				if (j != n) {
					if (x[i] > x[k]) {
						a = x[i];
						x[i] = x[k];
						x[k] = a;
					}
					std::cout << "\n	Итерация " << ++p << " ";
					for (int i = 0; i < n; i++) {
						if (x[i] < 10) {
							std::cout << " ";
							std::cout << x[i] << " |  ";
						}
						else
							std::cout << x[i] << " |  ";
					}
				}
			}
		}
		std::cout << "\n\n Итоговый результет сортировки\n ";
		for (int i = 0; i < n; i++) {
			std::cout << x[i] << " | ";
		}
	}
	else {
		std::cout << "\n Массив отсортирован";
	}
	std::cout << "\n\n";
	return 0;
}

int Obm(float* x, int n) {
	setlocale(LC_ALL, "RUS");
	std::cout << " Исходный массив\n ";
	int k1 = 0, k2 = 0, min, max;
	for (int i = 0; i < n; i++) {
		min = x[i];
		if (i < n) {
			max = x[i + 1];
			if (min <= max) {
				k1++;
			}
		}
		std::cout << x[i] << " | ";
	}
	for (int i = n - 1; i >= 0; i--) {
		min = x[i];
		if (i > 0) {
			max = x[i - 1];
			if (min <= max) {
				k2++;
			}
		}
	}
	if ((k1 != n - 1) && (k2 != n - 1)) {
		int j, a;
		for (int i = 0; i < n - 1; i++) {
			j = i + 1;
			std::cout << "\n Проход " << i + 1;
			int p = 0;
			for (int k = j; k < n; k++) {
				if (j != n) {
					if (x[i] > x[k]) {
						a = x[i];
						x[i] = x[k];
						x[k] = a;
					}
					std::cout << "\n	Итерация " << ++p << " ";
					for (int i = 0; i < n; i++) {
						if (x[i] < 10) {
							std::cout << " ";
							std::cout << x[i] << " |  ";
						}
						else
							std::cout << x[i] << " |  ";
					}
				}
			}
		}
		std::cout << "\n\n Итоговый результет сортировки\n ";
		for (int i = 0; i < n; i++) {
			std::cout << x[i] << " | ";
		}
	}
	else {
		std::cout << "\n Массив отсортирован";
	}
	std::cout << "\n\n";
	return 0;
}

int Obm(double* x, int n) {
	setlocale(LC_ALL, "RUS");
	std::cout << " Исходный массив\n ";
	int k1 = 0, k2 = 0, min, max;
	for (int i = 0; i < n; i++) {
		min = x[i];
		if (i < n) {
			max = x[i + 1];
			if (min <= max) {
				k1++;
			}
		}
		std::cout << x[i] << " | ";
	}
	for (int i = n - 1; i >= 0; i--) {
		min = x[i];
		if (i > 0) {
			max = x[i - 1];
			if (min <= max) {
				k2++;
			}
		}
	}
	if ((k1 != n - 1) && (k2 != n - 1)) {
		int j, a;
		for (int i = 0; i < n - 1; i++) {
			j = i + 1;
			std::cout << "\n Проход " << i + 1;
			int p = 0;
			for (int k = j; k < n; k++) {
				if (j != n) {
					if (x[i] > x[k]) {
						a = x[i];
						x[i] = x[k];
						x[k] = a;
					}
					std::cout << "\n	Итерация " << ++p << " ";
					for (int i = 0; i < n; i++) {
						if (x[i] < 10) {
							std::cout << " ";
							std::cout << x[i] << " |  ";
						}
						else
							std::cout << x[i] << " |  ";
					}
				}
			}
		}
		std::cout << "\n\n Итоговый результет сортировки\n ";
		for (int i = 0; i < n; i++) {
			std::cout << x[i] << " | ";
		}
	}
	else {
		std::cout << "\n Массив отсортирован";
	}
	std::cout << "\n\n";
	return 0;
}