#pragma once
#include "Mammel.h"
class Horse : public Mammel
{
private:
	int _speed;
public:
	Horse();
	Horse(string n);
	~Horse();
	void print() const;
	void makeNoise() const;
};

