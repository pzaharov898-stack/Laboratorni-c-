#include <iostream>
#include <windows.h>
using namespace std;


int main()
{ 
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 5;
    int arr[SIZE];

    cout << "Введите " << SIZE << " элементов: ";

    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    };

    int sum = 0;
    for (int i = 0; i < SIZE; i++) {
        sum += arr[i];
        
    }
    std::cout << "Сумма: " << sum << std::endl;

    return 0;
}