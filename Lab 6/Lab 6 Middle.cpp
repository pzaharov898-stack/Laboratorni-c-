#include <iostream>
#include <iomanip>
#include <cstdlib>   // rand(), srand()
#include <ctime>     // time()
#include <windows.h> 

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 15;
    int arr[SIZE];

    // Инициализация генератора случайных чисел
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    // Заполнение массива случайными числами 0..99
    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100;
    }

    // Вывод массива (по 15 элементов в строке)
    cout << "Сгенерированный массив:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << setw(4) << arr[i];
        if ((i + 1) % 15 == 0) {
            cout << endl;
        }
    }
    cout << std::endl;

    // Сумма
    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
    }

    // Среднее арифметическое (вещественное деление!)
    double average = static_cast<double>(sum) / SIZE;

    // Минимум и максимум
    int minVal = arr[0];
    int maxVal = arr[0];
    int minIndex = 0;
    int maxIndex = 0;

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    // Вывод результатов
    cout << "\n=== РЕЗУЛЬТАТЫ ===\n";
    cout << "Сумма элементов: " << sum << endl;
    cout << fixed << setprecision(2);
    cout << "Среднее арифметическое: " << average << endl;
    cout << "Минимальный элемент: arr[" << minIndex << "] = " << minVal << endl;
    cout << "Максимальный элемент: arr[" << maxIndex << "] = " << maxVal << endl;

    return 0;
}