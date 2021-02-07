#include "Lion.h"


Lion::Lion() {
	this->_type = 4;
	cout << "(Lion) Enter the lion's volume : ";
	cin >> this->_volume;
	cout << "(Lion) Lion constructed" << endl;
}
Lion::~Lion() {
	cout << "(Lion) Lion destroyed" << endl;
}
void Lion::print() const {
	Mammel::print();
	cout << "(Lion) Lion's volume : " << this->_volume << endl;
}
void Lion::makeNoise() const {
	cout << "(Lion) Lion noise...ZZZ..." << endl;
}
