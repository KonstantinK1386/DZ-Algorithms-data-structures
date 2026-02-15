#include <iostream>
#include <Windows.h>

int SerchArray(int* arr, int dot, int size) {
	int quant, i;	
	int left = 0;
	int right = size - 1;
	while (left<right) {
		i = (left + right) / 2;
		if (arr[i]==dot) {
			while (arr[i + 1] == dot) { 
				i++; 
			};
			quant = size - (i + 1);
			return quant;
		} else if (arr[i] > dot) {
			right = i - 1;
		} else {
			left = i + 1;
		};
	};
	if (arr[left] > dot) {
		quant = size-left;
	}
	else {
		quant = size - (left + 1); 
	};
	return quant;
}

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(LC_ALL, "RU");

	int arr[] = {14, 16, 19, 32, 32, 32, 56, 69, 72};
	int size = sizeof(arr) / sizeof(arr[0]);
	int dot;
	std::cout << "Введите точку отсчёта : ";
	std::cin >> dot;
	std::cout << "Колличество элементов в массиве больше чем " << dot << " : " << SerchArray(arr, dot, size) << "\n";

	return 0;
}