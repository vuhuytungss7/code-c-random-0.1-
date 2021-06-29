#include <iostream>
#include<math.h>
using namespace std;
 
int main(){
    int n;
    cout<<"Nhap n = ";
    cin>>n;
    int i = 0;
    while(i*i <= n){
        if(i*i == n){
            cout<<n<<" la so chinh phuong";
            return 0;
        }
        ++i;
    }
    cout<<n<<" khong la so chinh phuong";
}
