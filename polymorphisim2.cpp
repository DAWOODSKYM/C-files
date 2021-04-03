//polymorphism use
#include <iostream>
using namespace std;
//base class
class Shape{
	protected:
		int width,height;
		public:
			Shape(int a=0,int b=0){
				width= a;
				height= b;
			}
			virtual int area(){
				cout<<"Parent class area:"<<endl;
				return 0;
			}
};
//1st derived class
class Rectangle:public Shape{
	//function member
	public:
		Rectangle(int a=0,int b=0):Shape(a,b)
		{}
			int area(){
				cout<<"rectangle class area:"<<width*height<<endl;
				return(width*height);
			}
};
//2nd derived classs triangle
class Triangle:public Shape{
	//function member
	public:
		Triangle(int a=0,int b=0):Shape(a,b)
		{}
			int area(){
				cout<<"triangle Class area"<<width*height/2<<endl;
				return(width*height/2);
			}
};
//main function
int main(){
	//use of polymorphism//oobject is a pointer
	Shape *shape;
	//object instantiation
	cout<<"with polymorphism"<<endl;
	Rectangle rec(10,6);
	Triangle tri(10,4);
	//store the adress of the rectangle & call triangle area function
	shape = &rec;
	shape -> area();
	//store address of triangle &call the triangle area function
	shape =&tri;
	shape -> area();
	//print areas......no polymorphism
	Rectangle geom(10,6);
	Triangle geomx(10,4);
	//use the arrow operator
	cout<<"Within polymorphism"<<endl;
	geom.area();
	geomx.area();
	return 0;
		
}