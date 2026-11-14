#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double pervoe_chislo, vtoroe_chislo, tretie_chislo;

    cout << "Введите начало интервала a: ";
    cin >> pervoe_chislo;
    cout << "Введите конец интервала b: ";
    cin >> vtoroe_chislo;
    cout << "Введите шаг h: ";
    cin >> tretie_chislo;

    //  Проверка
    if (pervoe_chislo > vtoroe_chislo || tretie_chislo <= 0) {
        cout << "Ошибка: a <= b и h > 0" << endl;
        return 1;
    }

    //  Шапка таблицы
    cout << "=====================" << endl;
    cout << "    x     |    y" << endl;
    cout << "=====================" << endl;

    // цикл табуляции
    for (double x = pervoe_chislo; x <= vtoroe_chislo + 1e-9; x += tretie_chislo) {
        double y = 2 * x + 3;
        cout << x << " | " << y << endl;
    }

    cout << "=====================" << endl;
    return 0;
}