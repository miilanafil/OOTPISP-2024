#pragma once

#include <string>
#include <iostream>

class Person {
protected:
	static Person* head;
	static Person* lastObject;
public:
	std::string name;
	Person* next;
	Person();
	explicit Person(std::string_view name);
	virtual ~Person() = default;

	static void printHead();
	virtual void show();
	virtual void printVirtual();
	Person* getHead();
	Person* getNext();
	void setNext(Person* next);
	Person* getThis();
	std::string getName() const;
	int getAmount() const;
};



class Student : public Person {
public:
	Student(std::string_view name, const int averageGrade);
	~Student() override = default;

	void printVirtual() override;
	void show() override;
private:
	int averageGrade;
};




class Teacher : public Person {
public:
	Teacher(std::string_view name, const int workExperience);
	~Teacher() override = default;

	void printVirtual() override;
	void show() override;
private:
	int workExperience;
};



class Chair : public Person {  //Chair eto zav kafedroy
public:
	Chair(std::string_view name, const int numOfSubordinates);
	~Chair() override = default;

	void printVirtual() override;
	void show() override;
private:
	int numOfSubordinates;
};