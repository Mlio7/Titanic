// Parser.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <regex>
#include <iomanip>



#include "Student.h"
#include "StudentsList.h"

void ShowPeople(Person people)
{
    std::cout << "ID: "  << std::setw(3) << people.get_PassengerId()
        << std::setw(3) << "  Survived:\t" << std::setw(1) << people.get_Survived()
        << std::setw(3)  << "  PClass:\t" << std::setw(2) << people.get_Pclass()
        << std::setw(2)  << "  Name:" << std::setw(58) << people.get_Name()
        << std::setw(1)  << "  Sex:" << std::setw(4) << people.get_Sex()
        << std::setw(0)  << "  Age:" << std::setw(2) << people.get_Age()
        << std::setw(2)  << "  SibSp:" << std::setw(10) << people.get_SibSp()
        << std::setw(2)  << "  Parch:" << std::setw(10) << people.get_Parch()
        << std::setw(5)  << "  Ticket:" << std::setw(10) << people.get_Ticket()
        << std::setw(5)  << "  Fare:" << std::setw(10) << people.get_Fare()
        << std::setw(2)  << "  Cabin:" << std::setw(10) << people.get_Cabin()
        << std::setw(1)  << "  Embarked:" << std::setw(10) << people.get_Embarked() << std::endl;
}


int main()
{
    //Student student("Muhammed MacIntyre 18 192 86.04 muhammed_macintyre@mail.net");
    /*ShowStudent(student);*/

    Passangers s1("G:\\Learning C++\\Parser\\Parser Titanic\\Parser\\titanic_passenger.csv");
    //for (auto people : s1.getPassangers())
    //{
    //    ShowPeople(people);
    //}

    //s1.WriteDataToFile(s1.getStudents(), "G:\\Learning C++\\Parser\\Parser\\out.csv");

    s1.WriteDataToFile(s1.sortingBySex(), "G:\\Learning C++\\Parser\\Parser Titanic\\Parser\\Sorted_BySex.csv");

    //s1.WriteDataToFile(s1.GetSurvived(), "G:\\Learning C++\\Parser\\Parser Titanic\\Parser\\Survived.csv");
    //s1.WriteDataToFile(s1.GetUnique(), "G:\\Learning C++\\Parser\\Parser Titanic\\Parser\\titanic_passengerUnique.csv");


}
