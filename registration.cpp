/*
C++ program to create GEGIS Student database, read and print given number(Say n) student's details
(Example of array of objects).
*/
#include <bits/stdc++.h>
#include <iostream>
#include <string.h>

using namespace std;

#define MAX 100

class Student
{
    private:

        string  name;
        string   Reg_No;
        float   total_Mrks;
        float grading_points;

    public: //The details remain publicly accessible to all from outside access

        //member function to get student's details
        void getDetails(void);

        void PrintTitle()
       {
           cout<<"\t\t\t GEGIS STUDENT DATABASE DEMO USING OOP AND ARRAYS"<<endl;
           cout<<"\t\t\t ================================================\n"<<endl;
       }

        //Member function to out put student's details
        void fill_Details(void);
};

//Member function definition, outside of the class at end of class
void Student::getDetails(void)
{
    cout << "Name: ";
    cin >> name;
    cout << "Student's Reg No: ";
    cin >> Reg_No;
    cout << "Total marks out of 100: ";
    cin >> total_Mrks;

    grading_points = (total_Mrks/100)*12;
}

//member function definition, outside of the class

void Student::fill_Details(void)
{
    cout << "Student Details: "<<endl;
    cout << "Name:"<< name << " | Reg Number:" << Reg_No << " | Total:" << total_Mrks << " | Percentage:" << grading_points<<"| Grade: "<<endl;
}

int main()
{
    Student std[MAX];       //array of objects creation
    int n, iter_;
    Student PT;
    PT.PrintTitle();

    cout << "Enter total number of students: " ;
    cin >> n;

    for(iter_=0; iter_< n; iter_++)
        {
            cout <<endl<<"Enter details of student " << iter_+1 <<endl;
            std[iter_].getDetails();
        }

    cout << endl;

    for(iter_=0;iter_< n; iter_++)

        {
            cout <<endl<<"Details of student " << (iter_+1) << ":\n";
            std[iter_].fill_Details();
        }


    return 0;
}
