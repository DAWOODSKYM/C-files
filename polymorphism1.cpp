//A program to show simple polymorphism
//*polymorphic variables(pointers,references)*exchangable objects*virtual functions

#include <iostream>
#include <string>
using namespace std;
//defination of base Class 
class base{
	public:
//polymorphic condition		
			virtual void print()const{
			cout<<"i am the base class"<<endl;
		}
};
//defination sf a derived class 
class Derived:public base{
	public:
		virtual void print()const{
			cout<<"I am the derived"<<endl;
		}
};
int main(){
	//creation of a pointer to the base class(polymorphic variables)
	base *ptr;
	//let the ptr point to an object of the base class
	ptr = new base();
	//to access members of a class through a pointer use the arrow opperator
	ptr ->print();
	delete ptr;
	//let the ptr point to an object of the deerivedd class
	ptr = new Derived();
	//use the arrow operator
	ptr->print();
	delete ptr;
	return 0;
}