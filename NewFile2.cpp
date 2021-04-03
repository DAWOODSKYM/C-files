/*A C++ code*/
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"enter integer"<<a <<endl;
	cin>>a;
	cout<<"enter integer"<<b<<endl;
	cin>>b;
	cout<<"enter integer"<<c<<endl;
	cin>>c;
	
	
	if(a>c)
	{
		cout<<"a"<<endl;
	}
	else if(b>a)
	{
		cout<<"b"<<endl;
	}
	else
	{
		cout<<"c"<<endl;
	}
	
	return 0;
}