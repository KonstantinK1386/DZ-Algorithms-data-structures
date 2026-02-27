#include <iostream>
#include <Windows.h>

unsigned long long int NumFibonacci(unsigned long long int n)
{
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return NumFibonacci(n - 1) + NumFibonacci(n - 2);
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	unsigned long long int n;
	std::cout << "Введите колличество чисел Фибоначчи : ";
	std::cin >> n;
	std::cout << NumFibonacci(n)<< "\n";


	return 0;
}