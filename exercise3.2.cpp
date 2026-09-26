#include <iostream>
int main()
{
    int firstNumber;
    int secondNumber;
    int sum;
    std:: cout<< "Введите первое число: ";
    std:: cin >> firstNumber;
     std:: cout<< "Введите второе число: ";
    std:: cin >> secondNumber;
    std:: cout<< "Введите их сумму: ";
    std:: cin >> sum;
    int amount = firstNumber + secondNumber;
    if(sum==amount)
    {
        std:: cout << "Верно!";
    }
    else
    {
        std:: cout << "Ошибка!Верный результат: " << amount << "\n";
    }
}
