#include <iostream>
#include<math.h>
using namespace std;
 
int main()
{
	double a[4];
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
	double tong=0;
	for(int i=0;i<5;i++)
	{
		tong=tong+a[i];
	}
	cout<<"Diem trung binh 5 mon hoc: "<<(double)tong/5;
}

