
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Программа вычисляет объем и площадь поверхности сферы" << endl;

    const double PI = 3.141592653589793;
    double radius = 0.0;

    cout << "Введите радиус сферы: ";
    cin >> radius;

    if (cin && radius <= 0) {
        cout << "Ошибка! Радиус должен быть положительным числом." << endl;
        return 1;
    }

              
    
    // Переводим значения из double в float
    float radiusFloat = static_cast<float>(radius);
    float piFloat = static_cast<float>(PI);


        
    // Вычисления с float
    float ploshadFloat = 4.0f * piFloat * radiusFloat * radiusFloat;
    float obiomFloat = (4.0f / 3.0f) * piFloat * radiusFloat * radiusFloat * radiusFloat;

      
    
    
    // Вычисления с double
    double ploshadDouble = 4.0 * PI * radius * radius;
    double obiomDouble = (4.0 / 3.0) * PI * radius * radius * radius;

    cout << fixed << setprecision(10);

    cout << "\nРезультаты с типом float:" << endl;
    cout << "Площадь поверхности = " << ploshadFloat << endl;
    cout << "Объем сферы = " << obiomFloat << endl;

    cout << "\nРезультаты с типом double:" << endl;
    cout << "Площадь поверхности = " << ploshadDouble << endl;
    cout << "Объем сферы = " << obiomDouble << endl;

  
    
    // Сравнение точности
    double differenceploshad = fabs(ploshadDouble - static_cast<double>(ploshadFloat));
    double differenceVobiom = fabs(obiomDouble - static_cast<double>(obiomFloat));

    cout << "\nСравнение точности:" << endl;
    cout << "Разница площадей = " << differenceploshad << endl;
    cout << "Разница объемов = " << differenceVobiom << endl;

    return 0;
}
