#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <sstream>//Parsign data library



class Person
{

	int PassengerId;
	int Survived;
	int Pclass;
	std::string Name;
	std::string Sex;
	float Age;
	int SibSp;
	int Parch;
	std::string Ticket;
	float Fare;
	std::string Cabin;
	char Embarked;
public:
	Person(std::string personInformationParserStream);
	int get_PassengerId();
	int get_Survived();
	int get_Pclass();
	std::string get_Name();
	std::string get_Sex();
	float get_Age();
	int get_SibSp();
	int get_Parch();
	std::string get_Ticket();
	float get_Fare();
	std::string get_Cabin();
	char get_Embarked();

};

