#include <iostream>
#include <locale.h>

int Min(int* x, int n, int j, int u) {
	int min;
	min = j;
	for (int i = u; i < n; i++) {
		if (min > x[i]) {
			min = x[i];
		}
	}
	return min;
}
int Min(float* x, int n, float j, int u) {
	int min;
	min = j;
	for (int i = u; i < n; i++) {
		if (min > x[i]) {
			min = x[i];
		}
	}
	return min;
}
int Min(double* x, int n, double j, int u) {
	int min;
	min = j;
	for (int i = u; i < n; i++) {
		if (min > x[i]) {
			min = x[i];
		}
	}
	return min;
}
int Vbr(int* x, int n) {
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
		int min, j, a, u;
		for (int i = 0; i < n; i++) {
			j = x[i];
			u = i;
			min = Min(x, n, j, u);
			if (j != min) {
				for (int o = 0; o < n; o++) {
					if (x[o] == min) {
						a = x[i];
						x[i] = min;
						x[o] = a;
					}
				}
				std::cout << "\n" << i + 1 << " Итерация ";
				for (int i = 0; i < n; i++) {
					if (x[i] < 10) {
						std::cout << " ";
						std::cout << x[i] << " |  ";
					} else
						std::cout << x[i] << " |  ";
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

int Vbr(float* x, int n) {
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
		int min, j, a, u;
		for (int i = 0; i < n; i++) {
			j = x[i];
			u = i;
			min = Min(x, n, j, u);
			if (j != min) {
				for (int o = 0; o < n; o++) {
					if (x[o] == min) {
						a = x[i];
						x[i] = min;
						x[o] = a;
					}
				}
				std::cout << "\n" << i + 1 << " Итерация ";
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

int Vbr(double* x, int n) {
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
		int min, j, a, u;
		for (int i = 0; i < n; i++) {
			j = x[i];
			u = i;
			min = Min(x, n, j, u);
			if (j != min) {
				for (int o = 0; o < n; o++) {
					if (x[o] == min) {
						a = x[i];
						x[i] = min;
						x[o] = a;
					}
				}
				std::cout << "\n" << i + 1 << " Итерация ";
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