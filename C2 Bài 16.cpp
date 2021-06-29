#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	do
	{
		cout<<"\nNhap vao mot so trong khoang 0..9: ";
		cin>>n;
		switch(n)
		{
			case 0:
				cout<<"Vua nhap chu so khong";
				break;
			case 1:
				cout<<"Vua nhap chu so mot";
				break;
			case 2:
				cout<<"Vua nhap chu so hai";
				break;
			case 3:
				cout<<"Vua nhap chu so ba";
				break;
			case 4:
				cout<<"Vua nhap chu so bon";
				break;
			case 5:
				cout<<"Vua nhap chu so nam";
				break;
			case 6:
				cout<<"Vua nhap chu so sau";
				break;
			case 7:
				cout<<"Vua nhap chu so bay";
				break;
			case 8:
				cout<<"Vua nhap chu so tam";
				break;
			case 9:
				cout<<"Vua nhap chu so chin";
				break;
		}
	} while(n<10);
}
