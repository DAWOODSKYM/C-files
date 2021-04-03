#include <iostream>
using namespace std;
int main()
{
	int test[2][3][2];
	cout <<"enter 12 values: \n";
	//inserting the values into the test array
	///using 3 nested for loops
	for(int i=0; i< 2;i++){
		for(int j=0;j<3;j++){
			for(int k=0;k<2;k++){
				cin>>test[i][j][k];
			}
		}
	}
	cout<<"\nDisplaying value Stored:"<<endl;
	for(int i = 0;i< 2;i++){
		for(int j =0;j <3;j++){
			for(int k=0; k< 2;k++){
				cout<<test[i][j][k]<<"\t";
			}
		}cout<<endl;
	}
	return 0;
}
//"test["<< i <<"]["<<j<<"]["<<k<<"]="