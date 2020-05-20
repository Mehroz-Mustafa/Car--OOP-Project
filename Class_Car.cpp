#include "Class_Car.h"
Class_Car:: Class_Car(              ) {
	this -> ModelNo = "N/A";
	this -> Brand   = "N/A";
	this -> Type    = "N/A";
	this -> Seats   = 0;
}
Class_Car:: Class_Car(string modelNo, string brand, string type, int seats, Class_Engine& engine, Class_Chassis& chassis, Class_Wheels& wheels) {
	this -> set_ModelNo(modelNo);
	this -> set_Brand  (brand  );
	this -> set_Type   (type   );
	this -> set_Seats  (seats  );
	this -> set_Engine (engine );
	this -> set_Chassis(chassis);
	this -> set_Wheels (wheels );
}
Class_Car::~Class_Car(              ) {
	/*this -> Engine .~Class_Engine ();
	this -> Chassis.~Class_Chassis();
	this -> Wheels .~Class_Wheels ();*/
}

void Class_Car::set_ModelNo(string&        modelNo) {
	this -> ModelNo = modelNo;
}
void Class_Car::set_Brand  (string&        brand  ) {
	this -> Brand = brand;
}
void Class_Car::set_Type   (string&        type   ) {
	this -> Type = type;
}
void Class_Car::set_Seats  (int   &        seats  ) {
	this -> Seats = seats;
}
void Class_Car::set_Engine (Class_Engine & engine ) {
	this -> Engine = engine;
}
void Class_Car::set_Chassis(Class_Chassis& chassis) {
	this -> Chassis = chassis;
}
void Class_Car::set_Wheels (Class_Wheels & wheels ) {
	this -> Wheels = wheels;
}

string        Class_Car::get_ModelNo() {
	return this -> ModelNo;
}
string        Class_Car::get_Brand  () {
	return this -> Brand;
}
string        Class_Car::get_Type   () {
	return this -> Type;
}
int           Class_Car::get_Seats  () {
	return this -> Seats;
}
Class_Engine  Class_Car::get_Engine (){
	return this -> Engine;
}
Class_Chassis Class_Car::get_Chassis() {
	return this -> Chassis;
}
Class_Wheels  Class_Car::get_Wheels () {
	return this -> Wheels;
}

void Class_Car::operator = (Class_Car& Car      )
{
	this -> ModelNo = Car.ModelNo;
	this -> Brand   = Car.Brand  ;
	this -> Type    = Car.Type   ;
	this -> Seats   = Car.Seats  ;
	this -> Engine  = Car.Engine ;
	this -> Chassis = Car.Chassis;
	this -> Wheels  = Car.Wheels ;
}
void Class_Car::Display_Car(                    ) {
	cout << "General Information :-" << endl
		 << "Model Number    >> " << this -> get_ModelNo() << endl
		 << "Brand           >> " << this -> get_Brand  () << endl
		 << "Type            >> " << this -> get_Type   () << endl
		 << "Number of Seats >> " << this -> get_Seats  () << endl
		 << "Engine  Information :-" << endl 
		 << this -> Engine           << endl
		 << "Chassis Information :-" << endl 
		 << this -> Chassis          << endl
		 << "Wheels  Information :-" << endl 
		 << this -> Wheels           << endl;
}
ostream& operator<<(ostream& out, Class_Car& Car) {
	out << "General Information :-" << endl
		<< "Model Number    >> " << Car.get_ModelNo() << endl
		<< "Brand           >> " << Car.get_Brand  () << endl
		<< "Type            >> " << Car.get_Type   () << endl
		<< "Number of Seats >> " << Car.get_Seats  () << endl
		<< "Engine  Information :-" << endl 
		<< Car.Engine               << endl
		<< "Chassis Information :-" << endl 
		<< Car.Chassis              << endl
		<< "Wheels  Information :-" << endl
		<< Car.Wheels               << endl;
	return out;
}