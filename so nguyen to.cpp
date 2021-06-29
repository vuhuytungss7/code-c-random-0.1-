#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    int tong=0;
    cin >> n;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
	
	int count = 0;
    for(int j = 2; j <= (a[i])/2; j++){
        if(a[i] % j == 0 ){
            count++;
        }
    }
    if(count==0 && a[i]!=1)
    {
    	tong=tong+a[i];
	}
	}
	cout<< tong;
	
}
