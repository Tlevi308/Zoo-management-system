#pragma once
#include "Lion.h"
#include "Butterfly.h"
#include "Tiger.h"
#include "Horse.h"

class Zoo
{
private:
	Animal** _arr;
	int _size;
	string _zooName;
public:
	Zoo(string n);
	~Zoo();
	void printAllAnimals() const;
	void animalsParty() const;
	Animal* findAnimalBySerialNumber() const;
	int findAnimalByName() const;
	void addAnAnimal();
	void removeAnimal();
	void SortAllAnimalsByName();
	void SortAllAnimalsByAge();
	void MENU();
	int countAnimalType() const;
	int counterMammels() const;
	operator int() const { return this->_size; }
	Zoo& operator+=(Animal* ptr) {
		Animal** temp = new Animal * [this->_size + 1];
		for (int i = 0; i < this->_size; i++)
			temp[i] = this->_arr[i];
		delete[] this->_arr;
		this->_size++;
		this->_arr = temp;
		this->_arr[this->_size - 1] = ptr;
		return *this;
	}

};

