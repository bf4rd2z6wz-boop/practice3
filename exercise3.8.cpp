#include <iostream>
int main()
{
 int firstSalary;
 int secondSalary;
 int thirdSalary;
 int maxSalary;
 int minSalary;
 std:: cout << "Введите зарплату первого сотрудника: " ;
 std:: cin >> firstSalary;
 std:: cout << "Введите зарплату второго сотрудника: " ;
 std:: cin >> secondSalary;
 std:: cout << "Введите зарплату третьего сотрудника: " ;
 std:: cin >> thirdSalary;
 if(firstSalary>=secondSalary && firstSalary>=thirdSalary)
 {
    maxSalary= firstSalary;
    if(secondSalary>thirdSalary)
    {
        minSalary = thirdSalary; 
    }
   else 
    {
        minSalary = secondSalary; 
    }
   
 }
 else if(secondSalary>=firstSalary && secondSalary>=thirdSalary)
 {
    maxSalary= secondSalary;
    if(firstSalary>thirdSalary)
    {
        minSalary = thirdSalary; 
    }
   else 
    {
        minSalary = firstSalary; 
    }
   
 }
 else if(thirdSalary>=firstSalary && thirdSalary>=secondSalary)
 {
    maxSalary= thirdSalary;
    if(secondSalary>firstSalary)
    {
        minSalary = firstSalary; 
    }
   else 
    {
        minSalary = secondSalary; 
    }
 }

 std:: cout << "Самая высокая зарплата в отделе: " << maxSalary << " рублей" << "\n";
 int distinction = maxSalary- minSalary;
 int averageSalary = (firstSalary+secondSalary+thirdSalary)/3;
 std:: cout << "Разница между самой высокой и самой низкой зарплатой в отделе: " << distinction << " рублей" << "\n";
 std:: cout << "Средняя зарплата в отделе: " << averageSalary << " рублей" << "\n";
}