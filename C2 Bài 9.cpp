#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"nhap so n = ";
	cin>>n;
	int tongcs=0;
	for(int i;;)
	{	if(n<=9)
		{ tongcs= tongcs+n;
		break;
		}
		i=n%10;
		n=n/10;
		tongcs=tongcs+i;
		
	}
	cout<<tongcs;
}
