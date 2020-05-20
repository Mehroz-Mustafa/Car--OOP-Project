#include "Class_Chassis.h"
class Class_Car
{
public:
	 Class_Car();
	 Class_Car(string, string, string, int, Class_Engine&, Class_Chassis&, Class_Wheels&);
	 ~Class_Car();

	void set_ModelNo(string       &);
	void set_Brand  (string       &);
	void set_Type   (string       &);
	void set_Seats  (int          &);
	void set_Engine (Class_Engine &);
	void set_Chassis(Class_Chassis&);
	void set_Wheels (Class_Wheels &);

	string        get_ModelNo();
	string        get_Brand  ();
	string        get_Type   ();
	int           get_Seats  ();
	Class_Engine  get_Engine ();
	Class_Chassis get_Chassis();
	Class_Wheels  get_Wheels ();

	void operator = (Class_Car &);
	void   Display_Car();
	friend ostream& operator << (ostream&, Class_Car&);

private:
	string        ModelNo;
	string        Brand;
	string        Type;
	int           Seats;
	Class_Engine  Engine;
	Class_Chassis Chassis;
	Class_Wheels  Wheels;
};