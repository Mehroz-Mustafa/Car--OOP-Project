#include "Class_ChassisNumber.h"
class Class_Chassis
{
public:
	 Class_Chassis();
	 Class_Chassis(Class_Company_C&, Class_ChassisNumber&);
	~Class_Chassis();

	void set_Company      (Class_Company_C    &);
	void set_ChassisNumber(Class_ChassisNumber&);

	Class_Company_C     get_Company      ();
	Class_ChassisNumber get_ChassisNumber();

	void   Display_Chassis();
	friend ostream& operator << (ostream&, Class_Chassis&);

private:
	Class_Company_C     Company;
	Class_ChassisNumber ChassisNumber;
};