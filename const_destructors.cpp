#include <string>
#include <iostream>
using namespace std;
/****************************************************************
* Declare a class named Dog 									*
*****************************************************************/
class Dog {
	/**private variable members**/
		int age, weight;
		string color;
	public:
		void bark(){
			cout<<"WOOF!"<<endl;
		}
		/**constructor declaration**/
		Dog(int, int, string);
		/**destructor declaration**/
		~Dog();
		
		int getAge(){return age;}
		int getWeight(){return weight;}
		string getColor(){return color;}
};
/**constructor definition**/
Dog::Dog(int age, int weight, string color){
/****************************************************************************
* Where the argument name and class member names are different, 			*
* the this -> class pointer is not needed in the setter method definitions	*
*****************************************************************************/
	this -> age = age;
	this -> weight = weight;
	this -> color = color;
}
/**destructor definition**/
Dog::~Dog(){
	cout<<"Object destroyed"<<endl;
}
int main(){
	Dog rex(4,15,"brown");
	Dog susy(7,20,"gray");
	
	cout << "Rex is a "<< rex.getColor() <<" dog"<< endl;
	cout << "Rex is "<< rex.getAge() <<" years old"<< endl;
	cout << "Rex weighs "<<rex.getWeight() <<" kgs"<< endl;
	
	cout << "Susy is a "<< susy.getColor() <<" dog"<< endl;
	cout << "Susy is "<< susy.getAge() <<" years old"<< endl;
	cout << "Susy weighs "<<susy.getWeight() <<" kgs"<< endl;
	
	rex.bark();
	susy.bark();
	
	return 0;
}