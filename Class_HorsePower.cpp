#include "Class_HorsePower.h"
Class_HorsePower:: Class_HorsePower(              ) {
	this -> HorsePower = 0;
}
Class_HorsePower:: Class_HorsePower(int horsePower) {
	this -> set_HorsePower(horsePower);
}
Class_HorsePower::~Class_HorsePower(              ) {
	this -> HorsePower = 0;
}

void Class_HorsePower::set_HorsePower(int& horsePower) {
	this -> HorsePower = horsePower;
}
int  Class_HorsePower::get_HorsePower(               ) {
	return this -> HorsePower;
}

void Class_HorsePower::Display_HorsePower(                      ) {
	cout << "Horse Power     >> " << this -> get_HorsePower() << endl;
}
ostream& operator << (ostream& out, Class_HorsePower& HorsePower) {
	out << "Horse Power     >> " << HorsePower.get_HorsePower() << endl;
	return out;
}