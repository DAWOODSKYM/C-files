#include<iostream>
using namespace std;
class division{//division is the class name
	private://data member specifier
	 	double x,y;//data member
	 	 public://function member specifier
	 	 	void input(){//function member
	 	 		cout<<"input two integers";
				  cin>>x>>y;
			  }
			  void div(){//function member
				  cout<<"Result:"<< x/y;
			  }
};
int main(){//application part
	division r;//object creation(r)
	r.input();//input function call
	r.div();//div function call
	//return 0;
}