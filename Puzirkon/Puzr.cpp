#include <iostream>
#include <locale.h>

int Pzr(int* x, int n) {
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
		int m, a, h, p;
		m = n + 1;
		p = 0;
		for (int i = n - 1; i >= 0; i--) {
			m--;
			h = 0;
			p++;
			if (p != n) {
				std::cout << "\n Проход " << p << " ";
				for (int j = 0; j < m; j++) {
					if (x[j] > x[j + 1] && j + 1 != m) {
						a = x[j];
						x[j] = x[j + 1];
						x[j + 1] = a;
					}
					h++;
					if (h != m) {
						std::cout << "\n	Итерация " << h << " ";
						for (int k = 0; k < n; k++) {
							if (x[k] < 10) {
								std::cout << " ";
								std::cout << x[k] << " |  ";
							}
							else
								std::cout << x[k] << " |  ";
						}
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

int Pzr(float* x, int n) {
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
		int m, a, h, p;
		m = n + 1;
		p = 0;
		for (int i = n - 1; i >= 0; i--) {
			m--;
			h = 0;
			p++;
			if (p != n) {
				std::cout << "\n Проход " << p << " ";
				for (int j = 0; j < m; j++) {
					if (x[j] > x[j + 1] && j + 1 != m) {
						a = x[j];
						x[j] = x[j + 1];
						x[j + 1] = a;
					}
					h++;
					if (h != m) {
						std::cout << "\n	Итерация " << h << " ";
						for (int k = 0; k < n; k++) {
							if (x[k] < 10) {
								std::cout << " ";
								std::cout << x[k] << " |  ";
							}
							else
								std::cout << x[k] << " |  ";
						}
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

int Pzr(double* x, int n) {
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
		int m, a, h, p;
		m = n + 1;
		p = 0;
		for (int i = n - 1; i >= 0; i--) {
			m--;
			h = 0;
			p++;
			if (p != n) {
				std::cout << "\n Проход " << p << " ";
				for (int j = 0; j < m; j++) {
					if (x[j] > x[j + 1] && j + 1 != m) {
						a = x[j];
						x[j] = x[j + 1];
						x[j + 1] = a;
					}
					h++;
					if (h != m) {
						std::cout << "\n	Итерация " << h << " ";
						for (int k = 0; k < n; k++) {
							if (x[k] < 10) {
								std::cout << " ";
								std::cout << x[k] << " |  ";
							}
							else
								std::cout << x[k] << " |  ";
						}
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