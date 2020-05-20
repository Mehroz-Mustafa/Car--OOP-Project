#include "Class_Type.h"
class Class_Colour
{
public:
	 Class_Colour();
	 Class_Colour(string);
	~Class_Colour();

	void   set_Colour(string& );
	string get_Colour();

	void   Display_Colour();
	friend ostream& operator << (ostream&, Class_Colour&);

private:
	string Colour;
};