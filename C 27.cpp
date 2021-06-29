#include<iostream>
#include<math.h>
using namespace std;


int main(){
  int n;
  for(;;)
  {
  	cout<<"\n";
  	cin>>n;
  	
  	if(n>0&& n%5==0)
  	{
  		cout<<n/5;
	  }
	  else if(n==-1)
	  {
	  	cout<<"Bye";
	  	break;
	  }
	  else
	  {
	  	cout<<-1;
	  }
	  
  }
}

