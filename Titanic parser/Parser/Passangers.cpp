#include "Passangers.h"

using namespace std;

Passangers::Passangers(std::string filePath)
{
	ifstream file(filePath);
	string lineContents;

	//кожний рядок засовуємо в lineContents, потым в вектор
	while (!file.eof())
	{
		getline(file, lineContents);
		people.push_back(Person(lineContents));
	}
	file.close();
}


std::vector<Person> Passangers::getPassangers()
{
	return this->people;
}

void Passangers::WriteDataToFile(std::vector<Person> new_students, std::string filePath)
{
	ofstream outFile(filePath);

	for (auto& person : new_students)
	{

		outFile << person.get_PassengerId() << ";"
			<< person.get_Survived() << ";"
			<< person.get_Pclass() << ";"
			<< person.get_Name() << ";"
			<< person.get_Sex() << ";"
			<< person.get_Age() << ";"
			<< person.get_SibSp() << ";"
			<< person.get_Parch() << ";"
			<< person.get_Ticket() << ";"
			<< person.get_Fare() << ";"
			<< person.get_Cabin() << ";"
			<< person.get_Embarked() << endl;
			    
	}
	outFile.close();
}

std::vector<Person> Passangers::sortingBySex()
{
	vector<Person> copy_passangers;
	copy(this->people.begin(), this->people.end(), back_inserter(copy_passangers));
	sort(copy_passangers.begin(), copy_passangers.end(), [](Person& s1, Person& s2) 
		{
		return s1.get_Sex() < s2.get_Sex(); 
		
		}	);// < = ASC  > == DESC
	
	return copy_passangers;
}

std::pair<unsigned int, unsigned int> Passangers::countGenders() const {
	std::pair<unsigned int, unsigned int> count {0,0};

	for (const auto& person : people) {
		if (person.get_Sex() == "Female") ++count.second;
		else ++count.first;
	}

	return count;
}


std::vector<Person> Passangers::sortingByStation()
{
	vector<Person> copy_passangers;
	copy(this->people.begin(), this->people.end(), back_inserter(copy_passangers));
	sort(copy_passangers.begin(), copy_passangers.end(), [](Person& s1, Person& s2) {
		return s1.get_Embarked() < s2.get_Embarked(); });// < = ASC  > == DESC
	return copy_passangers;
}

std::vector<Person> Passangers::getSurvivedList()
{
	vector<Person> copy_passangers;
	copy_if(people.begin(), people.end(), back_inserter(copy_passangers), [](Person& s)
		{
			return s.get_Survived() == 1;
		});
	return std::vector<Person>(copy_passangers);
}

std::vector<Person> Passangers::getDeadsList()
{
	vector<Person> copy_passangers;
	copy_if(people.begin(), people.end(), back_inserter(copy_passangers), [](Person& s)
		{
			return s.get_Survived() == 0;
		});
	return std::vector<Person>(copy_passangers);
}

std::vector<Person> Passangers::getStation_S()
{
	vector<Person> copy_passangers;
	copy_if(people.begin(), people.end(), back_inserter(copy_passangers), [](Person& s)
		{
			return s.get_Embarked() == 'S';
		});
	return std::vector<Person>(copy_passangers);
}


std::vector<Person> Passangers::getStation_Q()
{
	vector<Person> copy_passangers;
	copy_if(people.begin(), people.end(), back_inserter(copy_passangers), [](Person& s)
		{
			return s.get_Embarked() == 'Q';
		});
	return std::vector<Person>(copy_passangers);
}

std::vector<Person> Passangers::getStation_C()
{
	vector<Person> copy_passangers;
	copy_if(people.begin(), people.end(), back_inserter(copy_passangers), [](Person& s)
		{
			return s.get_Embarked() == 'C';
		});
	return std::vector<Person>(copy_passangers);
}



std::vector<Person> Passangers::GetUnique()
{
	vector<Person> copy_passangers;
	copy(this->people.begin(), this->people.end(), back_inserter(copy_passangers));
	auto iter= unique(copy_passangers.begin(), copy_passangers.end(),[](Person& s1, Person&s2) {
		return s1.get_Name() == s2.get_Name();
		});
	copy_passangers.erase(iter, copy_passangers.end());


	return std::vector<Person>(copy_passangers);


}


//void StudentsList::SortNamesASC(std::vector<Student> sort_students)
//{
//	sort(sort_students.begin(), sort_students.end());
//}
//
////sort(sort_students.begin(), sort_students.end(), Desk); cout << "Desk:";
////for (auto i : sort_students) { print(i); }cout << endl;
//
//bool Desk(int a, int b) { return a > b; };
//void print(int a) { cout << "[" << a << "]"; };