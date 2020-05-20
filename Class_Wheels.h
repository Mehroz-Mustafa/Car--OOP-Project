#include "Class_Rims.h"
class Class_Wheels
{
public:
	 Class_Wheels();
	 Class_Wheels(Class_Type&, Class_Colour&, Class_Company_W&, Class_Rims&, int);
	~Class_Wheels();

	void set_Type   (Class_Type      &);
	void set_Colour (Class_Colour    &);
	void set_Company(Class_Company_W &);
	void set_Rims   (Class_Rims      &);
	void set_Size   (int             &);

	Class_Type      get_Type   ();
	Class_Colour    get_Colour ();
	Class_Company_W get_Company();
	Class_Rims      get_Rims   ();
	int             get_Size   ();

	void   Display_Wheels();
	friend ostream& operator << (ostream&, Class_Wheels&);

private:
	Class_Type      Type;
	Class_Colour    Colour;
	Class_Company_W Company;
	Class_Rims      Rims;
	int             Size;
};