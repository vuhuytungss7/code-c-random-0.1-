#include <iostream>
using namespace std;
int check(double a, double b, double c)
{
    if(a+ b > c && a + c > b && b + c > a)
    
	{return 1;}
    else {return 0;}
	
}

void vuong(double a, double b,double c)
{
	if(a*a+b*b==c*c)
	{
		cout<<"vuong ";
	}
}
void can(double a, double b,double c)
{
	if(c==b && b!=a) {
		cout<<"can";
	}
}
void deu(double a, double b,double c )
{
	if(a==b && b ==c) {
		cout<<"deu";
	}
}
void tu(double a, double b,double c )
{
	if(a*a > b*b+c*c || b*b > a*a+c*c || c*c > a*a+b*b)    
            cout<<"tu";
}
void sapxep(double &a, double &b, double &c)
{
	int x=c;
	if(c<b) {c=b;
			 b=x;
			 x=c;}
	if (c<a){c=a;
			a=x;
			x=a;}
	if (a>b) {a=b;
			b=x;	}
	
}
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    sapxep(a,b,c);
    if(check(a,b,c) == 1)
 	{ cout<<a+b+c<<endl;
	vuong(a,b,c);
	can(a,b,c);
	deu(a,b,c);
	tu(a,b,c);
	}
	else {
		cout<<"Invalid";
	}
    
}

