#include <iostream>
#include <windows.h>
using namespace std;
enum
{
    Ponedelnik = 1,
    vtornik,
    sreda,
    chetverg,
    pytnicha,
    subbota,
    voscresenie,


};

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    cout << "Данная программа определяет день недели" << endl;
    cout << "Введите 1" << endl;
    cout << "Введите 2" << endl;
    cout << "Введите 3" << endl;
    cout << "Введите 4" << endl;
    cout << "Введите 5" << endl;
    cout << "Введите 6" << endl;
    cout << "Введите 7" << endl;


    int choise;
    cin >> choise;

    switch (choise)
    {

    case Ponedelnik:
        cout << "Сегодня понедельник" << endl;
        break;
    case vtornik:
        cout << "Сегодня вторник" << endl;
        break;
    case sreda:
        cout << "Сегодня среда" << endl;
        break;
    case chetverg:
        cout << "Сегодня четверг" << endl;
        break;
    case pytnicha:
        cout << "Сегодня пятница" << endl;
        break;
    case subbota:
        cout << "Сегодня суббота" << endl;
        break;
    case voscresenie:
        cout << "Сегодня воскресенье" << endl;
        break;


    default:
        cout << "Введите число в диапозоне (1-7)" << endl;
        break;
    }

    return 0;
}