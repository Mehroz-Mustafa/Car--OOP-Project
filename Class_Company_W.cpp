#include "Class_Company_W.h"
Class_Company_W:: Class_Company_W(              ) {
	this -> Company = "N/A";
}
Class_Company_W:: Class_Company_W(string company) {
	this -> set_Company(company);
}
Class_Company_W::~Class_Company_W(              ) {
	this -> Company = " ";
}

void   Class_Company_W::set_Company(string& company) {
	this -> Company = company;
}
string Class_Company_W::get_Company(               ) {
	return this -> Company;
}

void Class_Company_W::Display_Company(              ) {
	cout << "Company Name    >> " << this -> get_Company() << endl;
}
ostream& operator<<(ostream& out, Class_Company_W& C) {
	out << "Company Name    >> " << C.get_Company() << endl;
	return out;
}