
#include "stdafx.h" 
#include "Park.h"

#include <iostream>

Park::Park() {}

void Park::addDinosaur(Dinosaur d) {
	if (count < 5) {
		dinosaurs[count] = d;
		count++;
	}
}

void Park::list() {
	std::cout << "----- In the park:" << std::endl;
	for (int i = 0; i < count; ++i) {
		std::cout << dinosaurs[i].getName() << std::endl;
	}
	std::cout << "-----" << std::endl;
}

void Park::openGate() {
	// hier een dinosaurus uit de array halen
	//Dinosaur d = dinosaurs[count];
	// als count gelijk is aan nul kunnen er geen dinosaurussen meer ontsnappen omdat je geen -1 dinosaurs kan hebben
	if (count >= 0) 
	{
		count--;
		std::cout << "ohh no Stegosaurus has escaped" << std::endl;
	}
}

void Park::dinosaurCaptured() 
{
	if (count < 5)
	{
		count++;
		std::cout << "You captured a Stegosaurus" << std::endl;
	}
}