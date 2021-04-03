#include <iostream>
using namespace std;


// Returns true if x is in range [low..high], else false
bool inRange(unsigned low, unsigned high, unsigned x)
{	int i;
	for(i=0;i<20;i++){
 return (low <= x && x <= high);
}


}

int main()
{
	int x;
	int numbers[21];
	cout<< "enter a value:"; cin>>x;
	for (int i = 0; i < 20; ++i) 
  		{
        cin >> numbers[i];
        if(inRange(1, 100, x)){
		 cout << "Yes\n" : cout <<"No\n";
		}else
		{
		{
		cout <<"No\n";	
		}
		}
		 
    }

//inRange(10, 100, 5)? cout << "Yes\n": 
}