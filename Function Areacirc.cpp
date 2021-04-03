#include<iostream>
using namespace std;
double circumfrence(double radius);
double circumfrence(double radius)
{
	double circumfrence;
	circumfrence = 3.142*(radius*2);
	return circumfrence;
}
double Area(double radius);
double Area(double radius)
{
	double Area;
	Area = 3.142*radius*radius;
	return Area;
}
int main(){
	double radius;
	double circ,are;
	cout<<"Enter the value of length:"<<endl;
	cin>>radius;
	circ=circumfrence(radius);
	are=Area(radius);
	cout<<"The Area of the circle:"<<are<<endl;
	cout<<"The circumfrence of the circle:"<<circ<<endl;
	return 0;
}


