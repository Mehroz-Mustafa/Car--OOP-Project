#include "Class_Cylinder.h"
Class_Cylinder:: Class_Cylinder(            ) {
	this -> Cylinder = 0;
}
Class_Cylinder:: Class_Cylinder(int cylinder) {
	this -> set_Cylinder(cylinder);
}
Class_Cylinder::~Class_Cylinder(            ) {
	this -> Cylinder = 0;
}

void Class_Cylinder::set_Cylinder(int& cylinder) {
	this -> Cylinder = cylinder;
}
int  Class_Cylinder::get_Cylinder(             ) {
	return this -> Cylinder;
}

void Class_Cylinder::Display_Cylinder(                    ) {
	cout << "Cylinder        >> " << this -> get_Cylinder() << endl;
}
ostream& operator<<(ostream& out, Class_Cylinder& Cylinder)
{
	out << "Cylinder        >> " << Cylinder.get_Cylinder() << endl;
	return out;
}
