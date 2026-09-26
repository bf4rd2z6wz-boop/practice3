#include <iostream>
int main()
{
int x;
int level = 1;
std:: cout <<  "Введите число очков опыта: ";
std:: cin >> x;
if(x<1000)
{
    level;
}
else if(x<2500)
{
    level=2;
   

}
else if(x<5000)
{
    level=3;
    

}
else{
    level = 4;
}

std:: cout << "Ваш уровень: " << level << "\n";
}
