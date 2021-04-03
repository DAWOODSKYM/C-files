// Program to find largest fraction among three fractions using 
// call by reference and return reference
#include <iostream>
using namespace std;
//funtion declaration
//pass by reference and returning by reference
double& largestfraction(double&,double&,double&);
//function defination
double & largestfraction(double &x,double &y,double &z){
	if(x > y && x > z)
		return x;//returning reference variable
	else if(y > x && y> z)
		return y;//returning reference variable
	else
		return z;//returning reference variable
}
int main(){
	double a,b,c;
	cout<<"enter first fraction:";cin >> a;
	
	cout<<"enter second fraction:";cin >> b;
	
	cout<<"enter third fraction:";cin >> c;

//function call and output
	cout<<"Largest fraction is :"<< largestfraction(a,b,c)<< endl;
	return 0;
}

