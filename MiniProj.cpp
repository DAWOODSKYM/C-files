#include<iostream>
#include<string>
using namespace std;
class personalDetails{
	public:
		string name,course;
		int date,idNo,year,RegNo,Fees;
	public:
		
		string getName(){
				cout<<"Enter Name:"<<endl;
				cin>>name;
				return name;
		}
		string getCourse(){
				cout<<"Enter Course:"<<endl;
				cin>>course;
				return course;
		}
		int getidNo(){
			cout<<"Enter IdNo"<<endl;
			cin>>idNo;
			return idNo;
		}
		int setRegno(){
		RegNo=1;
		return RegNo;}
		int setYear(){
			year=1;
		return year;}
		
};
class Academic:public personalDetails{
	public:
		string Units;
	public:
		int getRegno(){
			return RegNo;
		}
		string setUnits(){
			Units ="Goeg1,Econ1,Surv1,Geometry1";
		return Units;}
		
};
class Fees:public personalDetails{
	public:
		int getyear(){return year;}
		int getRegno(){return RegNo;}
		int setFees(){
			int Fees = 20000;
		return Fees;}
};
int main(){
	personalDetails Student1;
	Academic Ac1;
	Fees Fe1;
	Student1.getName();
	Student1.getCourse();
	cout<<"Registration Number:"<<Student1.setRegno()<<endl;
	Student1.getidNo();
	Student1.setYear();
	
	cout<<"The student:Registration No:"<<Ac1.setRegno()<<endl;
	cout<<"Will take The units:"<<Ac1.setUnits()<<endl;
	
	cout<<"The student:Registration Number:"<<Fe1.setRegno()<<endl;
	cout<<"Of Year:"<<Fe1.setYear()<<endl;
	cout<<"Will pay the Fees:"<<Fe1.setFees()<<endl;
	return 0;
}