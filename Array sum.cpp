#include <iostream>
using namespace std;
int main(){
	int numbers[5], sum =0;
	cout<<"enter 5 numbers:";
	//storing 5 numbers entered by the user in an array and finding their sum
	for(int i= 0;i<5;++i){
		cin >> numbers[i];
		sum += numbers[i];
	}
	//print array elements
	size_t n =sizeof(numbers)/sizeof(numbers[0]);
	//loop through elements
	for(size_t i=0;i<n;i++)
	{
		std::cout<<numbers[i]<< ' ';
	}
	cout <<  "sum = " <<sum << endl;
		return 0;
}