#include <iostream>
#include <math.h>
using namespace std;
void nguyento(int i)
{
	int count=0;
	for(int j=2;j<i;j++)
	{
		if(i%j==0)
		{ count=count+1;
		}
		
	}
	if(count==0)
	{
		cout<<i<<" ";
	}
}
void hoanhao(int i)
{
	
	int tong=0;
	for(int j=1;j<i;j++)
	{
		if(i%j==0)
		{ tong=tong+j;
		}
		
	}
	
	if(tong==i)
	{
		cout<<i<<" ";
	}
}
void chinhphuong(int i)
{
	for(int j=2;j<=(i/2);j++)
	{
		if(j*j==i)
		{ cout<<i<<" ";
		}
		
	}
}
int main()
{
	double n;
	cin>>n;
	for(double i=2;i<=n;i++)
	{
		nguyento(i);

	}
	cout<<endl;
	for(double i=2;i<=n;i++)
	{
	
		hoanhao(i);
		
	}
	cout<<endl;
	for(double i=2;i<=n;i++)
	{

	chinhphuong(i);
	}

}

