#include <iostream>
#include<math.h>
using namespace std;
void chinhphuong(int n)
{
	int i = 0;
    while(i*i <= n){
        if(i*i == n){
         cout<<n<<" ";   
        }
        ++i;
    }
}
void hoanhao(int n)
{	int k=n;
	int tong=0;
	for(int i=1;i<n;i++)
	{	if(n%i==0)
		tong=tong+i;
	}
	if(tong==n)
	{
		cout<<n<<" ";
	}
}
void nguyento(int n)
{
	int dem = 0;
    for(int i = 2; i <= sqrt(n); i++)
	{
        if(n % i == 0
		){
            dem++;
        }
    }
    if(dem == 0)
	{
        cout <<n<<" ";
    }
}
int main(){
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    cout<<"cac so chinh phuong: ";
    for(int i=2;i<=n;i++)
    {
    	chinhphuong(i);
	}
	cout<<"\ncac so hoan hao: ";
	for(int i=2;i<=n;i++)
    {
    	hoanhao(i);
	}
	cout<<"\ncac so nguyen to: ";
    for(int i=2;i<=n;i++)
    {
    	nguyento(i);
	}
}
