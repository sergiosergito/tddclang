#include "UnitTest.h"

int main()
{
	//int variable
	//myAssertEqualsInt(6,6);
	//myAssertEqualsInt(4,4);
	//myAssertEqualsInt(-1,-1);
	//float variable
	//myAssertEqualsFloat(6.0,6.0);
	//myAssertEqualsFloat(0.0,0.0);
	//myAssertEqualsFloat(-1.0,-1.0);
	//myAssertEqualsFloat(999.09,999.09);
	//myAssertEqualsFloat(0.42565,0.42565);
	//myAssertEqualsFloat(-1.0001,-1.0001);
	//Floats variable and errors
	//myAssertEqualsFloat(6.0,6.00);
	//myAssertEqualsFloat(0.0,0.000);
	//myAssertEqualsFloat(-1.0,-1.000);
	//myAssertEqualsFloat(999.0,999.09);
	//myAssertEqualsFloat(0.4265,0.42565);
	//myAssertEqualsFloat(-1.001,-1.0001);
	//Double variables
	myAssertEqualsDouble(6.0,6.00);
	myAssertEqualsDouble(0.0,0.000);
	myAssertEqualsDouble(-1.0,-1.000);
	myAssertEqualsDouble(999.0,999.09);
	myAssertEqualsDouble(0.4265,0.42565);
	myAssertEqualsDouble(-1.001,-1.0001);
	return 0;
}
