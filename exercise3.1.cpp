#include <iostream>
int main()
{
    int firstNumber;
    int secondNumber;
    std:: cout<< "Введите первое число: ";
    std:: cin >> firstNumber;
     std:: cout<< "Введите второе число: ";
    std:: cin >> secondNumber;
    if(firstNumber>secondNumber)
    {
         std:: cout<< "Наименьшее число: " <<secondNumber << "\n" ;
    }
    else if(firstNumber<secondNumber)
    {
        std:: cout<< "Наименьшее число: " << firstNumber << "\n" ;
    }

    else
    {
        std:: cout<< "Числа равны";
    }
}
