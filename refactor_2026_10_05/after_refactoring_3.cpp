#include <iostream>

void print_arr(const int arr[], const char* comment, const int size);

int main() {
    int arr_size;
    std::cout << "Введите размер массива: ";
    std::cin >> arr_size;

    int* arr = new int[arr_size];

    for (int i = 0; i < arr_size; i++) {
        arr[i] = rand() % 20;
    }

    print_arr(arr, "Вывод исходного массива: ", arr_size);

    for (int i = 0; i < arr_size/2; i++) {
        int temp = arr[i];
        arr[i] = arr[arr_size - 1 - i];
        arr[arr_size - 1 - i] = temp;
    }

    print_arr(arr, "Вывод обработанного массива: ", arr_size);

    delete[] arr;
    return 0;
}
void print_arr(const int arr[], const char* comment, const int size) {
	std::cout << comment << " ";
	for (int i = 0; i < size; i++) {
		std::cout << arr[i] << ' ';
	}
	std::cout << std::endl;
}
