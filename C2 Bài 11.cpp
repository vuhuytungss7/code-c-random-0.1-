#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double f;
	double c;
	double k;
	
	cout<<"Fahrenheit"<<"     Celsius"<<"     Absolute Value"<<endl;
	for(f=0;f<=300;f=f+20)	
	{
		c=(f-32)*5/9;
	
	k=c+273.15;

	cout<< fixed << setprecision (2)<<" "<<f<<"        "<<c<<"       "<<k<<endl;
	}

	
	
}
