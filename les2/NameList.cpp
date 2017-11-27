
#include "Names.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	Module m1("Math"), m2("Economics"), m3("Gymmastic");

	Docent d1 ("Edwin"), d2("Kees"), d3("Pieter");

	Student s1 ("Frankie", 53), s2("David", 26), s3("Bart", 56), s4("Thomas", 54), s5("Claudia", 58), s6("Wesley", 48), s7("Lisa", 43), s8("Pascal", 52), s9("Henry", 48), s10("Peter", 41);


	List l1[5]( Module m1, Docent d1, Student s3, Student s4, Student s7, Student s9), l2[4](Module m2, Docent d2, Student s1, Student s5, Student s8), l3[4](Module m3, Docent d3, Student s2, Student s6, Student s10);


	list->obj(l1);
	list->obj(l2);
	list->obj(l3);

	cout << list(l1,l2,l3);



}