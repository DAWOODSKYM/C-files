#include <iostream>
using namespace std;
class POINT
{
	private:
		   int	x,y;
		public:
		//parameter constructor
		POINT(int x1,int y1)
		{
			x =x1;
			y = y1;
		}
		int getx()
		{
			return x;
		}
		int gety()
		{
			return y;
		}
};
int main()
{
	//constructor called
	POINT p1(10,15);
	//access values assigned by constructor
	cout<<"p1.x="<<p1.getx()<<"p1.y="<<p1.gety();
	return 0;
}