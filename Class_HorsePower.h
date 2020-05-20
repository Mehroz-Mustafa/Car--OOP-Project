#include <iostream>
#include <string>
using namespace std;

class Class_HorsePower
{
public:
	 Class_HorsePower();
	 Class_HorsePower(int);
	~Class_HorsePower();

	void set_HorsePower(int& );
	int  get_HorsePower();

	void   Display_HorsePower();
	friend ostream& operator << (ostream&, Class_HorsePower&);
private:
	int HorsePower;
};