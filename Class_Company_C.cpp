#include "Class_Company_C.h"
Class_Company_C:: Class_Company_C(              ) {
	this -> Company = "N/A";
}
Class_Company_C:: Class_Company_C(string company) {
	this -> set_Company(company);
}
Class_Company_C::~Class_Company_C(              ) {
	this -> Company = " ";
}

void   Class_Company_C::set_Company(string& company) {
	this -> Company = company;
}
string Class_Company_C::get_Company(               ) {
	return this -> Company;
}

void Class_Company_C::Display_Company(              ) {
	cout << "Company Name    >> " << this -> get_Company() << endl;
}
ostream& operator<<(ostream& out, Class_Company_C& C) {
	out << "Company Name    >> " << C.get_Company() << endl;
	return out;
}