#include <iostream>
#include <Windows.h>

void FibonacciNumbers(unsigned int n, unsigned long long int a, unsigned long long int b) {
	unsigned long long int temp;
	temp = a;
	a = b;
	b = b + temp;
	std::cout << b;
	n--;
	if (n != 0) {
		std::cout << ", ";
		FibonacciNumbers(n, a, b);
	}
	else {
		std::cout << " \n";
	};

}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	unsigned int n;
	std::cout << "Введите колличество чисел Фибоначчи : ";
	std::cin >> n;
	if (n > 2) {
		std::cout << "Числа Фибоначчи до включительно " << n << " : 0, 1, ";
		FibonacciNumbers(n-2, 0, 1);
	}
	else {
		switch (n) {
		case 1: std::cout << "Числа Фибоначчи : 0 \n"; break;
		case 2: std::cout << "Числа Фибоначчи : 0, 1 \n"; break;
		};
	};

	return 0;
}