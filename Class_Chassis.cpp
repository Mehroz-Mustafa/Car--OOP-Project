#include "Class_Chassis.h"
Class_Chassis:: Class_Chassis() {
}
Class_Chassis:: Class_Chassis(Class_Company_C& company, Class_ChassisNumber& chassisNumber) {
	this -> set_Company      (company      );
	this -> set_ChassisNumber(chassisNumber);
}
Class_Chassis::~Class_Chassis() {
	this -> Company      .~Class_Company_C    ();
	this -> ChassisNumber.~Class_ChassisNumber();
}

void Class_Chassis::set_Company      (Class_Company_C    & company      ) {
	this -> Company = company;
}
void Class_Chassis::set_ChassisNumber(Class_ChassisNumber& chassisNumber) {
	this -> ChassisNumber = chassisNumber;
}

Class_Company_C     Class_Chassis::get_Company      () {
	return this -> Company;
}
Class_ChassisNumber Class_Chassis::get_ChassisNumber() {
	return this -> ChassisNumber;
}

void Class_Chassis::Display_Chassis(                    ) {
	cout << this -> Company
		 << this -> ChassisNumber;
}
ostream& operator<<(ostream& out, Class_Chassis& Chassis) {
	out << Chassis.Company
		<< Chassis.ChassisNumber;
	return out;
}