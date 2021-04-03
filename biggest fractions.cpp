#include<iostream>
#include<conio.h>
using namespace std;
int findbiggest(int,int,int);
int main()

{
double num1,num2,num3;
cout<<"enter the first number to compare:";
cin>>num1;
cout<<"enter the second number to compare:";
cin>>num2;
cout<<"enter third number to compare:";
cin>>num3;
int result=findbiggest(num1,num2,num3);
cout<<"biggest number is:"<<result;
getch();
return 0;
}
int findbiggest(int num1,int num2,int num3,){
int biggest;
if (num1>=num2&&num1>==num3){
biggest=num1;
}
else if(num2>=num1&&num2>==num3){
biggest=num2;
}
else{biggest=num3;
}
return biggest;
}