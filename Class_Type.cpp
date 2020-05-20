#include "Class_Type.h"
Class_Type:: Class_Type(           ) {
	this -> Type = "N/A";
}
Class_Type:: Class_Type(string type) {
	this -> set_Type(type);
}
Class_Type::~Class_Type(           ) {
	this -> Type = " ";
}

void   Class_Type::set_Type(string& type) {
	this -> Type = type;
}
string Class_Type::get_Type(            ) {
	return this -> Type;
}

void Class_Type::Display_Type(                    ) {
	cout << "Type            >> " << this -> get_Type() << endl;
}
ostream& operator<<(ostream& out, Class_Type& Type) {
	out << "Type            >> " << Type.get_Type() << endl;
	return out;
}
