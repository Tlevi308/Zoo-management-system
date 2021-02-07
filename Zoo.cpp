#include "Zoo.h"

Zoo::Zoo(string n) :_zooName(n) {
	this->_arr = NULL;
	this->_size = 0;
}
Zoo::~Zoo() {
	for (int i = 0; i < this->_size; i++)
		delete this->_arr[i];
	delete[] this->_arr;
}
void Zoo::printAllAnimals() const {
	cout << "Zoo name : " << this->_zooName << endl;
	if (this->_size == 0) {
		cout << "Empty Zoo" << endl;
		return;
	}
	cout << "Zoo size : " << this->_size << endl;
	for (int i = 0; i < this->_size; i++) {
		cout << "*******************************************" << endl;
		cout << "Animal at index " << i + 1 << " : " << endl;
		this->_arr[i]->print();
		cout << "*******************************************" << endl;
	}
}

void Zoo::animalsParty() const {
		cout << "Zoo name : " << this->_zooName << endl;
		if (this->_size == 0) {
			cout << "Empty Zoo" << endl;
			return;
		}
		cout << "Zoo size : " << this->_size << endl;
		for (int i = 0; i < this->_size; i++)
			this->_arr[i]->makeNoise();	
}
Animal* Zoo::findAnimalBySerialNumber() const {
	cout << "Enter the serial number of the animal : ";
	int s;
	cin >> s;
	for (int i = 0; i < this->_size; i++)
		if (this->_arr[i]->getSerial() == s)
			return this->_arr[i];
	return NULL;
}

