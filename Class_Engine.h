#include "Class_Cylinder.h"
class Class_Engine
{
public:
	 Class_Engine();
	 Class_Engine(Class_Cylinder&, Class_HorsePower&, int, int);
	~Class_Engine();

	void set_Cylinder  (Class_Cylinder  &);
	void set_HorsePower(Class_HorsePower&);
	void set_NoOfGears (int             &);
	void set_TopSpeed  (int             &);

	Class_Cylinder   get_Cylinder  ();
	Class_HorsePower get_HorsePower();
	int              get_NoOfGears ();
	int              get_TopSpeed  ();

	void   Display_Engine();
	friend ostream& operator << (ostream&, Class_Engine&);

private:
	Class_Cylinder   Cylinder;
	Class_HorsePower HorsePower;
	int              NoOfGears;
	int              TopSpeed;
};