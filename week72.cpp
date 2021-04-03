#include <iostream>
#include<string>
using namespace std;
class employee{
	//data members
	private:
	 int age,serviceYear;
	 double salary;
	 string name;
	 //member functions
	public:
		employee(int,int,double,string);//employee constructor declaration
		~employee();//employee destructor declaration
		
		string getName(){
			cout<<"Enter employee name:";
			cin>>name;
		return name;}
		
		int getAge(){
		cout<<"Enter employee age:";
		cin>>age;	
		return age;}
		
		int getServiceYear(){
		cout<<"Enter employee Service_Year:";
		cin>>serviceYear;
		return serviceYear;}
		
		double getSalary(){
		cout<<"Enter employee Salary:";
		cin>>salary;
		return salary;}
};
//employee constructor defination
employee::employee(int age,int serviceYear,double salary,string name){
			
		
		this-> age=age;
		this-> serviceYear=serviceYear;
		this-> salary=salary;
		this-> name=name;
		} 
//employee destructor defination
employee::~employee(){};
//main function
int main(){
	int age,serviceYear;
 	double salary;
	string name;
	
 	employee employee(age,serviceYear ,salary ,name);
	cout<<"The employee Age is:"<<employee.getAge()<<endl;
	cout<<"The service Year is:"<<employee.getServiceYear()<<endl;
	cout<<"The salary is Ksh :"<<employee.getSalary()<<endl;
	cout<<"The Employee name is:"<<employee.getName()<<endl;
	return 0;
}