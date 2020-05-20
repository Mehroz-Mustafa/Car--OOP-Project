#include "Class_Car.h"
#include <vector>
Class_Car get_Data(int&);
void Display_Data(vector<Class_Car>&, int&);

int main()
{
	cout << "How many Cars Data Do You Want To Enter? >> ";
	int L; cin >> L;
	vector <Class_Car> Car;
	for (int i = 0; i < L; i++) {
		Class_Car Temp = get_Data(i);
		Car.push_back(Temp);
	}
	Display_Data(Car, L);
	cout << endl << endl; 
	return EXIT_SUCCESS;
}
Class_Car get_Data(int& i) {
	cout << "<============ Car Information # " 
		 << i + 1 << " ============>" << endl;
	cout << "Engine's Information :-" << endl;
	int tempA = 0, tempB = 0;
	cout << "Enter Horse Power     >> ";
	cin  >> tempA;
	Class_Cylinder   Cylinder(tempA);
	cout << "Enter Number of Gears >> ";
	cin >> tempB;
	Class_HorsePower HorsePower(tempB);
	cout << "Enter Total Cylinders >> ";
	cin >> tempA;
	cout << "Enter Top Speed       >> ";
	cin >> tempB;
	Class_Engine Engine(Cylinder, HorsePower, tempA, tempB);

	cout << "Wheel's  Information :-" << endl;
	string tempC, tempD, tempE;
	cout << "Enter Type            >> ";
	cin >> tempC;
	Class_Type Type(tempC);
	cout << "Enter Colour          >> ";
	cin >> tempD;
	Class_Colour Colour(tempD);
	cout << "Enter Company Name    >> ";
	cin >> tempE;
	Class_Company_W Company_W(tempE);
	cout << "Enter Rims Type       >> ";
	cin >> tempC;
	Class_Rims Rims(tempC);
	cout << "Enter Size            >> ";
	cin >> tempA;
	Class_Wheels Wheels(Type, Colour, Company_W, Rims, tempA);

	cout << "Chassis  Information :-" << endl;
	cout << "Enter Company Name    >> ";
	cin >> tempD;
	Class_Company_C Company_C(tempD);
	cout << "Enter Number          >> ";
	cin >> tempB;
	Class_ChassisNumber ChassisNumber(tempB);
	Class_Chassis       Chassis(Company_C, ChassisNumber);

	cout << "General Information  :-" << endl;
	cout << "Enter Model Number    >> ";
	cin >> tempC;
	cout << "Enter Brand           >> ";
	cin >> tempD;
	cout << "Enter Type            >> ";
	cin >> tempE;
	cout << "Enter Number of Seats >> ";
	cin >> tempA;
	Class_Car Car(tempC, tempD, tempE, tempA, Engine, Chassis, Wheels);
	return Car;
}
void Display_Data(vector<Class_Car>& Car, int& L) {
	for (int i = 0; i < L; i++) {
		cout << "<==================================>" 
			 << endl << Car[i] << endl;
	}
}