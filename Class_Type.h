#include "Class_Engine.h"
class Class_Type
{
public:
	 Class_Type();
	 Class_Type(string);
	~Class_Type();

	void   set_Type(string& );
	string get_Type();

	void   Display_Type();
	friend ostream& operator << (ostream&, Class_Type&);

private:
	string Type;
};