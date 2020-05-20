#include "Class_Company_C.h"
class Class_ChassisNumber
{
public:
	 Class_ChassisNumber();
	 Class_ChassisNumber(int);
	~Class_ChassisNumber();

	void set_ChassisNumber(int&);
	int  get_ChassisNumber();

	void   Display_ChassisNumber();
	friend ostream& operator << (ostream&, Class_ChassisNumber&);

private:
	int ChassisNumber;
};