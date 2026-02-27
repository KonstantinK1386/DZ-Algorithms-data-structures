#include <iostream>
#include <vector>
#include <Windows.h>

unsigned long long int NumFibonacci(unsigned long long int n, std::vector <unsigned long long int>& memo){
	if (n == 1) {
		memo[n - 1] = 0;
		return memo[n-1];
	}
	else {
		if (n == 2) {
			memo[n - 2] = 0;
			memo[n - 1] = 1;
			return memo[n-1];
		}
		else {
			memo[n - 1] = NumFibonacci(n - 1, memo) + memo[n - 3];
			return memo[n-1];
		};
	};
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	unsigned long long int n;
	std::cout << "Введите колличество чисел Фибоначчи : ";
	std::cin >> n;
	std::vector <unsigned long long int> memo(n);
	std::cout << NumFibonacci(n, memo) << "\n";


	return 0;
}