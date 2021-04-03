#include <iostream>
using namespace std;
float &largestfraction(float &a,float &b,float &c)
{if (a>b and a>c)
	return a;
	else if(b>a and b>c)
		return b;
	else
return c;
}
int main()
{
float a,b,c;
cout<<"Enter a fraction a>>";cin>>a;
cout<<"Enter a fraction b>>";cin>>b;
cout<<"Enter a fraction c>>";cin>>c;
cout<<endl;
cout<<"The Largest fraction is:"<<largestfraction(a,b,c)<<endl;
return 0;
}