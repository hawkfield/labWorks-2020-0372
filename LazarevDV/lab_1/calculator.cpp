#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    long double fv, sv;
    char sign, check;
    cout << "Добро пожаловать в калькулятор Дениса Лазарева!\n";   
    do { 
    cout << "Введите два числа и знак операции:\n";
    cin >> sv >> fv >> sign; //Здесь я сначала сделал fv, а потом sv, но в кейсе перепутал, поэтому, первое число sv, а второе fv
    switch (sign) {
    case '+': cout << sv << " + " << fv << " = " << sv + fv << endl; break;
    case '-': cout << sv << " - " << fv << " = " << sv - fv << endl; break;
    case '*': cout << sv << " * " << fv << " = " << sv * fv << endl; break;
    case '/': if (fv != 0) {
        cout << sv << " / " << fv << " = " << sv / fv << endl; break;
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
