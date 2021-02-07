#pragma once
#include<iostream>
#include<string>

using namespace std;

class Animal
{
private:
	static int _counterForSerial;
	int _serialNumber;
	string _name;
	int _age;
protected:
	int _type;
public:
	virtual void print() const;
	virtual void makeNoise() const;
	Animal();
	Animal(string n);
	virtual ~Animal();
	int getSerial() const { return this->_serialNumber; }
	string getName() const { return this->_name; }
	int getAge() const { return this->_age; }
};

