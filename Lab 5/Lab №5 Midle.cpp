#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double pervoe_chsilo, vtoroe_chislo, tretie_chislo;

    
    do {
        cout << "Введите начало интервала a: ";
        cin >> pervoe_chsilo;
        cout << "Введите конец интервала b:  ";
        cin >> vtoroe_chislo;
        cout << "Введите шаг h (h > 0):      ";
        cin >> tretie_chislo;

        if (pervoe_chsilo > vtoroe_chislo || tretie_chislo <= 0) {
            cout << "  >>> Ошибка: нужно a <= b и h > 0. Повторите ввод." << endl;
        }
    } while (pervoe_chsilo > vtoroe_chislo || tretie_chislo <= 0);

    //Аккумулятор суммы и счётчик точек
    double sum = 0.0;
    int count = 0;

    // Настройка форматирования таблицы
    cout << fixed << setprecision(4);

    //Шапка таблицы
    cout << "\n===============================" << endl;
    cout << "     x      |    y = sin(x)" << endl;
    cout << "===============================" << endl;

    //Табуляция + накопление суммы
    
    for (double x = pervoe_chsilo; x <= vtoroe_chislo + 1e-9; x += tretie_chislo) {
        double y = sin(x);

        cout << setw(10) << x << " | " << setw(10) << y << endl;

        sum += y;    // аккумулятор: sum = sum + y
        count++;     // количество точек
    }

    cout << "===============================" << endl;

    //Результаты
    cout << "Сумма всех значений функции: " << sum << endl;

    if (count > 0) {
        cout << "Среднее арифметическое:      " << sum / count << endl;
        cout << "Количество точек:            " << count << endl;
    }

    return 0;
}