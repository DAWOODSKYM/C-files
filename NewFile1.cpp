#include <iostream>
using namespace std;
class dave{
	private:
		int x,y;
		public:
		dave(int x1,int y1){x = x1;y=y1;}
		//copy constructor
		dave(const dave &p2){x = p2.x;y = p2.y;}
		int getx() {return x;}
		int gety() {return y;}
};
int main()
{
	dave p1(10,15);//normal constructor is called
	dave p2 = p1;//copy constructor is called
	//Accesing values called by the constructors
	cout<<"p1.x="<<p1.getx()<<",p1.y="<<p1.gety();
	cout<<"\np2.x="<<p2.getx()<<",p2.y="<<p2.gety();
	return 0;
}