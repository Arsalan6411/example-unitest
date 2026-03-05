#include<iostream>
#include"../StaticLib1/Person.h"
using namespace std;

int main()
{

	Person p = { "Oleg", 35, Person::MALE };

	cout << p.GetName() << endl;

	return 0;
}