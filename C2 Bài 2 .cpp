#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	double x;
	int y;
	cout<<"Nhap so x= ";
	cin>>x;
	cout<<"nhap so mu y= ";
	cin>>y;
	double k=1;
	for(int i=1;i<=y;i++)
	{
		k=k*x;
	}
	if(k==pow(x,y))
	{
		cout<<k;
	}
	
}

