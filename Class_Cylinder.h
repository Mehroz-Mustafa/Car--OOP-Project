#include "Class_HorsePower.h"
class Class_Cylinder
{
public:
	 Class_Cylinder();
	 Class_Cylinder(int);
	~Class_Cylinder();

	void set_Cylinder(int& );
	int  get_Cylinder();

	void   Display_Cylinder();
	friend ostream& operator << (ostream&, Class_Cylinder&);

private:
	int Cylinder;
};