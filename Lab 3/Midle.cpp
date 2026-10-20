#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");
    double first_number, second_number, third_number;           // для ввода чисел
    double max_value, min_value;                                // результат

    cout << "Программа находит наименьшее и наибольшее число из трех введенных" << endl;
    cout << "Введите три числа через пробел в диапазоне от "
        << std::numeric_limits<double>::lowest() << " до "
        << std::numeric_limits<double>::max() << endl;

    cin >> first_number >> second_number >> third_number;

    // проверка ввдены ли числа и Проверка диапазона ввода
    if (cin.fail())
    {
        cout << "Ошибка введены не корректные данные" << endl;
        return 1;
    }
    else if (first_number < std::numeric_limits<double>::lowest() || first_number > std::numeric_limits<double>::max() ||
        second_number < std::numeric_limits<double>::lowest() || second_number > std::numeric_limits<double>::max() ||
        third_number < std::numeric_limits<double>::lowest() || third_number > std::numeric_limits<double>::max()
        )
    {
        cout << "Ошибка, числа должны быть в диапазоне от "
            << std::numeric_limits<double>::lowest() << " до "
            << std::numeric_limits<double>::max() << endl;
        return 1;
    }


    // поиск наибольшего
    if (first_number > second_number && first_number > third_number)     // если первое число наиболшее
    {
        max_value = first_number;
    }
    else if (second_number > first_number && second_number > third_number)// если второе число наиболшее
    {
        max_value = second_number;
    }
    else                                                                // если третье число наиболшее
    {
        max_value = third_number;
    }


    // поиск наименьшего
    if (first_number < second_number && first_number < third_number)     // если первое число наиболшее
    {
        min_value = first_number;
    }
    else if (second_number < first_number && second_number < third_number)// если второе число наиболшее
    {
        min_value = second_number;
    }
    else                                                                // если третье число наиболшее
    {
        min_value = third_number;
    }


    cout << "Наибольшее " << max_value << endl;
    cout << "Наименьшее " << min_value << endl;


    return 0;
}

