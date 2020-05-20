#include "Class_Colour.h"
Class_Colour:: Class_Colour(             ) {
	this -> Colour = "N/A";
}
Class_Colour:: Class_Colour(string colour) {
	this -> set_Colour(colour);
}
Class_Colour::~Class_Colour(             ) {
	this -> Colour = " ";
}

void   Class_Colour::set_Colour(string& colour) {
	this -> Colour = colour;
}
string Class_Colour::get_Colour(              ) {
	return this -> Colour;
}

void Class_Colour::Display_Colour(                    ) {
	cout << "Colour          >> " << this -> get_Colour() << endl;
}
ostream& operator<<(ostream& out, Class_Colour& Colour) {
	out << "Colour          >> " << Colour.get_Colour() << endl;
	return out;
}