#include <iostream>
#include <string>   
#include <windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "===========Меню========== " << endl;
    cout << "Для работы с числами - нажмите 1" << endl;
    cout << "Для работы со строками - нажмите 2" << endl;
    cout << "Для работы с простыми арифметическими действиями - нажмите 3" << endl;
    cout << "Для выхода - нажмите 0" << endl;

    int choise;
    cin >> choise;

    switch (choise)
    {
    case 1:
    {
        cout << "Выберите действие:\n" << endl;
        cout << "1 - Проверить число на знак\n" << endl;
        cout << "2 - Проверить число на чётность" << endl;

        int edenica;
        cin >> edenica;

        if (edenica == 1)
        {
            cout << "Введите число" << endl;
            int chislo;
            cin >> chislo;

            if (chislo < 0)
                cout << "Число отрицательное" << endl;
            else if (chislo > 0)
                cout << "Число положительное" << endl;
            else
                cout << "Число равно нулю" << endl;
        }
        else if (edenica == 2)
        {
            cout << "Введите число" << endl;
            int chislo;
            cin >> chislo;

            if (chislo % 2 == 0)
                cout << "Число чётное" << endl;
            else
                cout << "Число нечётное" << endl;
        }
        else
        {
            cout << "Неверный выбор" << endl;
        }
        break;
    }
    case 2:
    {
        cout << "=====Подменю=====" << endl;
        cout << "Чтобы вывести строку в обратном порядке - нажмите 1" << endl;
        cout << "Чтобы посчитать количество символов - нажмите 2" << endl;

        int bukvi;
        cin >> bukvi;

        switch (bukvi)
        {
        case 1:
        {
            cout << "Введите любое слово или предложение" << endl;

            string text;
            cin.ignore();          
            getline(cin, text);    

            cout << "Строка в обратном порядке: " << endl;
            for (int i = text.length() - 1; i >= 0; i--)
            {
                cout << text[i];
            }
            cout << endl; 
            break;
        }
        case 2:
        {
            cout << "Введите любое слово или предложение" << endl;

            string text;
            cin.ignore();          
            getline(cin, text);    

            cout << "Количество символов в строке: " << text.length() << endl;
            break;
        }
        default:
        {
            cout << "Неверный выбор действия" << endl;
            break;
        }
        } 
        break; 
    }

    case 3:
    {
        cout << "Работа с арифметическими действиями\n" << endl;
        cout << "Введите первое число\n " << endl;
        int chislo = 0;
        cin >> chislo;                                             

        cout << "Введите второе число\n" << endl;
        int chislo_number_dva = 0;
        cin >> chislo_number_dva;


        int summa = chislo + chislo_number_dva;
        int razn = chislo - chislo_number_dva;
        int umn = chislo * chislo_number_dva;
        int del = chislo / chislo_number_dva;


        cout << "Сумма " << summa << endl;
        cout << "Разница " << razn << endl;
        cout << "Умножение " << umn << endl;
        cout << "Деление " << del << endl;
        break;
    }
    case 0:
    {
        cout << "Выход" << endl;
        break;
    }
    default:
    {
        cout << "Неверный пункт меню" << endl;
        break;
    }
    } 

    return 0;
}