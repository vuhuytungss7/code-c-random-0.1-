#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
double delta(double &a, double &b, double &c)
{
	int delta= pow(b,2)-4*a*c;
	return delta;
}
void tinh(double a, double b, double c, double d)
{
	double x1= ( -b+ sqrt(d) ) / (2*a);
	double x2= ( -b- sqrt(d) ) / (2*a);
	if(x1<x2){
		cout<< fixed << setprecision(2)<<x1<<endl<< fixed << setprecision(2)<<x2;
	}
	else if(x1>x2)
	{
		cout<< fixed << setprecision(2)<<x2<<endl<< fixed << setprecision(2)<<x1;
	}
	else
	{
		cout<<fixed << setprecision(2)<<x1;
	}
	
}
void phuc(double a, double b, double c, double d )
{
	d=-d;
	double x=  sqrt(d)  / (2*a);


	cout<<fixed << setprecision(2)<<-b/(2*a)<<" "<<fixed << setprecision(2)<<-x<<endl<<-b/(2*a)<<" "<<fixed << setprecision(2)<<x;
	
}
int main()
{
	double a,b,c;
	cin>>a>>b>>c;
	double	d= delta(a,b,c);
	if(d>=0)
	{
		tinh(a,b,c,d);
	}
	else
	{
		phuc(a,b,c,d);
	}
	
	
}
