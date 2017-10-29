/*
* Main.cpp
*
* Version information v0.1
* Author: Dr. Shane Wilson
* Date: 23/10/2017
* Description: Main for the lab 5 challenge two exercises (Objects and references)
* Copyright notice
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person {
private:
	std::string firstName_;
	std::string secondName_;
	std::string occupation_;
	int age_;
public:
	Person() {}

	Person(std::string firstName, std::string secondName, std::string occupation, int age) :
		firstName_{ firstName }, secondName_{ secondName }, occupation_{ occupation }, age_{ age } {}

	/*Person(std::string &firstName, std::string &secondName, std::string &occupation, int age) :
		firstName_{ firstName }, secondName_{ secondName }, occupation_{ occupation }, age_{ age } {}*/

	void SetName(std::string fName, std::string sName) {
		firstName_ = fName;
		secondName_ = sName;
	}

	std::string getName() {
		std::string name = firstName_ + " " + secondName_;
		return name;
	}

	void SetAge(int age) {
		age_ = age;
	}

	int GetAge() {
		return age_;
	}

};

bool Compare(Person &p1, Person &p2);

int main() {

	Person Paul{ "Paul", "Doherty", "Ninja", 33 };
	Person Mary{ "Mary", "McGonigle", "CTO", 28 };
	Person Paul2{ "Paul", "Doherty", "Ninja", 33 };
	string fname = "Terri";
	string sname = "McGonigle";
	string occupation = "Professional dog walker";
		

	bool same = Compare(Paul, Paul2);

	same = Compare(Paul, Mary);


	return 0;

}

bool Compare(Person &p1, Person &p2) {
	Person* personPtr1{ nullptr };
	Person* personPtr2{ nullptr };

	personPtr1 = &p1;
	personPtr2 = &p2;

	if (personPtr1->getName() != personPtr2->getName()) {
		return false;
	} else if(personPtr1->GetAge() != personPtr2->GetAge()){
		return false;
	}
	return true;

}
