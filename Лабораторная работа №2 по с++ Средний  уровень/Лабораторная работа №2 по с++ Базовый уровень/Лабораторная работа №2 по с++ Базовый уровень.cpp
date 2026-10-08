#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Данная программа вычисляет периметр и площадь прямоугольника" << endl;

                                                                                                 
    double dlinna = 0.0;                                                                         // double, потому что стороны могут быть дробными
    double storona = 0.0; 


    cout << "Введите длину: ";
    cin >> dlinna;

    cout << "Введите ширину: ";
    cin >> storona;

    if (dlinna <= 0 && storona <= 0) {
        cout << "Ошибка: стороны должны быть больше нуля!" << endl;
        return 1;
    }


                                                                                    // Вычисления в double
    double perimeter = 2 * (storona + dlinna); 
    double ploshad = storona * dlinna;                

    
                                                                                    // Дробная часть отбрасывается 
    int intstorona = static_cast<int>(dlinna);
    int intdlinna = static_cast<int>(storona);
    int intPerimeter = 2 * (intstorona + intdlinna);
    int intploshad = intstorona * intdlinna;

    
    cout << fixed << setprecision(16);                                               //вывод

    cout << "\n Результат в double " << endl;
    cout << "Длина:    " << dlinna << endl;
    cout << "Ширина:   " << storona << endl;
    cout << "Периметр: " << perimeter << endl;
    cout << "Площадь:  " << ploshad << endl;

    cout << "\n Результат в int (дробная часть отброшена) " << endl;
    cout << "Длина:    " << intstorona << endl;
    cout << "Ширина:   " << intdlinna << endl;
    cout << "Периметр: " << intPerimeter << endl;
    cout << "Площадь:  " << intploshad << endl;


    return 0;
}