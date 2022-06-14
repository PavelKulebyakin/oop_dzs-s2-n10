#ifndef HUMAN_H
#define HUMAN_H

#include <iostream>

class Human
{
protected:
	std::string surname;
	std::string name;
	std::string midname;
	int age;

public:

	Human(std::string surname = " ", std::string name = " ", std::string midname = " ", int age = 18)
	{
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
	}
	~Human() {}
	virtual void Print() = 0;

};

class Student : public Human
{
protected:
	bool on_lesson;

public:
	Student(std::string surname = " ", std::string name = " ", std::string midname = " ", int age = 18)
	{
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
	}
	~Student() {}
	void Print() override
	{
		std::cout
			<< surname << " " << name << " " << midname
			<< " age: " << age
			<< " on lesson: " << (on_lesson ? "TRUE" : "FALSE")
			<< std::endl;
	}
};

class Boss : public Human
{
protected:
	int number_of_workers;

public:
	Boss(std::string surname = " ", std::string name = " ", std::string midname = " ", int age = 18, int number_of_workers = 5)
	{
		this->surname = surname;
		this->name = name;
		this->midname = midname;
		this->age = age;
		this->number_of_workers = number_of_workers;
	}
	~Boss() {}
	void Print() override
	{
		std::cout
			<< surname << " " << name << " " << midname
			<< " age: " << age
			<< " number of workers: " << number_of_workers << " "
			<< std::endl;
	}

};

#endif // !HUMAN_H

