#pragma once

#include <string>
#include <iostream>
using namespace std;


class Module
{
	private:
		string * nameModule;
		string module;
	public:
		//constructor
		Module(string);
		void myModule(string m) 
		{
			module = m;
		}



};

class Student
{
	private:
		string * nameStudent;
		int * ecStudent;

	public:
		Student(string,int);

};

class Docent
{
	private:
		string * nameDocent;

	public:

		Docent(string);

};

class List
{
	private:

		string list;
	public:
		//constructor
		List()
		{
			std::cout << list << std::endl;
		}

		void myList(string l)
		{
			list = l;
		}
};