#include <iostream>
int main()
{
    int profit;
    int tax;
    std:: cout << "Введите свой доход: ";
    std:: cin >> profit;
    if(profit<=10000)
    {
        tax = profit*13/100;
    }
    else if(profit>10000 && profit<=50000)
    {

        tax = (profit-10000)* 20/100 + 10000 * 13/100;
    }
     else if(profit>50000)
    {

        tax = (profit-50000)* 30/100 + (50000-10000) * 20/100 + 10000*13/100;
    }
    std:: cout << "Налог составляет" << tax << " рублей";
}