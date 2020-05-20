#include "Class_Company_W.h"
class Class_Rims
{
public:
	 Class_Rims();
	 Class_Rims(string);
	~Class_Rims();

	void   set_Rims(string&);
	string get_Rims();

	void   Display_Rims();
	friend ostream& operator << (ostream&, Class_Rims&);

private:
	string Rims;
};