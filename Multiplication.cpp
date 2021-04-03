#include <iostream>
using namespace  std;
class multiply{
	private:
	int x,y;
	public:
	void input(){
		cout<<"input two integers \n";
		cin >>x>>y;
	}
	void mult(){
		cout<<"Result:"<<x*y;
	}
};
int main()
{
	multiply a;
	a.input();
	a.mult();
	return 0;
}