#pragma once
#include <iostream>
#include <algorithm>
#include <regex>
#include <vector>//Save data from a file into a Vector
#include <fstream>//allows to read a file
#include "Student.h"



class Passangers
{
	std::vector<Person> people;
	int FemaleCnt;
	int MaleCnt;
public:
	Passangers(std::string filePath);
	int get_FemaleCnt();
	int get_MaleCnt(); 
	std::vector<Person> getPassangers();
	void WriteDataToFile(std::vector<Person> new_students, std::string filePath);
	std::vector<Person> sortingBySex(int FemaleCnt ,int MaleCnt);
	std::vector<Person> sortingByStation();
	/*std::vector<Person> GetSurvived();*/
	std::vector<Person> GetUnique();
};

//bool Desk(int a, int b);
//void print(int a);