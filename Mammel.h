#pragma once
#include "Animal.h"
class Mammel : public Animal
{
private:
	bool _isGotMilk;
public:
	Mammel();
	Mammel(string n);
	~Mammel();
	void print() const;
	void makeNoise() const;
	void eat() const { cout << "I'm eating..." << endl; }
};

