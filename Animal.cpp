#include "Animal.h"

void Animal::print() const {
	cout << "(Animal) Animal's serial number : " << this->_serialNumber << endl;
	cout << "(Animal) Animal's name : " << this->_name << endl;
	cout << "(Animal) Animal's age : " << this->_age << endl;
}
void Animal::makeNoise() const {
	cout << "(Animal) Animal noise...ZZZ..." << endl;
}
Animal::Animal() {
	this->_serialNumber = _counterForSerial++;
	this->_type = 0;
	cout << "(Animal) Enter the animal's name : ";
	cin >> this->_name;
	cout << "(Animal) Enter the animal's age : ";
	cin >> this->_age;
	cout << "(Animal) Animal constructed" << endl;

}
Animal::Animal(string n) {
	this->_serialNumber = _counterForSerial++;
	this->_type = 0;
	//cout << "(Animal) Enter the animal's name : ";
	//cin >> this->_name;
	this->_name = n;
	cout << "(Animal) Enter the animal's age : ";
	cin >> this->_age;
	cout << "(Animal) Animal constructed" << endl;
}
Animal::~Animal() {
	cout << "(Animal) Animal destroyed" << endl;
}
