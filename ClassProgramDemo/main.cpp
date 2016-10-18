#include <iostream>
using namespace std;

class Person 
{
	int age;
	string name;
public:
	Person(): age(0), name("") {}
};

int main() 
{
	cout << "Program first release is done" << endl;
	Person p1;

	system("Pause");
	return 0;
}