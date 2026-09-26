#include <iostream>
int main()
{
int day;
std::string general = "Чай";
std::string monday = "понедельник";
std::string tuesday = "вторник";
std::string wednesday = "среда";
std::string thursday = "четверг";
std::string friday = "пятница";
std::string saturday = "суббота";
std::string sunday = "воскресенье";
std:: cout << "Введите день недели(1-7): ";
std:: cin >> day;
if(day==1)
{
    std:: cout << "Меню сегодня ("<< monday <<"):" << "\n";
std:: cout << "Борщ со сметаной" << "\n";
std:: cout << "Салат «Витаминный» с капустой" << "\n";
std:: cout << "Мясные тефтели с гречкой" << "\n";
std:: cout << general << "\n";
}
else if(day==2)
{
    std:: cout << "Меню сегодня ("<< tuesday <<"):" << "\n";
std:: cout << "Харчо" << "\n";
std:: cout << "Салат «Оливье»" << "\n";
std:: cout << "Баварские колбаски с тушеной капустой" << "\n";
std:: cout << general << "\n";
}
else if(day==3)
{
    std:: cout << "Меню сегодня ("<< wednesday  <<"):" << "\n";
std:: cout << "Грибной суп-пюре с сухариками" << "\n";
std:: cout << "Салат «Греческий»" << "\n";
std:: cout << "Запеченная горбуша с рисом" << "\n";
std:: cout << general << "\n";
}
else if(day==4)
{
    std:: cout << "Меню сегодня ("<< thursday  <<"):" << "\n";
std:: cout << "Гороховый суп с копченостями" << "\n";
std:: cout << "Салат «Цезарь» с креветками" << "\n";
std:: cout << "Куриная ножка с картофельным пюре" << "\n";
std:: cout << general << "\n";
}
else if(day==5)
{
    std:: cout << "Меню сегодня ("<< friday  <<"):" << "\n";
std:: cout << "Солянка сборная мясная" << "\n";
std:: cout << "Салат «Мимоза»" << "\n";
std:: cout << "Стейк из свинины с запеченным картофелем" << "\n";
std:: cout << general << "\n";
}
else if(day==6)
{
    std:: cout << "Меню сегодня ("<< saturday  <<"):" << "\n";
std:: cout << "Сырный крем-суп с гренками" << "\n";
std:: cout << "Салат «Капрезе»" << "\n";
std:: cout << "Паста Карбонара" << "\n";
std:: cout << general << "\n";
}
else if(day==7)
{
    std:: cout << "Меню сегодня ("<< sunday  <<"):" << "\n";
std:: cout << "Куриный бульон с лапшой и яйцом" << "\n";
std:: cout << "Теплый салат с баклажанами" << "\n";
std:: cout << "Бефстроганов с макаронами" << "\n";
std:: cout << general << "\n";

}

}