#include <iostream>

template <typename T>
void fill_arr(T arr[], const int length, int left, int right) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (right - left) + left;
}


template <typename T>
void print_arr(T arr[], const int length) {
	std::cout << "{ ";
	for (int i = 0; i < length; i++)
		std::cout << arr[i] << ", ";
	std::cout << "\b\b }\n";
}
// Задание 1
void foo(int& var1, int& var2, int& var3) {
	if (var1 > var2 && var1 > var3) {
		var2 = var1;
		var3 = var1;
		return;
	}
	if (var2 > var1 && var2 > var3) {
		var1 = var2;
		var3 = var2;
		return;
	}
	var1 = var3;
	var2 = var3;


}
// Задание 2
template <typename T>
int first_neg(T& arr, const int& lenght, int& var = 0) {
	var = 1;
	for (int i = 0; i < lenght; i++) {
		if (*(arr+i) < 0)
			return var = *(arr+i);
	}
	
}
// Задание 3
template <typename T>
void arr_arr(T arr2, const int size2, T arr3, const int size3) {
	for (int i = 0; i < size2; i++)
		for (int j = 0; j < size3; j++)
			if (*(arr2+i) == *(arr3+j))
				*(arr3+j) = 0;

}





int main() {
	setlocale(LC_ALL, "Russian");
	int num1 , num2 , num3;
	
	std::cout << "Задача 1\nВведите три числа -> ";
	std::cin >> num1 >> num2 >> num3;
	foo(num1, num2, num3);
	std::cout << "num1 = " << num1 << "; num2 = " << num2 << "; num3 = " << num3 << std::endl;
	
	std::cout << "Задача 2\n";
	int var;
	const int size1 = 10;
	int arr1[size1];
	
	fill_arr(arr1, size1, -10, 10);
	print_arr(arr1,size1);
	first_neg(arr1, size1, var);
	std::cout << var << std::endl;
	
	
	std::cout << "Задача 3\n";
	const int size2 = 7;
	int arr2[size2]{ 2, 25, 14, 17, 88, 50, 70 };
	const int size3 = 6;
	int arr3[size3]{11, 55, 11, 17, 70, 22};
	
	std::cout << "Первый Массив:\n";
	print_arr(arr2, size2);
	
	std::cout << "\nВторой Массив:\n";
	print_arr(arr3, size3);

	std::cout << "\nИзменённый второй массив:\n";
	arr_arr(arr2, size2, arr3, size3);
	print_arr(arr3, size3);






	return 0;
}