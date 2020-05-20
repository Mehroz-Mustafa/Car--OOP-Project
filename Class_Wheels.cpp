#include "Class_Wheels.h"
Class_Wheels:: Class_Wheels() {
	this -> Size = 0;
}
Class_Wheels:: Class_Wheels(Class_Type& type, Class_Colour& colour, Class_Company_W& company, Class_Rims& rims, int size) {
	this -> set_Type   (type   );
	this -> set_Colour (colour );
	this -> set_Company(company);
	this -> set_Rims   (rims   );
	this -> set_Size   (size   );
}
Class_Wheels::~Class_Wheels() {
	this -> Type   .~Class_Type     ();
	this -> Colour .~Class_Colour   ();
	this -> Company.~Class_Company_W();
	this -> Rims   .~Class_Rims     ();
	this -> Size = 0;
}

void Class_Wheels::set_Type   (Class_Type     & type   ) {
	this -> Type = type;
}
void Class_Wheels::set_Colour (Class_Colour   & colour ) {
	this -> Colour = colour;
}
void Class_Wheels::set_Company(Class_Company_W& company) {
	this -> Company = company;
}
void Class_Wheels::set_Rims   (Class_Rims     & rims   ) {
	this -> Rims = rims;
}
void Class_Wheels::set_Size   (int            & size   ) {
	this -> Size = size;
}

Class_Type      Class_Wheels::get_Type() {
	return this -> Type;
}
Class_Colour    Class_Wheels::get_Colour() {
	return this -> Colour;
}
Class_Company_W Class_Wheels::get_Company() {
	return this -> Company;
}
Class_Rims      Class_Wheels::get_Rims() {
	return this -> Rims;
}
int             Class_Wheels::get_Size() {
	return this -> Size;
}

void Class_Wheels::Display_Wheels() {
	cout << this -> Type          << this -> Colour
		 << this -> Company       << this -> Rims;
	cout << "Size            >> " << this -> get_Size() << endl;
}
ostream& operator<<(ostream& out, Class_Wheels& Wheels) {
	out << Wheels.Type           << Wheels.Colour
		<< Wheels.Company        << Wheels.Rims;
	out << "Size            >> " << Wheels.get_Size() << endl;
	return out;
}