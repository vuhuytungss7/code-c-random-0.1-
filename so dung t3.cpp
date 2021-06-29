#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
void nhap(double a[])
{
	for(int i=0;i<5;i++)
	{
		cin>>a[i];
	}
}
void sapxep(double a[])
{
	for(int i=0;i<4;i++)
	{
		for(int j=i+1;j<5;j++)
		if(a[i]<a[j])
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
}
int main()
{
	double a[4];
	nhap(a);
	sapxep(a);
	cout<<a[2];
	
	
}
