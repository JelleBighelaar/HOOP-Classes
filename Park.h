#pragma once

#include <vector>

#include "Dinosaur.h"

class Park {
public:
	Park();

	void addDinosaur(Dinosaur d);

	void list();

	void openGate();

	void dinosaurCaptured();

private:
	Dinosaur dinosaurs[5];
	int count = 0;
};