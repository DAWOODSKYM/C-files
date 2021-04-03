#include <iostream>
using namespace std;
double temparature(double degrees);
double temparature(double degrees){
	double temp;
	temp=(degrees*9/5)+32;
	return temp;
}
int main(){
	double degrees,Faren;
	cout<<"enter the degrees:"<<endl;
	cin>>degrees;
	Faren=temparature(degrees);
	cout<<"The farenheight value:"<<Faren<<endl;
	return 0;
	
}