#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    cout << "Данная программа проверяет число на знак" << endl;
    cout << "\nВведите число" << endl;


    int chislo;
    cin >> chislo;

    if (chislo <=0)
    {
        cout << "Число отрицательное" << endl;
    }
    else 

    {
        cout << "Число положительное" << endl;;
    }
    


    return 0;
}