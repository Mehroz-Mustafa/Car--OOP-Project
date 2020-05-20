#include "Class_Wheels.h"
class Class_Company_C
{
public:
	 Class_Company_C();
	 Class_Company_C(string);
	~Class_Company_C();

	void   set_Company(string&);
	string get_Company();

	void   Display_Company();
	friend ostream& operator << (ostream&, Class_Company_C&);

private:
	string Company;
};