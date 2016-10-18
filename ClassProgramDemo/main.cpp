#include <iostream>
#include <string>
using namespace std;

class Person 
{
	int age;
	string name;
public:
	Person(): age(0), name("") {}
	void setAge(int age);
	int getAge();
	void setName(string name);
	const string& getName() const;
};

void Person::setAge(int age) 
{
	this->age = age;
}

int Person::getAge() 
{
	return age;
}

void Person::setName(string name) 
{
	this->name = name;
}

const string& Person::getName() const 
{
	return this->name;
}

int main() 
{
	cout << "Program first release is done" << endl;
	Person p1;
	p1.setAge(21);
	p1.setName("Aliel");
	cout << "Person name: " << p1.getName() << endl;
	cout << "Person age: "<<p1.getAge() << endl;

	system("Pause");
	return 0;
}