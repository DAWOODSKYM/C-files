#include<iostream>
using namespace std;
int sum(int a,int b,int c);
int sum(int a,int b,int c)
{
	int sum;
	sum=a+b+c;
	return sum;
}
int product(int a,int b,int c);
int product(int a,int b,int c)
{
	int prod;
	prod=a*b*c;
	return prod;
}
int main(){
int a,b,c,summ,produ;
cout<<"Enter the 3 numbers"<<endl;
cin>>a;
cin>>b;
cin>>c;
summ=sum(a,b,c);
produ=product(a,b,c);
cout<<"The sum is:"<<summ<<endl;
cout<<"The product is:"<<produ<<endl;
return 0;
}
