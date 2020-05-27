//Ostyn Sy
#include "Ostyn_Sy_HeartRates.h"
int main()
{
	HeartRates info;//object
	info.setName();//calls all needed functions
	info.setDates();
	info.getName();
	info.getDates();
	cout << "Age: " << info.getAge() << endl;
	cout << "Maximum Heart Rate: " << info.getMaximumHeartRate()<< endl;
	info.getTargetHeartRate();
	return 0;
}