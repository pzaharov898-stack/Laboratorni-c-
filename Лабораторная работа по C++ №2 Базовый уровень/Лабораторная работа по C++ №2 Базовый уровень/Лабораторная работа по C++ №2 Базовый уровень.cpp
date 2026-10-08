#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    cout << "Данная программа вычисляет периметр квадрата" << endl;               //Заголовок 
    cout << "Введите сторону квадрата а желательно дробное число" << endl;
    double storona = 0.0;                                        //Используем Double потомучто сторона может быть дробной в отличии от int где могут быть только целые числа без запятой
    cin >> storona;                                              //ввод стороны


    if (storona > 0) {                                           //сторона должна быть >0
        cout << "Периметр квадрата = " << std::fixed << std::setprecision(16) << storona * 4 << endl;

    }
    else {
        cout << "Введите корректные данные,сторона не может быть отрицательной";     //если число не положительное - выводим ошибку

    }

    return 0;
}