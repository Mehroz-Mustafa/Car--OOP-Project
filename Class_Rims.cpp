#include "Class_Rims.h"
Class_Rims:: Class_Rims(           ) {
	this -> Rims = "N/A";
}
Class_Rims:: Class_Rims(string rims) {
	this -> set_Rims(rims);
}
Class_Rims::~Class_Rims(           ) {
	this -> Rims = " ";
}

void   Class_Rims::set_Rims(string& rims) {
	this -> Rims = rims;
}
string Class_Rims::get_Rims(            ) {
	return this -> Rims;
}

void Class_Rims::Display_Rims(                    ) {
	cout << "Rims            >> " << this -> get_Rims() << endl;
}
ostream& operator<<(ostream& out, Class_Rims& Rims) {
	out << "Rims            >> " << Rims.get_Rims() << endl;
	return out;
}