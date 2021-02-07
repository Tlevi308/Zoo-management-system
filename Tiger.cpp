#include "Tiger.h"

Tiger::Tiger() {
	this->_type = 5;
	cout << "(Tiger) Enter the number of souls : ";
	cin >> this->_numOfSouls;
	cout << "(Tiger) Tiger constructed" << endl;
}
Tiger::~Tiger() {
	cout << "(Tiger) Tiger destroyed" << endl;
}
void Tiger::print() const {
	Mammel::print();
	cout << "(Tiger) Tiger number of souls : " << this->_numOfSouls << endl;
}
void Tiger::makeNoise() const {
	cout << "(Tiger) Tiger noise...ZZZ..." << endl;
}

