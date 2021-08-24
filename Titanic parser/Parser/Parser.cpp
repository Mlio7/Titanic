// Parser.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <regex>
#include <iomanip>



#include "Person.h"
#include "Passangers.h"

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


    //2. Розпарсити і вивести всі дані на екран

    Passangers s1("G:\\Learning C++\\!GIT\\Titanic\\Titanic parser\\Parser\\Raw file.csv");
    for (auto people : s1.getPassangers())
    {
        ShowPeople(people);
    }


    ////s1.WriteDataToFile(s1.getStudents(), "G:\\Learning C++\\Parser\\Parser\\out.csv");

    //3. Посортувати людей за гендерною ознакою і підрахувати кількість чоловіків та кількість жінок (count)
    s1.WriteDataToFile(s1.sortingBySex(), "G:\\Learning C++\\Parser\\Parser Titanic\\Parser\\Sorted_BySex.csv");
    for (auto people : s1.getPassangers())
    {
        ShowPeople(people);
    }

    //4. Вивести в два окремі файлі людей які вижили та людей, які загинули
    s1.WriteDataToFile(s1.getSurvivedList(), "G:\\Learning C++\\!GIT\\Titanic\\Titanic parser\\Parser\\SurvivedList.csv");
    s1.WriteDataToFile(s1.getDeadsList(), "G:\\Learning C++\\!GIT\\Titanic\\Titanic parser\\Parser\\DeadsList.csv");



    //5. Відсортувати в окремі три файли по назвах станцій, на яких люди сіли на судно
    s1.WriteDataToFile(s1.getStation_S(), "G:\\Learning C++\\!GIT\\Titanic\\Titanic parser\\Parser\\getStation_S_passengers.csv");
    s1.WriteDataToFile(s1.getStation_Q(), "G:\\Learning C++\\!GIT\\Titanic\\Titanic parser\\Parser\\getStation_Q_passengers.csv");
    s1.WriteDataToFile(s1.getStation_C(), "G:\\Learning C++\\!GIT\\Titanic\\Titanic parser\\Parser\\getStation_C_passengers.csv");


}
