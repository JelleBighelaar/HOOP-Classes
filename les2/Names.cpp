#include "Names.h"
#include <string>
#include <iostream>

using namespace std;


	Module::Module(string name)
	{
		nameModule = &name;
	}

	Student::Student(string name, int ec)
	{
		nameStudent = &name;
		ecStudent = &ec;
	}

	Docent::Docent(string name)
	{
		nameDocent = &name;
	}

