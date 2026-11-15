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

    
    srand(static_cast<unsigned>(time(nullptr)));

    
    for (int i = 0; i < SIZE; i++) {
        arr[i] = -100 + rand() % 201;
    }

    cout << "Исходный массив:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << setw(5) << arr[i];
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;

    // РЕВЕРС 
    for (int i = 0; i < SIZE / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[SIZE - 1 - i];
        arr[SIZE - 1 - i] = temp;
    }

    cout << "Массив после реверса:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << setw(5) << arr[i];
        if ((i + 1) % 10 == 0) cout << endl;
    }
    cout << endl;

    return 0;
}