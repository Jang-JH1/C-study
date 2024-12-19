#include "Cap.h"
using namespace std;

int main()
{
	Car myCar;

	myCar.SetSpeed(100);
	cout << "현재 속도 : " << myCar.getSpeed() << endl;

	return 0;
}