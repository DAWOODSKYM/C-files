#include <iostream>
#include<string>
using namespace std;
class Employee{
	protected:
		string name;
		int salary,rate,hours;
	public:	
	Employee(string n,int a=0,int b=0,int c=0){
			name=n;
			salary=a;
			rate=b;
			hours=c;
		}
		virtual string Name(){
			cout<<"Enter the Employee firs Name,initial,last Name"<<endl;
			return (name);
		}
		virtual int salaryA(){
		cout<<"The salary is:"<<endl;
		return 0;}		
};
class SalaryEmployee:public Employee{
	public:
		SalaryEmployee(string n,int a=0,int b=0,int c=0):Employee(n,a,b,c)
		{}
			string Name(){
				cout<<"The employee name is:"<<name<<endl;
				return name;
			}
		int salaryA(){
			cout<<"The Salaried Employee earns Ksh:"<<salary<<endl;
			return(salary);
		}
};
class HourlyEmployee:public Employee{
	public:
		HourlyEmployee(string n,int a=0,int b=0,int c=0):Employee(n,a,b,c)
		{}
		string Name(){
			cout<<"The employee name is:"<<name<<endl;
			return name;
		}
		int salaryA(){
			cout<<"The Hourly Employee earns Ksh "<<(rate*hours)<<endl;
			return(rate*hours);
		}
};
int main(){
	Employee *employee;
	SalaryEmployee sal("David M. Kimotho",30000);
	HourlyEmployee He("Hector n. Belering",1,12,50);
	employee = &sal;
	employee->Name();;
	employee->salaryA();
	
	employee = &He;
	employee->Name();
	employee->salaryA();
	return 0;
	
}