#include<iostream>
using namespace std;
//Base class
class square{
//data members
	public:
		int side;
//member functions
	public:
	//constructor declaration and definition
		square(int)
		{this ->side = side;}
	//destructor declaration and definition	
		~square(){};
		
		int getArea(){
			cout<<"Enter the length of the side:";
			cin>>side;
			return (side*side);
		}
		int getPeri(){
		return (side*4);}

};
//derived class
class cube:public square{

//member functions
	public:
	//derived class constructor
		cube(int side):square(side)
		{this ->side = side;}
	//derived class destructor	
		~cube(){};
		int getArea(){
			cout<<"Enter the length of the side:";
			cin>>side;
			return (side*side);
		}
		int getVolume(){
			return (side*side*side);
		}
};
int main(){
	int side;
	square square(side);//constructor call
	cube cube(side);//constructor call
	//function call and output
	cout<<"The area is: "<<square.getArea()<<endl;
	cout<<"The perimeter is: "<<square.getPeri()<<endl;
	cout<<"The Area is: "<<cube.getArea()<<endl;
	cout<<"The volume is: "<<cube.getVolume()<<endl;
	return 0;
}