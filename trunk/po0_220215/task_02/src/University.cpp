#include "University.h"
#include <iostream>
#include <string>

using namespace std;

Person::Person() : Person("name") {}

Person::Person(string_view name1) : name(name1) {
	if (head == nullptr) {
		head = this;
	}
	next = nullptr;
	if (lastObject != nullptr) {
		lastObject->setNext(this);
	}
	lastObject = this;
}
void Person::printHead() {
	Person* p = head;
	while (p != nullptr) {
		cout << p->getName() << endl;
		p = p->next;
	}
}
void Person::show() {
	cout << "Name: " << name << endl;
}
void Person::printVirtual() {
	cout << "Person (virtual function)" << endl;
}

Person* Person::getHead() {
	return head;
}
Person* Person::getNext() {
	return next;
}
void Person::setNext(Person* next1) {
	next = next1;
}
Person* Person::getThis() {
	return this;
}
string Person::getName()  const {
	return name;
}
Person* Person::head = nullptr;
Person* Person::lastObject = nullptr;



Chair::Chair(string_view name1, const int numOfSubordinates1)
	: Person(name1), numOfSubordinates(numOfSubordinates1) {
}
void Chair::printVirtual() {
	cout << "Chair (virtual function)" << endl;
}
void Chair::show() {
	Person::show();
	cout << "\t- Number of Subordinates: " << numOfSubordinates << endl;
}



Teacher::Teacher(string_view name1, const int workExperience1)
	: Person(name1), workExperience(workExperience1) {
}
void Teacher::printVirtual() {
	cout << "Teacher (virtual function)" << endl;
}
void Teacher::show() {
	Person::show();
	cout << "\t- Work experience: " << workExperience << endl;
}



Student::Student(string_view name1, const int averageGrade1)
	: Person(name1), averageGrade(averageGrade1) {
}
void Student::printVirtual() {
	cout << "Chair (virtual function)" << endl;
}
void Student::show() {
	Person::show();
	cout << "\t- Average Grade: " << averageGrade << endl;
}