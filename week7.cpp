#include <iostream>
#include<string>
using namespace std;
class employee{
	private:
	 string name;
	 int age,serviceYear;
	 double salary;
	public:
		employee(string,int,int,double);
		~employee();
	
		string getname(){return name;}
		int getage(){return age;}
		int getserviceYear(){return serviceYear;}
		double getsalary(){return salary;}
	
			
};
employee::employee(string name,int age,int serviceYear,double salary){
			
		this-> name=name;
		this-> age=age;
		this-> serviceYear=serviceYear;
		this-> salary=salary;
		cout<<"Enter employee name:";
		cin>>name;
		cout<<"Enter employee age:";
		cin>>age;
		cout<<"Enter employee Service_Year:";
		cin>>serviceYear;
		cout<<"Enter employee Salary:";
		cin>>salary;	
		} 
employee::~employee(){};

int main(){
	employee employee1();
	
	employee1.getname();
	employee1.getage();
	employee1.getserviceYear();
	employee1.getsalary();
	return 0;
}