#include<iostream>
using namespace std;
double recArea(double width,double length);
double recArea(double width,double length)
{
	double area1;
	area1 = length*width;
	return area1;
}
int main(){
	double width;
	double length;
	double area;
	cout<<"Enter the value of length:"<<endl;
	cin>>length;
	cout<<"Enter the value of the ht:"<<endl;
	cin>>width;
	area=recArea(width,length);
	cout<<"The area of the triangle:"<<area<<endl;
	return 0;
}
