#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
	double f;
	double c;
	double k;
	cout<<"Nhap nhiet do F= ";
	cin>>f;
	
	c=(f-32)*5/9;
	
	k=c+273.15;
	cout<<"Fahrenheit"<<"     Celsius"<<"     Absolute Value"<<endl;
	cout<< fixed << setprecision (2)<<f<<"          "<<c<<"       "<<k;
}
