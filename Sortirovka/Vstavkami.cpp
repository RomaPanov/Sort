#include <iostream>
#include <locale.h>

int Vst(int* x, int n) {
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
		int i, j, a;
		for (int p = 1; p <= n - 1; p++) {
			i = p;
			j = i - 1;
			if (i != n) {
				for (j; j >= 0; j--) {
					if (x[j] > x[i]) {
						a = x[i];
						x[i] = x[j];
						x[j] = a;
						i--;
					}
				}
			}
			std::cout << "\n " << p << " Итерация ";
			for (int k = 0; k < n; k++) {
				if (x[k] < 10) {
					std::cout << " ";
					std::cout << x[k] << " |  ";
				}
				else
					std::cout << x[k] << " |  ";
			}
		}
		std::cout << "\n\n Итоговый результет сортировки\n ";
		for (int i = 0; i < n; i++) {
			std::cout << x[i] << " | ";
		}
	} else {
		std::cout << "\n Массив отсортирован";
	}
	std::cout << "\n\n";
	return 0;
}
int Vst(float* x, int n) {
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
		int i, j;
		float a;
		for (int p = 1; p <= n - 1; p++) {
			i = p;
			j = i - 1;
			if (i != n) {
				for (j; j >= 0; j--) {
					if (x[j] > x[i]) {
						a = x[i];
						x[i] = x[j];
						x[j] = a;
						i--;
					}
				}
			}
			std::cout << "\n " << p << " Итерация ";
			for (int k = 0; k < n; k++) {
				if (x[k] < 10) {
					std::cout << " ";
					std::cout << x[k] << " |  ";
				}
				else
					std::cout << x[k] << " |  ";
			}
		}
		std::cout << "\n\n Итоговый результет сортировки\n ";
		for (int i = 0; i < n; i++) {
			std::cout << x[i] << " | ";
		}
	} else {
		std::cout << "\n Массив отсортирован";
	}
	std::cout << "\n\n";
	return 0;
}
int Vst(double* x, int n) {
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
		int i, j;
		double a;
		for (int p = 1; p <= n - 1; p++) {
			i = p;
			j = i - 1;
			if (i != n) {
				for (j; j >= 0; j--) {
					if (x[j] > x[i]) {
						a = x[i];
						x[i] = x[j];
						x[j] = a;
						i--;
					}
				}
			}
			std::cout << "\n " << p << " Итерация ";
			for (int k = 0; k < n; k++) {
				if (x[k] < 10) {
					std::cout << " ";
					std::cout << x[k] << " |  ";
				}
				else
					std::cout << x[k] << " |  ";
			}
		}
		std::cout << "\n\n Итоговый результет сортировки\n ";
		for (int i = 0; i < n; i++) {
			std::cout << x[i] << " | ";
		}
	} else {
		std::cout << "\n Массив отсортирован";
	}
	std::cout << "\n\n";
	return 0;
}