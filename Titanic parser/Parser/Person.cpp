#include "Person.h"

using namespace std;
Person::Person(std::string personInformationParserStream)
{
	stringstream  peoplesstream(personInformationParserStream);
	//takes everything after space, order of variables must be same as in a file

	 peoplesstream >> this->PassengerId;
	 peoplesstream >> this->Survived;
	 peoplesstream >> this->Pclass;
	 peoplesstream >> this->Name;
	 peoplesstream >> this->Sex;
	 peoplesstream >> this->Age;
	 peoplesstream >> this->SibSp;
	 peoplesstream >> this->Parch;
	 peoplesstream >> this->Ticket;
	 peoplesstream >> this->Fare;
	 peoplesstream >> this->Cabin;
	 peoplesstream >> this->Embarked;




};



int Person::get_PassengerId()
{
	return this->PassengerId;
}

int Person::get_Survived()
{
	return this->Survived;
}

int Person::get_Pclass()
{
	return this->Pclass;
}

std::string Person::get_Name()
{
	return this->Name;
}

std::string Person::get_Sex() const
{
	return this->Sex;
}

float Person::get_Age()
{
	return this->Age;
}

int Person::get_SibSp()
{
	return this->SibSp;
}

int Person::get_Parch()
{
	return this->Parch;
}

std::string Person::get_Ticket()
{
	return this->Ticket;
}

float Person::get_Fare()
{
	return this->Fare;
}

std::string Person::get_Cabin()
{
	return this->Cabin;
}

char Person::get_Embarked()
{
	return this->Embarked;
}
