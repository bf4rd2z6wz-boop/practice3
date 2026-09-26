#include <iostream>
int main()
{
    int firstNumber;
    int secondNumber;
    std:: cout<< "Введите первое число: ";
    std:: cin >> firstNumber;
    std:: cout<< "Введите второе число: ";
    std:: cin >> secondNumber;
    int remainder = firstNumber % secondNumber;
    int amount = firstNumber + secondNumber;
    if(remainder == 0)
{
    std:: cout << "Да," << firstNumber << " делится на  " << secondNumber << " без остатка!";

}
else{
     std:: cout << "Нет," << firstNumber << " не делится на  " << secondNumber << " без остатка!";

}
  }
