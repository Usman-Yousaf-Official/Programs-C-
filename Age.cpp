#include <iostream>

int main ()
{
int age1, age2, age3, age4, age5, age6, age7, age8, age9, age10;
int Totalage;
int Avgage;
std::cout <<"Please enter the age of student 1 = ";
std::cin >>age1;
std::cout <<"Please enter the age of student 2 = ";
std::cin >>age2;
std::cout <<"Please enter the age of student 3 = ";
std::cin >>age3;
std::cout <<"Please enter the age of student 4 = ";
std::cin >>age4;
std::cout <<"Please enter the age of student 5 = ";
std::cin >>age5;
std::cout <<"Please enter the age of student 6 = ";
std::cin >>age6;
std::cout <<"Please enter the age of student 7 = ";
std::cin >>age7;
std::cout <<"Please enter the age of student 8 = ";
std::cin >>age8;
std::cout <<"Please enter the age of student 9 = ";
std::cin >>age9;
std::cout <<"Please enter the age of student 10 = ";
std::cin >>age10;
Totalage = age1+ age2+age3+age4+age5+age6+age7+age8+age9+age10;
std::cout <<"Total age = ";
std::cout <<Totalage;
Avgage = Totalage/10;
std::cout <<"Average Age = ";
std::cout << Avgage;
}

