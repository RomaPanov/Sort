#include <iostream>
#include <locale.h>
#include "..\Obmen\Obm.h"

int Prov(int& n, int const& N) {
	int p = 0;
	while (p == 0) {
		if (n <= 1 || n > N) {
			if (n > N)
				std::cout << " Превышен лимит значений массива\n Ограничение до " << N << "\n Повторить ввод ? 1 - да | 2 - нет\n ";
			else
				std::cout << " Неверная размерность массива\n Повторить ввод? 1 - да | 2 - нет\n ";
			std::cin >> n;
			if (n == 1) {
				std::cout << " Введите размер массива = ";
				std::cin >> n;
			}
			else p = 1;
		}
		else return 1;
	}
}

int main() {
	setlocale(LC_ALL, "RU");
	bool p = true;
	int a;
	while (p == true) {
		std::cout << " | Меню |\n 12 Вариант\n 1 Массив 2,10,19,0,6,13,8,4\n 2 Массив 1,2,3,4,5,6\n 3 Массив 6,5,4,3,2,1\n 4 Ввод массива\n 0 Выход из программы\n ";
		std::cin >> a;
		while (a < 0 || a > 4) {
			std::cout << " Невеный ввод. Повторите ";
			std::cin >> a;
		}
		switch (a) {
		case 1: { int mass[]{ 2,10,19,0,6,13,8,4 };
			  int size = (sizeof(mass) / sizeof(mass[0]));
			  Obm(mass, size); break; }
		case 2: { int mass[]{ 1,2,3,4,5,6 };
			  int size = (sizeof(mass) / sizeof(mass[0]));
			  Obm(mass, size); break; }
		case 3: { int mass[]{ 6,5,4,3,2,1 };
			  int size = (sizeof(mass) / sizeof(mass[0]));
			  Obm(mass, size); break; }
		case 4: { std::cout << " Введите размер массива = ";
			int size, J;
			int const N = 20;
			double mass[N];
			std::cin >> size;
			J = Prov(size, N);
			if (J == 1) {
				std::cout << " Ввод в массив\n";
				for (int i = 0; i < size; i++)
					std::cin >> mass[i];
				Obm(mass, size);
			} break; }
		case 0: {p = false; }
		}
	}
}