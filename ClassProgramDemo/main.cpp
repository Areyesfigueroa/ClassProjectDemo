#include <iostream>
using namespace std;

class Person 
{
	int age;
	string name;
public:
	Person(): age(0), name("") {}
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
	p1.setAge(21);
	cout << "Person age: "<<p1.getAge() << endl;

	system("Pause");
	return 0;
}