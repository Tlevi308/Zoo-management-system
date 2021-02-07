#include "Mammel.h"

void Mammel::print() const {
	Animal::print();
	if (this->_isGotMilk)
		cout << "(Mammel) Mammel got milk" << endl;
	else
		cout << "(Mammel) Mammel didn't get milk" << endl;
}
void Mammel::makeNoise() const {
	cout << "(Mammel) Mammel noise...ZZZ..." << endl;
}
Mammel::Mammel() {
	this->_type = 1;
	cout << "(Mammel) Enter if the mammel got milk (T/F) : ";
	char t;
	cin >> t;
	if (t=='T' || t=='t') this->_isGotMilk = true;
	else this->_isGotMilk = false;
	cout << "(Mammel) Mammel constructed" << endl;
}
Mammel::Mammel(string n):Animal(n) {
	this->_type = 1;
	cout << "(Mammel) Enter if the mammel got milk (T/F) : ";
	char t;
	cin >> t;
	if (t == 'T' || t == 't') this->_isGotMilk = true;
	else this->_isGotMilk = false;
	cout << "(Mammel) Mammel constructed" << endl;
}
Mammel::~Mammel() {
	cout << "(Mammel) Mammel destroyed" << endl;
}

