#include "Class_Engine.h"
Class_Engine:: Class_Engine() {
	this -> NoOfGears = 0;
	this -> TopSpeed  = 0;
}
Class_Engine:: Class_Engine(Class_Cylinder& cylinder, Class_HorsePower& horsePower, int noOfGears, int topSpeed) {
	this -> set_Cylinder  (cylinder  );
	this -> set_HorsePower(horsePower);
	this -> set_NoOfGears (noOfGears );
	this -> set_TopSpeed  (topSpeed  );
}
Class_Engine::~Class_Engine()
{
	this -> HorsePower.~Class_HorsePower();
	this -> Cylinder  .~Class_Cylinder  ();
	this -> NoOfGears = 0;
	this -> TopSpeed  = 0;
}

void Class_Engine::set_Cylinder  (Class_Cylinder  & cylinder  ) {
	this -> Cylinder = cylinder;
}
void Class_Engine::set_HorsePower(Class_HorsePower& horsePower) {
	this -> HorsePower = horsePower;
}
void Class_Engine::set_NoOfGears (int             & noOfGears ) {
	this -> NoOfGears = noOfGears;
}
void Class_Engine::set_TopSpeed  (int             & topSpeed  ) {
	this -> TopSpeed = topSpeed;
}

Class_Cylinder   Class_Engine::get_Cylinder  () {
	return this -> Cylinder;
}
Class_HorsePower Class_Engine::get_HorsePower() {
	return this -> HorsePower;
}
int              Class_Engine::get_NoOfGears () {
	return this -> NoOfGears;
}
int              Class_Engine::get_TopSpeed  () {
	return this -> TopSpeed;
}

void Class_Engine::Display_Engine(                    ) {
	cout << this -> HorsePower
		 << this -> Cylinder;
	cout << "No Of Gears     >> " << this -> get_NoOfGears() << endl
		 << "Top Speed       >> " << this -> get_TopSpeed () << endl;
}
ostream& operator<<(ostream& out, Class_Engine& Engine) {
	out << Engine.Cylinder
	    << Engine.HorsePower;
	out << "No Of Gears     >> " << Engine.get_NoOfGears() << endl
		<< "Top Speed       >> " << Engine.get_TopSpeed () << endl;
	return out;
}