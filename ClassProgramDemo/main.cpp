#include <iostream>
using namespace std;

class Person 
{
	int age;
	string name;
public:
	Person(int cAge = 21, string cName = "Aliel"): age(cAge), name(cName) {}
	void setAge(int age);
	int getAge();
};

void Person::setAge(int age) 
{
	this->age = age;
}

int Person::getAge() 
{
	return age;
}

int main() 
{
	cout << "Program first release is done" << endl;
	Person p1;
	cout << "Person age: "<<p1.getAge() << endl;

	system("Pause");
	return 0;
}