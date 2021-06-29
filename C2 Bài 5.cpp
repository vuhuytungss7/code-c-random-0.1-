#include<iostream>
#include<math.h>
using namespace std;
int ucln(int a,int b)
{
    int u;
    for ( int i=1;i<a;i++)
    {
        if (a%i==0 && b%i ==0)
        {
            u = i;
        }
    }
    return u;
}
int main()

{
    int a,b;
    cout<<"nhap a = "<<endl;
    cin>>a;
	cout<<"nhap b = "<<endl;
    cin>>b;
    if (a<0||b<0)
    {
        cout<<"Nhap lai";
    }
    else
    { cout<<"UCLN cua a va b la: "<< ucln(a,b); }
}

