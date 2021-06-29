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
    int a,b,A,B;
    cout<<"nhap tu so = ";
    cin>>a;
    A=a;
    if(a<0){ A=-a; }
	cout<<"nhap mau so = ";
    cin>>b;
	B=b;  
   	if(b<0) {B=-b;}
	   
    
    
    
    cout<<"phan so toi gian la: "<< A/ucln(A,B)<<"/"<<B/ucln(A,B); 
}

