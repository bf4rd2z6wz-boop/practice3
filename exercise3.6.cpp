#include <iostream>
int main()
{
int men;
int barbers;
std:: cout << "Сколько мужчин живет в городе: ";
std:: cin >> men;

std:: cout << "Сколько барберов уже в городе: ";
std:: cin >> barbers;


int barberMonth= 8*30;
int recomendedBarber = men/barberMonth;
if(men%barberMonth>0)
{
    recomendedBarber +=1;
}

if(barbers>=recomendedBarber)
{
    std:: cout << "Барберов достаточно";
}
else
{
    int remainingBarber= recomendedBarber - barbers;
      std:: cout << "Барберов недостаточно,нужно еще " << remainingBarber << " барберов" ;
}








}