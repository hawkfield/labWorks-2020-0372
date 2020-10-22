#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    long double secondvalue, firstvalue;
    char sign, check;
    cout << "Добро пожаловать в калькулятор Дениса Лазарева!\n";   
    do { 
    cout << "Введите два числа и знак операции:\n";
    cin >> firstvalue >> secondvalue >> sign;
    switch (sign) {
    case '+': cout << firstvalue << " + " << secondvalue << " = " << firstvalue + secondvalue << endl; break;
    case '-': cout << firstvalue << " - " << secondvalue << " = " << firstvalue - secondvalue << endl; break;
    case '*': cout << firstvalue << " * " << secondvalue << " = " << firstvalue * secondvalue << endl; break;
    case '/': if (secondvalue != 0) {
        cout << firstvalue << " / " << secondvalue << " = " << firstvalue / secondvalue << endl; break;
    }
            else
    {
        cout << "Вы попробовали поделить на ноль, попробуйте еще раз\n"; 
        break;
    }
    default: cout << "Вы ввели неверный знак, попробуйте еще раз\n"; break; 
    }
    cout << "Нажмите Enter для продолжения или Esc для выхода из программы\n";
    check = _getch();
    } while (check != 27);
    return 0;
}
