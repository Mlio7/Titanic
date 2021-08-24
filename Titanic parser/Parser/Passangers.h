#pragma once
#include <iostream>
#include <algorithm>
#include <regex>
#include <vector>//Save data from a file into a Vector
#include <fstream>//allows to read a file
#include "Person.h"



class Passangers
{
	std::vector<Person> people;


public:
	Passangers(std::string filePath);
	std::vector<Person> getPassangers();
	void WriteDataToFile(std::vector<Person> new_students, std::string filePath);
	std::vector<Person> sortingBySex();

	std::vector<Person> sortingByStation();
	std::vector<Person> getSurvivedList();
	std::vector<Person> getDeadsList();
	std::vector<Person> getStation_S();
	std::vector<Person> getStation_Q();
	std::vector<Person> getStation_C();
	std::vector<Person> GetUnique();

	std::pair<unsigned int, unsigned int> countGenders() const;
};

//bool Desk(int a, int b);
//void print(int a);