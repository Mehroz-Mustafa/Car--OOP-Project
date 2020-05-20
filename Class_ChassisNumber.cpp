#include "Class_ChassisNumber.h"
Class_ChassisNumber:: Class_ChassisNumber(                 ) {
	this -> ChassisNumber = 0;
}
Class_ChassisNumber:: Class_ChassisNumber(int chassisNumber) {
	this -> set_ChassisNumber(chassisNumber);
}
Class_ChassisNumber::~Class_ChassisNumber(                 ) {
	this -> ChassisNumber = 0;
}

void Class_ChassisNumber::set_ChassisNumber(int& chassisNumber) {
	this -> ChassisNumber = chassisNumber;
}
int  Class_ChassisNumber::get_ChassisNumber(                  ) {
	return this -> ChassisNumber;
}

void Class_ChassisNumber::Display_ChassisNumber(                    ) {
	cout << "ChassisNumber   >> " << this -> get_ChassisNumber() << endl;
}
ostream& operator<<(ostream& out, Class_ChassisNumber& ChassisNumber)
{
	out << "ChassisNumber   >> " << ChassisNumber.get_ChassisNumber() << endl;
	return out;
}