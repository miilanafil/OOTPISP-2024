#include <iostream>
#include <string>
#include "University.h"

using namespace std;

int main() {
	auto comp1 = Person("name1");
	auto comp2 = Student("name2", 40);
	auto comp3 = Teacher("name3", 15);
	auto comp4 = Chair("name4", 17);
	comp1.show();
	comp2.show();
	comp3.show();
	comp4.show();
	cout << endl;
	Person::printHead();
	return 0;
}
