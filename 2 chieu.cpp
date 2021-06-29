#include<iostream>

using namespace std;

int main() {
    int h,c;
  cin>>h>>c;
    int a[h][c];
    int tong=0;
    for(int i=0;i<h;i++)
    {
        for(int j=0;i<c;j++)
        {
            cin>>a[i][j];
        }

    }
    for(int i=0;i<h;i++)
    {
        for(int j=0;i<c;j++)
        {
            if(a[i][j]%5==0)
            {tong=tong+a[i][j];}
        }

    }
    cout<<tong;

    return 0;
}

