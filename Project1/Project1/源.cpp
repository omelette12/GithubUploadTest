#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak()
	{
		cout << "���ﳪ��" << endl;
	}
};
class Dog : public Animal
{
public:
	virtual void speak()
	{
		cout << "������" << endl;
	}
};

void DoBussiness(Animal &animal)
{
	animal.speak();
}
int main()
{
	Dog dog;
	DoBussiness(dog);


	system("pause");
	return 0;
}