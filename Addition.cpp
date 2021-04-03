#include <iostream>
using namespace std;
class Mathematics{
	int x,y;
	public:
		void input(){//function to get input from the user
			cout<<"input two integers \n";
			cin>> x >> y;
		}
		void add(){//function to add the values of the user
			cout << "Result:" <<x+y;
		}
};
int main()
{
	Mathematics m;//creating an object of the class
	m.input();//calling the function input
	m.add();//calling the function add
	return 0;
}