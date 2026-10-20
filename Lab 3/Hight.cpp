#include <iostream>
using namespace std;


int main()
{
    setlocale(LC_ALL, "ru");

    double first_number, second_number, retult;
    char op;         // для ввода оперции
    cout << "Расширенный калькулятор" << endl;
    cout << "Поддерживаемые операции  +, -, *, /, ^ (возведение в степень), % (остаток). " << endl;
    cout << "Введите выражение, например для возведения в степень 5.5 ^ 2 " << endl <<
        "или для перемножения 2.2 * 3 " << endl;

    cin >> first_number >> op >> second_number;

    if (cin.fail())
    {
        cout << "Ошибка введены не корректные данные" << endl;
        return 1;
    }
    else if (first_number < std::numeric_limits<double>::lowest() || first_number > std::numeric_limits<double>::max() ||
        second_number < std::numeric_limits<double>::lowest() || second_number > std::numeric_limits<double>::max())
    {
        cout << "Ошибка, числа должны быть в диапазоне от "
            << std::numeric_limits<double>::lowest() << " до "
            << std::numeric_limits<double>::max() << endl;
    }
    else
    {
        if (op == '+')
        {
            retult = first_number + second_number;
            cout << first_number << " + " << second_number << " = " << retult << endl;
        }
        else if (op == '-')
        {
            retult = first_number - second_number;
            cout << first_number << " - " << second_number << " = " << retult << endl;
        }
        else if (op == '*')
        {
            retult = first_number * second_number;
            cout << first_number << " * " << second_number << " = " << retult << endl;
        }
        else if (op == '/')
        {
            if (second_number == 0)
            {
                cout << "Ошибка - деление на ноль не возможно" << endl;
                return 2;
            }
            else
            {
                retult = first_number / second_number;
                cout << first_number << " / " << second_number << " = " << retult << endl;
            }

        }
        else if (op == '^')
        {
            retult = pow(first_number, second_number);
            cout << first_number << " ^ " << second_number << " = " << retult << endl;
        }
        else if (op == '%')
        {
            static_cast<int>(retult);
            retult = static_cast<int>(first_number) % static_cast<int>(second_number);
            cout << first_number << " ^ " << second_number << " = " << retult << endl;
        }
        else
        {
            cout << "Ошибка: неизвестная операция ... " << op << endl;
        }
    }

    return 0;
}