int Zoo::findAnimalByName() const {
	cout << "Enter the name of the animal : ";
	string n;
	cin >> n;
	for (int i = 0; i < this->_size; i++)
		if (this->_arr[i]->getName() == n)
			return i;
	return -1;
}
void Zoo::addAnAnimal() {
	Animal** temp = new Animal * [this->_size + 1];
	for (int i = 0; i < this->_size; i++)
		temp[i] = this->_arr[i];
	delete[] this->_arr;
	this->_size++;
	this->_arr = temp;
	int choice;
	cout << "Sub Menu" << endl;
	cout<<"*********"<<endl;
	cout << "0) Animal" << endl;
	cout << "1) Mammel" << endl;
	cout << "2) Insect" << endl;
	cout << "3) Horse" << endl;
	cout << "4) Lion" << endl;
	cout << "5) Tigar" << endl;
	cout << "6) Butterfly" << endl;
	cout << "Which animal you want to add (0-6)? ";
	cin >> choice;
	switch (choice) {
	case 0:this->_arr[this->_size - 1] = new Animal;
		break;
	case 1:this->_arr[this->_size - 1] = new Mammel;
		break;
	case 2:this->_arr[this->_size - 1] = new Insect;
		break;
	case 3:this->_arr[this->_size - 1] = new Horse;
		break;
	case 4:this->_arr[this->_size - 1] = new Lion;
		break;
	case 5:this->_arr[this->_size - 1] = new Tiger;
		break;
	case 6:this->_arr[this->_size - 1] = new Butterfly;
		break;
	default:this->_arr[this->_size - 1] = new Animal;
	}
	cout << "Animal added..." << endl;
			
}
void Zoo::removeAnimal() {
	int index = this->findAnimalByName();
	if (index == -1) {
		cout << "No such animal..." << endl;
		return;
	}
	delete this->_arr[index];
	this->_arr[index] = this->_arr[this->_size - 1];
	Animal** temp = new Animal * [this->_size - 1];
	for (int i = 0; i < this->_size - 1; i++)
		temp[i] = this->_arr[i];
	delete[] this->_arr;
	this->_arr = temp;
	this->_size--;
	cout << "Animal deleted..." << endl;
	
}
void Zoo::SortAllAnimalsByName() {
	int i, j;
	Animal* temp = NULL;
	for (i = 0; i < this->_size; i++) {
		for (j = 0; j < this->_size - i - 1; j++)
			if (this->_arr[j]->getName() > this->_arr[j + 1]->getName()) {
				temp = this->_arr[j];
				this->_arr[j] = this->_arr[j + 1];
				this->_arr[j + 1] = temp;
			}
	}
}
void Zoo::SortAllAnimalsByAge() {
	int i, j;
	Animal* temp = NULL;
	for (i = 0; i < this->_size; i++) {
		for(j = 0 ; j < this->_size-i-1 ; j++)
			if (this->_arr[j]->getAge() > this->_arr[j + 1]->getAge()) {
				temp = this->_arr[j];
				this->_arr[j] = this->_arr[j + 1];
				this->_arr[j+1] = temp;
			}
	}
}
void Zoo::MENU() {
	int choice;
	int index;
	Animal* temp = NULL;
	while (1) {
		cout << "Main Menu" << endl;
		cout << "*********" << endl;
		cout << "0) Exit" << endl;
		cout << "1) Print all Animals int the Zoo" << endl;
		cout << "2) Sort all Animals by names" << endl;
		cout << "3) Sort all Animals by ages" << endl;
		cout << "4) Find animal by name" << endl;
		cout << "5) Find animal by serial number" << endl;
		cout << "6) Insert an animal to the zoo" << endl;
		cout << "7) Remove an animal from the zoo" << endl;
		cout << "8) Animal party" << endl;
		cout << "9) Count animal type" << endl;
		cout << "10) Count mammels" << endl;
		cout << "Your choice : ";
		cin >> choice;
		switch (choice) {
		case 0:
			cout << "Bye bye, c u again" << endl;
			return;
			break;
		case 1: this->printAllAnimals();
			break;
		case 2: this->SortAllAnimalsByName();
			cout << "Sorted by names..." << endl;
			break;
		case 3: this->SortAllAnimalsByAge();
			cout << "Sorted by ages..." << endl;
			break;
		case 4:
			index = this->findAnimalByName();
			if (index == -1) cout << "No such animal" << endl;
			else cout << "Found at index : " << index + 1 << endl;
			break;
		case 5:
			temp = this->findAnimalBySerialNumber();
			if (!temp) cout << "No such animal" << endl;
			else temp->print();
			break;
		case 6:this->addAnAnimal();
			break;
		case 7:
			this->removeAnimal();
			break;
		case 8: this->animalsParty();
			break;
		case 9:
			this->countAnimalType();
			break;
		case 10:
			this->counterMammels();
			break;
		default: 
			cout << "Wrong choice, please try again..." << endl;
		
		}	
	}
}
int Zoo::countAnimalType() const {
	int choice;
	int counter = 0;
	cout << "Sub Menu" << endl;
	cout << "*********" << endl;
	cout << "0) Animal" << endl;
	cout << "1) Mammel" << endl;
	cout << "2) Insect" << endl;
	cout << "3) Horse" << endl;
	cout << "4) Lion" << endl;
	cout << "5) Tigar" << endl;
	cout << "6) Butterfly" << endl;
	cout << "Which animal you want to count (0-6)? ";
	cin >> choice;
	for (int i = 0; i < this->_size; i++) {
		switch(choice){
		case 0:
			if (typeid(*_arr[i]) == typeid(Animal))
				counter++;
			break;
		case 1:
			if (typeid(*_arr[i]) == typeid(Mammel))
				counter++;
			break;
		case 2:
			if (typeid(*_arr[i]) == typeid(Insect))
				counter++;
			break;
		case 3:
			if (typeid(*_arr[i]) == typeid(Horse))
				counter++;
			break;
		case 4:
			if (typeid(*_arr[i]) == typeid(Lion))
				counter++;
			break;
		case 5:
			if (typeid(*_arr[i]) == typeid(Tiger))
				counter++;
			break;
		case 6:
			if (typeid(*_arr[i]) == typeid(Butterfly))
				counter++;
			break;
		}
	}
	cout << "The number of animal is " << counter << endl;
	return counter;
}
int Zoo::counterMammels() const {
	int counter = 0;
	//Mammel* temp = NULL;
	for (int i = 0; i < this->_size; i++)
		if (dynamic_cast<Mammel*>(this->_arr[i])) {
			counter++;
			//temp->eat();
		}
	cout << "The number of mammels is " << counter << endl;
	return counter;
}
