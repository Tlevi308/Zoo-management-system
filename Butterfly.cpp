#include "Butterfly.h"

Butterfly::Butterfly() {
	this->_type = 6;
	cout << "(Butterfly) Enter the butterfly's color : ";
	cin >> this->_color;
	cout << "(Butterfly) Butterfly constructed" << endl;
}
Butterfly::~Butterfly() {
	cout << "(Butterfly) Butterfly destroyed" << endl;
}
void Butterfly::print() const {
	Insect::print();
	cout << "(Butterfly) Butterfly's color : " << this->_color << endl;
}
void Butterfly::makeNoise() const {
	cout << "(Butterfly) Butterfly noise...ZZZ..." << endl;
}

