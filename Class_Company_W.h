#include "Class_Colour.h"
class Class_Company_W
{
public:
	Class_Company_W();
	Class_Company_W(string);
	~Class_Company_W();

	void   set_Company(string&);
	string get_Company();

	void   Display_Company();
	friend ostream& operator << (ostream&, Class_Company_W&);

private:
	string Company;
};