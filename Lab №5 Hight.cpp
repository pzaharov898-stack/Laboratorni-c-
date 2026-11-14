#include <iostream>
#include <windows.h>
#include <iomanip>
#include <cmath>
    using namespace std;

    
    double sinTaylor(double x, double epsilon) {
        double sum = 0;
        double term = x;      // первый член ряда (n = 0)
        int    n = 0;

       
        while (fabs(term) > epsilon) {
            sum += term;                                       // накапливаем
            n++;
            // Рекуррентная формула 
            term = -term * x * x / ((2 * n - 1) * (2 * n));
        }
        return sum;
    }

    int main() {
        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        double pervoe_chislo, vtoroe_chislo, tretie_chislo;
        const double epsilon = 1e-6;   // точность 

        // Ввод с защитой от букв
        // При вводе буквы cin переходит в fail-состояние — сбрасываем и чистим буфер.
        cout << "Введите начало интервала a: ";
        cin >> pervoe_chislo;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Ошибка: введено не число." << endl;
            return 1;
        }

        cout << "Введите конец интервала b: ";
        cin >> vtoroe_chislo;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Ошибка: введено не число." << endl;
            return 1;
        }

        cout << "Введите шаг h (h > 0): ";
        cin >> tretie_chislo;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Ошибка: введено не число." << endl;
            return 1;
        }

        //  Проверка корректности
        if (pervoe_chislo > vtoroe_chislo || tretie_chislo <= 0) {
            cout << "Ошибка: нужно a <= b и h > 0." << endl;
            return 1;
        }

        
        cout << fixed << setprecision(6);

        // Шапка таблицы 
        cout << "\n================================================================" << endl;
        cout << "     x      |   sin(x)      |  ряд Тейлора  |  разность" << endl;
        cout << "================================================================" << endl;

        // Табуляция + сумма Тейлора + сравнение 
        for (double x = pervoe_chislo; x <= vtoroe_chislo + 1e-9; x += tretie_chislo) {
            double yLib = sin(x);                      // библиотечное значение
            double yTail = sinTaylor(x, epsilon);       // сумма ряда Тейлора
            double diff = fabs(yLib - yTail);          // разность (погрешность)

            cout << setw(10) << x << " | "
                << setw(12) << yLib << " | "
                << setw(12) << yTail << " | "
                << setw(12) << diff << endl;
        }

        cout << "================================================================" << endl;

        return 0;
    }
